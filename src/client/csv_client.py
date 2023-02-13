import os
import csv


class FileNotFoundException(Exception):
    pass


class InvalidPropException(Exception):
    pass


class CsvClient():
    def __init__(self, db_path: str):
        self.path = db_path

    def __get_output_path(self, table_name: str) -> str:
        return self.path + '/' + table_name + '.csv'

    def create_table(self, table_name: str, columns: tuple[str, ...]):
        tgt_path: str = self.__get_output_path(table_name=table_name)
        with open(tgt_path, "w", encoding='utf-8') as f_out:
            writer = csv.writer(f_out)
            writer.writerow(columns)
        return columns

    def insert(self, table_name: str, data: tuple[str, ...]) -> tuple[str, ...]:
        tgt_path: str = self.__get_output_path(table_name=table_name)

        if not os.path.exists(tgt_path):
            raise FileNotFoundException()

        with open(tgt_path, "a", encoding='utf-8') as f_out:
            writer = csv.writer(f_out)
            writer.writerow(data)
        return data

    def list_all(self, table_name: str) -> list[dict[str, str]]:
        tgt_path = self.__get_output_path(table_name=table_name)
        if not os.path.exists(tgt_path):
            raise FileNotFoundException()

        with open(tgt_path, "r", encoding='utf-8') as f_out:
            reader = csv.reader(f_out)
            columns = next(reader)
            data = list(reader)
            return [dict(zip(columns, dt))
                    for dt in data]

    def find_by(self, table_name: str, prop: str, value: str) -> list[dict[str, str]]:
        tgt_path = self.__get_output_path(table_name=table_name)
        if not os.path.exists(tgt_path):
            raise FileNotFoundException()

        with open(tgt_path, "r", encoding='utf-8') as f_out:
            reader = csv.reader(f_out)
            columns = next(reader)
            if not prop in columns:
                raise InvalidPropException('invalid prop specify')
            idx = columns.index(prop)
            data = list(reader)
            result = [dict(zip(columns, dt))
                      for dt in data if dt[idx] == value]
            return result
