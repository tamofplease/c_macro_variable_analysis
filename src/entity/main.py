from src.setting import ENGINE
from src.setting import Base

# pylint: disable=unused-import
from src.entity.project import Project
from src.entity.src_file import SrcFile
from src.entity.xml_file import XmlFile
from src.entity.macro_variable import MacroVariable
from src.entity.file_macro_variable import \
    file_available_macro_variable, \
    file_define_macro_variable, \
    file_used_macro_variable
# pylint: enable=unused-import


def main():
    Base.metadata.drop_all(bind=ENGINE)

    Base.metadata.create_all(bind=ENGINE)


if __name__ == "__main__":
    main()
