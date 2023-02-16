import enum
from sqlalchemy import Table, ForeignKey, Column, Enum
from src.setting import Base


class DefinePositionType(enum.Enum):
    IN_FILE = 1
    IN_PROJECT = 2
    EXTERNAL = 3


FileAvailableMacroVariable = Table(
    "file_available_macro_variable",
    Base.metadata,
    Column("src_file_id", ForeignKey("src_file.id")),
    Column('macro_variable_id', ForeignKey('macro_variable.id'))
)


FileDefineMacroVariable = Table(
    "file_define_macro_variable",
    Base.metadata,
    Column("src_file_id", ForeignKey("src_file.id")),
    Column('macro_variable_id', ForeignKey('macro_variable.id'))
)

FileUsedMacroVariable = Table(
    "file_used_macro_variable",
    Base.metadata,
    Column("src_file_id", ForeignKey("src_file.id")),
    Column('macro_variable_id', ForeignKey('macro_variable.id')),
    Column('define_position_type', Enum(DefinePositionType))
)
