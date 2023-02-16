import enum
from sqlalchemy import Table, ForeignKey, Column, Enum, Integer
from sqlalchemy.orm import mapped_column, relationship
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


class FileUsedMacroVariable(Base):

    __tablename__ = "file_used_macro_variable"

    id = mapped_column(
        Integer, primary_key=True, autoincrement=True)

    type = Column(
        'type', Enum(DefinePositionType))

    src_file_id = mapped_column('src_file_id', ForeignKey("src_file.id"))
    src_file = relationship("SrcFile", back_populates='used_macro_variables')

    macro_variable_id = mapped_column(
        'macro_variable_id', ForeignKey('macro_variable.id'))
    macro_variable = relationship(
        "MacroVariable", back_populates='used_files')
