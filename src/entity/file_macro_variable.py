from sqlalchemy import Table, ForeignKey, Column
from src.setting import Base

file_available_macro_variable = Table(
    "file_available_macro_variable",
    Base.metadata,
    Column("src_file_id", ForeignKey("src_file.id"), primary_key=True),
    Column('macro_variable', ForeignKey('macro_variable.id'), primary_key=True)
)

file_define_macro_variable = Table(
    "file_define_macro_variable",
    Base.metadata,
    Column("src_file_id", ForeignKey("src_file.id"), primary_key=True),
    Column('macro_variable', ForeignKey(
        'macro_variable.id'), primary_key=True),
)

file_used_macro_variable = Table(
    "file_used_macro_variable",
    Base.metadata,
    Column("src_file_id", ForeignKey("src_file.id"), primary_key=True),
    Column('macro_variable', ForeignKey('macro_variable.id'), primary_key=True)
)
