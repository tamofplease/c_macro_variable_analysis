from sys import argv
from src.setting import session

from src.entity.project import Project
from src.entity.src_file import SrcFile
from src.entity.xml_file import XmlFile
from src.entity.macro_variable import MacroVariable, MacroVariableType

from src.use_case.project import clone_project
from src.use_case.src_file import save_files_by_project_id
from src.use_case.xml_file import generate_xml_file, InvalidExtensionException, XmlFileAlreadyExistException
from src.use_case.define_macro import extract_define_macro


def main(arg):
    src_file = session.query(SrcFile).get(236)

    for asoc in src_file.used_macro_variables:
        print(asoc.type)
        print(asoc.macro_variable.type, asoc.macro_variable.key)

    print(src_file.name, src_file.path)


if __name__ == "__main__":
    main(argv[1])
