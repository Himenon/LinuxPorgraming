FROM ubuntu:xenial-20171114

RUN apt -y update
RUN apt install -y \
    build-essential \
    strace

RUN gcc -dumpversion
