from src.setting import session
from src.entity.project import Project
from src.entity.src_file import SrcFile
from src.entity.xml_file import XmlFile
from src.entity.macro_variable import MacroVariable

project = Project(
    name="sample_p", url="https://something.com", commit_hash="something commit", organizer="sample.org")

srcFile = SrcFile(name="something.c",
                  path="sample_p/some/thing/something.c", extension="c", loc=123)
srcFile.project = project

xmlFile = XmlFile(name="something.c.xml",
                  path="something/some/thing/something.c.xml", src_file_id=srcFile.id)
xmlFile.src_file = srcFile

define_macro_variable = MacroVariable(
    key="__DEFINE", value="100", type="PREDEFINE")
available_macro_variable = MacroVariable(
    key="__AVAILABLE", value="100", type="PREDEFINE")
used_macro_variable = MacroVariable(
    key="__USED", value="100", type="PREDEFINE")

srcFile.define_macro_variables.append(define_macro_variable)
srcFile.available_macro_variables.append(available_macro_variable)
srcFile.used_macro_variables.append(used_macro_variable)

session.add_all([project, srcFile, xmlFile])
session.commit()
