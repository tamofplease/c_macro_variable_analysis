from src.entity.project import Project
from src.entity.src_file import SrcFile

from src.use_case.project import clone_project
from src.use_case.src_file import save_files_by_project_id
from src.use_case.xml_file import generate_xml_file, InvalidExtensionException
from src.use_case.define_macro import extract_define_macro
from src.use_case.used_macro import extract_used_macro


class ProjectNotFoundException(Exception):
    pass


def collect_data(project_url: str):
    try:
        project: Project = clone_project(project_origin_url=project_url)

        if project is None:
            raise ProjectNotFoundException()

        src_files: list[SrcFile] = save_files_by_project_id(
            project_id=project.id)
        print(len(src_files))

        c_or_h_files: list[SrcFile] = [
            src_file for src_file in src_files if src_file.extension in ('.h', '.c')]

        for src_file in c_or_h_files:
            try:
                # run srcML to create xml files
                xml_file = generate_xml_file(src_file_id=src_file.id)

                extract_define_macro(xml_file_id=xml_file.id)

                extract_used_macro(xml_file_id=xml_file.id)

            except InvalidExtensionException as err:
                print(err)

    except ProjectNotFoundException as exc:
        print(exc)
