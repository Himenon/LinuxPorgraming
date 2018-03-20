FROM ubuntu:xenial-20171114

RUN apt-get -y update
RUN apt-get install -y \
    build-essential \
    strace \
    gdb

RUN apt-get install -y xinetd
COPY ./settings/daytime /etc/xinetd.d/daytime
RUN apt install -y net-tools
# /etc/init.d/xinetd start

RUN gcc -dumpversion
gogi