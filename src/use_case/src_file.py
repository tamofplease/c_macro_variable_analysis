from os.path import join, isdir
from pathlib import Path
from glob import glob
from sqlalchemy.exc import IntegrityError

from src.setting import session
from src.entity.src_file import SrcFile
from src.entity.project import Project
from src.config import PROJECT_ROOT_PATH


OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')


def save_files_by_project_id(project_id: int) -> list[SrcFile]:
    project = session.query(Project).get(project_id)
    project_root_path = join(OUTPUT_ROOT_PATH, project.name)

    src_file_paths = [f_path for f_path in glob(
        join(project_root_path, "**/*"), recursive=True) if not isdir(f_path)]
    for src_file_path in src_file_paths:
        try:
            with open(src_file_path, encoding='utf-8') as f_r:
                loc = sum(1 for _ in f_r)
                path = Path(src_file_path)
            session.add(
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
    try:
        session.commit()
    except IntegrityError as err:
        session.rollback()
        print(err)
    return session.query(SrcFile).filter(SrcFile.project_id == project_id).all()
