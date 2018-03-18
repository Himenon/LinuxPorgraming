FROM ubuntu:xenial-20171114

RUN apt-get -y update
RUN apt-get install -y \
    build-essential \
    strace \
    gdb

RUN gcc -dumpversion
