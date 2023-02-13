# from sqlalchemy import Table, ForeignKey, Column
# from sqlalchemy.orm import DeclarativeBase
# import enum
# from typing import List
# from sqlalchemy import Column, Integer, String, ForeignKey, Enum
# from sqlalchemy.orm import mapped_column, relationship, Mapped

# from src.setting import Base, ENGINE


# class Project(Base):
#     __tablename__ = "project"

#     id = mapped_column(Integer, primary_key=True, autoincrement=True)
#     name = Column('name', String(127), nullable=False)
#     url = Column('url', String(255), nullable=False)
#     total_file_count = Column('total_file_count', Integer, nullable=False)

#     c_files: Mapped[List[SrcFile]] = relationship(
#         primaryjoin="and_(Project.id==SrcFile.project_id, " "SrcFile.extension=='c')",
#         back_populates="project"
#     )

#     h_files: Mapped[List[SrcFile]] = relationship(
#         primaryjoin="and_(Project.id==SrcFile.project_id, " "SrcFile.extension=='h')",
#         back_populates="project"
#     )

#     def __init__():
#         pass


# class SrcFile(Base):
#     __tablename__ = "src_file"
#     id = mapped_column(
#         Integer, primary_key=True, autoincrement=True)
#     name = Column('name', String(255), nullable=False)
#     path = Column('path', String(255), nullable=False)
#     extension = Column('extension', String(16), nullable=False)
#     loc = Column('loc', Integer, nullable=False)

#     project_id = mapped_column(ForeignKey('project.id'), nullable=False)
#     project: Mapped[Project] = relationship()

#     xml_file: Mapped[XmlFile] = relationship(uselist=False,
#                                              back_populates="xml_file")

#     available_macro_variables: Mapped[MacroVariable] = relationship(
#         secondary=file_available_macro_variable, back_populates='available_files'
#     )

#     define_macro_variables: Mapped[MacroVariable] = relationship(
#         secondary=file_define_macro_variable, back_populates='define_files'
#     )

#     used_macro_variables: Mapped[MacroVariable] = relationship(
#         secondary=file_used_macro_variable, back_populates='used_files'
#     )


# class XmlFile(Base):
#     __tablename__ = "xml_file"
#     id = mapped_column(
#         Integer, primary_key=True, autoincrement=True
#     )
#     name = Column('name', String(255), nullable=False)
#     path = Column('path', String(255), nullable=False)

#     src_file_id = mapped_column(ForeignKey("src_file.id"))
#     src_file = relationship("SrcFile", back_populates='src_file')


# class MacroVariableType(enum.Enum):
#     VARIADIC = 1
#     PREDEFINE = 2
#     FUNCTIONAL = 3


# class MacroVariable(Base):
#     __tablename__ = "macro_variable"

#     id = mapped_column(
#         Integer, primary_key=True, autoincrement=True)
#     key = Column('key', Text, nullable=False)
#     value = Column('value', Text)
#     type = Column(Enum(MacroVariableType))

#     available_files: Mapped[List[SrcFile]] = relationship(
#         secondary=file_available_macro_variable, back_populates='available_macro_variables'
#     )

#     define_macro_variables: Mapped[List[SrcFile]] = relationship(
#         secondary=file_define_macro_variable, back_populates='define_macro_variables'
#     )

#     file_used_macro_variable: Mapped[List[SrcFile]] = relationship(
#         secondary=file_used_macro_variable, back_populates='used_macro_variables'
#     )


# class Base(DeclarativeBase):
#     pass


# file_available_macro_variable = Table(
#     "file_available_macro_variable",
#     Base.metadata,
#     Column("src_file_id", ForeignKey("src_file.id"), primary_key=True),
#     Column('macro_variable', ForeignKey('macro_variable.id'), primary_key=True)
# )

# file_define_macro_variable = Table(
#     "file_define_macro_variable",
#     Base.metadata,
#     Column("src_file_id", ForeignKey("src_file.id"), primary_key=True),
#     Column('macro_variable', ForeignKey(
#         'macro_variable.id'), primary_key=True),
# )

# file_used_macro_variable = Table(
#     "file_used_macro_variable",
#     Base.metadata,
#     Column("src_file_id", ForeignKey("src_file.id"), primary_key=True),
#     Column('macro_variable', ForeignKey('macro_variable.id'), primary_key=True)
# )


# def main():
#     XmlFile.__table__.drop(ENGINE)
#     SrcFile.__table__.drop(ENGINE)
#     Project.__table__.drop(ENGINE)
#     MacroVariable.__table__.drop(ENGINE)
#     Base.metadata.create_all(bind=ENGINE)


# if __name__ == "__main__":
#     main()
