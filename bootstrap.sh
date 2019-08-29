#!/bin/bash

yum -y update
yum -y install libtool libtool-ltdl autoconf automake
yum -y groupinstall "Development Tools"

cd /vagrant

./configure
make
make check
make install
