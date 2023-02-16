from os.path import join, exists
from shutil import rmtree
from sqlalchemy.exc import IntegrityError
from git import Repo

from src.config import PROJECT_ROOT_PATH
from src.entity.project import Project
from src.setting import session

OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')


def clone_project(project_origin_url: str):
    project_name = project_origin_url.split('.git')[0].split('/')[-1]
    organizer = project_origin_url.split('.git')[0].split('/')[-2]
    output_path = join(OUTPUT_ROOT_PATH, project_name)

    # clone済みのprojectが存在するなら事前に削除する。
    if exists(output_path):
        rmtree(output_path)

    repo = Repo.clone_from(project_origin_url, output_path,
                           multi_options=["--recursive"])

    project = Project(
        name=project_name,
        url=project_origin_url,
        commit_hash=repo.head.commit,
        organizer=organizer
    )

    try:
        session.add(project)
        session.commit()
    except IntegrityError as err:
        session.rollback()
        print(err)
    return session.query(Project).filter(
        Project.url == project_origin_url).one()


def main():
    clone_project('https://github.com/apache/age.git')


if __name__ == '__main__':
    main()
