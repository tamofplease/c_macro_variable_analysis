# from sqlalchemy import (Column, String, Text, ForeignKey,
#                         create_engine, MetaData, DECIMAL, DATETIME, exc, event, Index)
# from datetime import datetime
# from sqlalchemy.dialects.mysql import INTEGER as Integer
# from sqlalchemy.ext.declarative import declarative_base
# from sqlalchemy.orm import (sessionmaker, relationship, scoped_session)
# from sqlalchemy.schema import UniqueConstraint
# from src.model.project import Project

# # p = Project(name="sample_p", url="https://something.com", total_file_count=123)

# # -*- encoding:utf-8 -*-


# engine = create_engine('mysql://{user}:{passwd}@{host}/{db}'
#                        .format(user=user, passwd=passwd, host=host, db=db_name),
#                        encoding='utf-8', echo=False)

# Session = scoped_session(sessionmaker(
#     autocommit=False, autoflush=False, bind=engine))

# metadata = MetaData(engine)
# Base = declarative_base()


# class Person(Base):
#     __tablename__ = 'person'
#     __table_args__ = {'mysql_engine': 'InnoDB'}
#     id = Column('id', Integer(unsigned=True),
#                 primary_key=True, autoincrement=True)
#     name = Column('name', String(255), index=True, unique=True)
#     age = Column('age', Integer)
#     created = Column('created', DATETIME, default=datetime.now, nullable=False)
#     modified = Column('modified', DATETIME,
#                       default=datetime.now, nullable=False)
#     address = relationship('Address')

#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#         now = datetime.now()
#         self.created = now
#         self.modified = now


# class Address(Base):
#     __tablename__ = 'address'
#     __table_args__ = (
#         (UniqueConstraint('personid', 'address', name='unique_idx_personid_address')),
#         {'mysql_engine': 'InnoDB'})
#     id = Column('id', Integer, primary_key=True, autoincrement=True)
#     personid = Column('personid', Integer(unsigned=True), ForeignKey('person.id',
#                                                                      onupdate='CASCADE', ondelete='CASCADE'))
#     address = Column('address', String(255), nullable=False)
#     created = Column('created', DATETIME, default=datetime.now, nullable=False)
#     modified = Column('modified', DATETIME,
#                       default=datetime.now, nullable=False)

#     def __init__(self, personid, address):
#         self.personid = personid
#         self.address = address
#         now = datetime.now()
#         self.created = now
#         self.modified = now


# if __name__ == "__main__":
#     # create table
#     Base.metadata.create_all(engine)
