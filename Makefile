ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

# .PHONY: run-all
# run-all:
# 	make top-containers
# 	make build-image
# 	make run-container

# .PHONY: build-image
# build-image:
# 	docker build -t macro .

# .PHONY: run-container
# run-container:
# 	docker run -dit \
# 	--rm --name macro-dev \
# 	--mount type=bind,source="${ROOT_DIR}"/src,target=/home/src \
# 	macro 

# .PHONY: stop-container
# stop-container:
# 	docker stop macro-dev

.PHONE: db_reset
db_reset:
	python src/entity/main.py

.PHONE: run_project
run_project:
	python -c "from src import cli; cli.collect_data(\"$(project_url)\")"