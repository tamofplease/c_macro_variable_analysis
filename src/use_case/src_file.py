from os.path import join, isdir
from pathlib import Path
from glob import glob

from src.setting import session
from src.entity.src_file import SrcFile
from src.entity.project import Project
from src.config import PROJECT_ROOT_PATH


OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')


def save_files_by_project_id(project_id: int):
    project = session.query(Project).get(project_id)
    project_root_path = join(OUTPUT_ROOT_PATH, project.name)

    src_file_paths = glob(join(project_root_path, "**/*"), recursive=True)
    src_files = []
    for src_file_path in src_file_paths:
        if (isdir(src_file_path)):
            continue
        try:
            with open(src_file_path, encoding='utf-8') as f:
                loc = sum(1 for _ in f)
                path = Path(src_file_path)
            src_files.append(
                SrcFile(
                    name=path.name,
                    path=src_file_path.replace(
                        project_root_path + '/', "").replace(path.name, ""),
                    extension=path.suffix,
                    loc=loc,
                    project=project
                )
            )
        except UnicodeDecodeError:
            pass
    session.add_all(src_files)
    session.commit()


def main():
    save_files_by_project_id(1)


if __name__ == "__main__":
    main()
