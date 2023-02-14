from os.path import join, exists
from glob import glob
from shutil import rmtree
from git import Repo

from src.config import PROJECT_ROOT_PATH
from src.entity.project import Project
from src.setting import session

OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')


def clone_project(project_origin_url: str):
    project_name = project_origin_url.split('.git')[0].split('/')[-1]
    output_path = join(OUTPUT_ROOT_PATH, project_name)

    # clone済みのprojectが存在するなら事前に削除する。
    if exists(output_path):
        rmtree(output_path)

    Repo.clone_from(project_origin_url, output_path,
                    multi_options=["--recursive"])

    # new_commit = repo.head.commit
    src_file_paths = glob(join(output_path, "**/*"), recursive=True)

    project = Project(name=project_name, url=project_origin_url,
                      total_file_count=len(src_file_paths))

    session.add(project)
    session.commit()


def main():
    clone_project('https://github.com/apache/age.git')


if __name__ == '__main__':
    main()
