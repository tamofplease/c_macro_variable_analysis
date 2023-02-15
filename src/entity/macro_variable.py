import enum
from typing import List
from sqlalchemy import Integer, Column, Enum, VARCHAR
from sqlalchemy.orm import mapped_column, relationship, Mapped
from sqlalchemy.schema import UniqueConstraint


from src.setting import Base
from src.entity.src_file import SrcFile
from src.entity.file_macro_variable import \
    file_available_macro_variable, \
    file_define_macro_variable, \
    file_used_macro_variable


class MacroVariableType(enum.Enum):
    VARIADIC = 1
    PREDEFINE = 2
    FUNCTIONAL = 3


class MacroVariable(Base):
    __tablename__ = "macro_variable"

    __table_args__ = (UniqueConstraint(
        'key', 'value', 'type', name='_macro_variable_uk'), )

    id = mapped_column(
        Integer, primary_key=True, autoincrement=True)
    key = Column('key', VARCHAR(255), nullable=False)
    value = Column('value', VARCHAR(512))
    type = Column(Enum(MacroVariableType), nullable=False)

    available_files: Mapped[List[SrcFile]] = relationship(
        secondary=file_available_macro_variable, back_populates='available_macro_variables'
    )

    define_files: Mapped[List[SrcFile]] = relationship(
        secondary=file_define_macro_variable, back_populates='define_macro_variables'
    )

    used_files: Mapped[List[SrcFile]] = relationship(
        secondary=file_used_macro_variable, back_populates='used_macro_variables'
    )
