from setuptools import setup

setup(
    name="model",
    version="0.1.0",
    description="",
    author="",
    packages=["model"],
    package_dir={
        "model": "src/model",
    },
    package_data={
        "model": [
            "*.py",
        ]
    },
)
