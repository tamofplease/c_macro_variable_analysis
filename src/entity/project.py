from sqlalchemy import Column, Integer, String
from sqlalchemy.orm import mapped_column, relationship

from src.setting import Base


class Project(Base):
    __tablename__ = "project"

    id = mapped_column(Integer, primary_key=True, autoincrement=True)
    name = Column('name', String(127), nullable=False)
    url = Column('url', String(255), nullable=False)
    commit_hash = Column('commit_hash', String(63), nullable=False)
    organizer = Column('organizer', String(127), nullable=False)

    src_files = relationship("SrcFile", back_populates="project")

    c_files = relationship(
        "SrcFile",
        primaryjoin="and_(Project.id==SrcFile.project_id, " "SrcFile.extension=='c')",
        back_populates="project"
    )

    h_files = relationship(
        "SrcFile",
        primaryjoin="and_(Project.id==SrcFile.project_id, " "SrcFile.extension=='h')",
        back_populates="project"
    )
