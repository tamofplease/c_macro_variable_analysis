from hashlib import sha512
import enum
from typing import List
from sqlalchemy import Integer, Column, Enum, VARCHAR, TEXT
from sqlalchemy.orm import mapped_column, relationship, Mapped


from src.setting import Base
from src.entity.src_file import SrcFile
from src.entity.file_macro_variable import \
    FileAvailableMacroVariable, \
    FileDefineMacroVariable, \
    FileUsedMacroVariable


class MacroVariableType(enum.Enum):
    VARIADIC = 1
    PREDEFINE = 2
    FUNCTIONAL = 3


class MacroVariable(Base):
    __tablename__ = "macro_variable"

    id = mapped_column(
        Integer, primary_key=True, autoincrement=True)
    key = Column('key', TEXT, nullable=False)
    value = Column('value', TEXT)
    type = Column(Enum(MacroVariableType), nullable=False)
    hash = Column('hash', VARCHAR(512), nullable=False, unique=True)

    available_files: Mapped[List[SrcFile]] = relationship(
        secondary=FileAvailableMacroVariable, back_populates='available_macro_variables'
    )

    define_files: Mapped[List[SrcFile]] = relationship(
        secondary=FileDefineMacroVariable, back_populates='define_macro_variables'
    )

    used_files: Mapped[List[SrcFile]] = relationship(
        secondary=FileUsedMacroVariable, back_populates='used_macro_variables'
    )

    # pylint: disable=redefined-builtin
    def __init__(self, key: str, value: str, type: MacroVariableType):
        self.key = key
        self.value = value
        self.type = type

        self.hash = sha512((key + '-' + value).encode('utf-8')).hexdigest()
    # pylint: enable=redefined-builtin
