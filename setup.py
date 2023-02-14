from setuptools import setup

setup(
    name="entity",
    version="0.1.0",
    description="",
    author="",
    packages=["entity", "repository"],
    package_dir={
        "entity": "src/entity",
        "repository": "src/repository"
    },
    package_data={
        "entity": [
            "*.py",
        ],
        "repository": [
            "*.py",
        ]
    },
)
