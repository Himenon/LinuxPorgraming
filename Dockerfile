FROM ubuntu:16.04

RUN apt -y  update
RUN apt install -y \
    build-essential

RUN gcc -dumpversion
