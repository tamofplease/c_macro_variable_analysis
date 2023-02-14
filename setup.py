from setuptools import setup

setup(
    name="entity",
    version="0.1.0",
    description="",
    author="",
    packages=["entity", "use_case"],
    package_dir={
        "entity": "src/entity",
        "use_case": "src/use_case"
    },
    package_data={
        "entity": [
            "*.py",
        ],
        "use_case": [
            "*.py",
        ]
    },
)
