from sqlalchemy import create_engine
from sqlalchemy.orm import scoped_session, sessionmaker
from sqlalchemy.ext.declarative import declarative_base

DB_USER = "root"
DP_PASSWORD = "password"
DB_PORT = "127.0.0.1:53306"
DB_NAME = "c_macro_variable_analysis"

DATABASE = f'mysql://{DB_USER}:{DP_PASSWORD}@{DB_PORT}/{DB_NAME}?charset=utf8'

ENGINE = create_engine(
    DATABASE,
    echo=True
)

session = scoped_session(
    sessionmaker(
        autocommit=False,
        autoflush=False,
        bind=ENGINE
    )
)

Base = declarative_base()
Base.query = session.query_property()
