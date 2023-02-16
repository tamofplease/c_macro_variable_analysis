
from os.path import join
from xml.etree.ElementTree import parse
from sqlalchemy.exc import IntegrityError

from src.entity.xml_file import XmlFile
from src.entity.macro_variable import MacroVariable
from src.entity.file_macro_variable import DefinePositionType, FileUsedMacroVariable
from src.config import PROJECT_ROOT_PATH
from src.setting import session

OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')
XML_ROOT_PATH = join(PROJECT_ROOT_PATH, 'xml')

MACRO_USED_KEY = '{http://www.srcML.org/srcML/src}name'


def extract_used_macro(xml_file_id: int):
    xml_file: XmlFile = session.query(XmlFile).filter(
        XmlFile.id == xml_file_id).one()
    src_file = xml_file.src_file
    xml_src_path = join(XML_ROOT_PATH, src_file.project.name,
                        xml_file.path, xml_file.name)
    root = parse(xml_src_path).getroot()

    macro_variables: list[MacroVariable] = session.query(MacroVariable).all()
    macro_key_map: dict[str, MacroVariable] = {
        macro.key: macro for macro in macro_variables}
    used_macro_count_map: dict[MacroVariable, int] = {}

    for element in root.iter(MACRO_USED_KEY):
        if element.text in macro_key_map:
            key = macro_key_map[element.text]
            if key in used_macro_count_map:
                used_macro_count_map[key] += 1
            else:
                used_macro_count_map[key] = 1
    define_position: DefinePositionType = DefinePositionType.IN_PROJECT
    for define_macro in src_file.define_macro_variables:
        used_macro_count_map[define_macro] -= 1
        define_position = DefinePositionType.IN_FILE

    for used_macro_variable, cnt in used_macro_count_map.items():
        for _ in range(cnt):
            relation = FileUsedMacroVariable(
                src_file_id=src_file.id,
                macro_variable_id=used_macro_variable.id,
                type=define_position
            )
            session.add(relation)
    try:
        session.commit()
    except IntegrityError as err:
        session.rollback()
        print(err)
