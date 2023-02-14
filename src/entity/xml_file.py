from sqlalchemy import Column, String, ForeignKey
from sqlalchemy.dialects.mysql import INTEGER as Integer
from sqlalchemy.orm import mapped_column, relationship

from src.setting import Base


class XmlFile(Base):
    __tablename__ = "xml_file"
    id = mapped_column(
        Integer, primary_key=True, autoincrement=True
    )
    name = Column('name', String(255), nullable=False)
    path = Column('path', String(255), nullable=False)

    src_file_id = mapped_column(ForeignKey("src_file.id"))
    src_file = relationship("SrcFile", back_populates='xml_file')
