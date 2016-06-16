#!/bin/sh

#########
##### When first run this script, run below comand to copy debian directory into project.
#### cp -r /tmp/ip-scan-build/ip-scan-1.0/debian/ .
#####

echo "Build deb package ..."

name="ip-scan"

rm -rf /tmp/$name-build
mkdir -p /tmp/$name-build/$name-1.0
cp -r * /tmp/$name-build/$name-1.0
cd /tmp/$name-build/$name-1.0
dh_make --createorig --single -e whyruby@gmail.com -c gpl

cd /tmp/$name-build/$name-1.0
dpkg-buildpackage -uc -us
cd ..
mv *.deb ~/
echo "Build a deb package at home directory."
