from os.path import join
from xml.etree.ElementTree import parse

from src.entity.src_file import SrcFile
from src.entity.xml_file import XmlFile
from src.entity.macro_variable import MacroVariable, MacroVariableType
from src.config import PROJECT_ROOT_PATH
from src.setting import session

OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')
XML_ROOT_PATH = join(PROJECT_ROOT_PATH, 'xml')

MACRO_DEFINE_KEY = './/{http://www.srcML.org/srcML/cpp}define'


def extract_define_macro(xml_file_id: int):
    xml_file = session.query(XmlFile).get(xml_file_id)
    src_file = session.query(SrcFile).get(xml_file.src_file_id)
    xml_src_path = join(XML_ROOT_PATH, xml_file.path, xml_file.name)
    tree = parse(xml_src_path)
    root = tree.getroot()
    define_elements = root.findall(MACRO_DEFINE_KEY)
    for define_element in define_elements:
        key = define_element[1][0].text
        value = define_element[2].text if len(define_element) > 2 else ""

        macro_type = MacroVariableType.VARIADIC
        if (len(define_element[1]) > 1):
            macro_type = MacroVariableType.FUNCTIONAL
        if (key.startswith('__')):
            macro_type = MacroVariableType.PREDEFINE

        macro_variable = MacroVariable(
            key=key,
            value=value,
            type=macro_type
        )
        src_file.define_macro_variables.append(macro_variable)

        session.add(macro_variable)
    session.add(src_file)
    session.commit()


def main():
    extract_define_macro(2)


if __name__ == "__main__":
    main()
