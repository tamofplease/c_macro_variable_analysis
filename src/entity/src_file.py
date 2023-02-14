from sqlalchemy import Column, String, ForeignKey
from sqlalchemy.dialects.mysql import INTEGER as Integer
from sqlalchemy.orm import mapped_column, relationship

from src.setting import Base
from src.entity.file_macro_variable import \
    file_available_macro_variable, \
    file_define_macro_variable, \
    file_used_macro_variable


class SrcFile(Base):
    __tablename__ = "src_file"
    id = mapped_column(
        Integer, primary_key=True, autoincrement=True)
    name = Column('name', String(255), nullable=False)
    path = Column('path', String(255), nullable=False)
    extension = Column('extension', String(16), nullable=False)
    loc = Column('loc', Integer, nullable=False)

    project_id = mapped_column(ForeignKey('project.id'), nullable=False)
    project = relationship("Project")

    xml_file = relationship("XmlFile",
                            back_populates="src_file")

    available_macro_variables = relationship("MacroVariable",
                                             secondary=file_available_macro_variable, back_populates='available_files'
                                             )

    define_macro_variables = relationship("MacroVariable",
                                          secondary=file_define_macro_variable, back_populates='define_files'
                                          )

    used_macro_variables = relationship("MacroVariable",
                                        secondary=file_used_macro_variable, back_populates='used_files'
                                        )
