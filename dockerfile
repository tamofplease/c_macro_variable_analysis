ARG WORKING_DIRPATH='/home'

FROM srcml/ubuntu_x86_64_base:latest

RUN --mount=target=/var/lib/apt/lists,type=cache,sharing=locked \
    --mount=target=/var/cache/apt,type=cache,sharing=locked \
    rm -f /etc/apt/apt.conf.d/docker-clean && \
    apt-get -y update && \
    apt-get -y upgrade && \
    apt-get -y install sudo && \
    sudo apt-get -y install git

RUN git clone https://github.com/srcML/srcML.git && \
    cd srcML && cmake . && make && make install && ldconfig

RUN --mount=target=/var/lib/apt/lists,type=cache,sharing=locked \
    --mount=target=/var/cache/apt,type=cache,sharing=locked \
    rm -f /etc/apt/apt.conf.d/docker-clean && \
    sudo apt-get -y install wget

RUN wget --no-check-certificate https://www.python.org/ftp/python/3.10.3/Python-3.10.3.tgz
RUN tar -xf Python-3.10.3.tgz
RUN cd Python-3.10.3 \
    && ./configure --enable-optimizations\
    && make \
    && make install \
    && cd ..

RUN apt-get autoremove -y && rm Python-3.10.3.tgz && rm -rf Python-3.10.3

WORKDIR ${WORKING_DIRPATH}

COPY ./requirements.txt requirements.txt
RUN pip3 install -r requirements.txt

ADD ./* /home/