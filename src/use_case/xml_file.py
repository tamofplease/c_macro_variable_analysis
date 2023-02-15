from os.path import join, exists
from os import makedirs
from subprocess import run, PIPE, CalledProcessError

from src.entity.src_file import SrcFile
from src.entity.xml_file import XmlFile
from src.config import PROJECT_ROOT_PATH
from src.setting import session

OUTPUT_ROOT_PATH = join(PROJECT_ROOT_PATH, 'out')
XML_ROOT_PATH = join(PROJECT_ROOT_PATH, 'xml')


class InvalidExtensionException(Exception):
    pass


class XmlFileAlreadyExistException(Exception):
    pass


def generate_xml_file(src_file_id: int):
    src_file = session.query(SrcFile).get(src_file_id)

    if not src_file.extension in ('.c', '.h'):
        raise InvalidExtensionException(
            f'file extension must one of .c or .h {src_file.extension}')

    project = src_file.project

    # 入力元のfile_path
    input_file_path = join(OUTPUT_ROOT_PATH, project.name,
                           src_file.path, src_file.name)

    # 出力先のfile情報
    output_file_dir = join(XML_ROOT_PATH, src_file.path)
    output_file_name = src_file.name + '.xml'
    output_file_path = join(output_file_dir, output_file_name)

    # すでに出力が存在する場合は何もしない
    if exists(output_file_path):
        raise XmlFileAlreadyExistException(
            f'xml file already exists in: {output_file_path}')

    # 出力先のdirが存在しない場合は作成する。
    if not exists(output_file_dir):
        makedirs(output_file_dir)

    try:
        proc = run(
            f'srcml {input_file_path}',
            shell=True,
            stdout=PIPE,
            stderr=PIPE,
            text=True,
            check=True,
        )
        content = proc.stdout
        with open(output_file_path, mode='w', encoding='utf-8', errors='ignore') as f_w:
            f_w.writelines(content)
        xml_file = XmlFile(
            name=output_file_name,
            path=src_file.path,
            src_file=src_file,
        )
        session.add(xml_file)
        session.commit()
    except CalledProcessError as err:
        print(f'{err} has occured while executing with file_id: {src_file_id}')
        print(proc.stderr)


def main():
    generate_xml_file(src_file_id=179)


if __name__ == "__main__":
    main()
