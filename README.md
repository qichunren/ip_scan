# ip_scan

    Batch scan all devices in LAN with ping command.

    Build with Qt 5.2

## Build

    qmake && make
    ./bin/ip_scan

## Build debian package

    ./deb_build.sh
    This command will build a deb package in user home directory.
    Install deb package with `sudo dpkg -i ip-scan_1.0-1_amd64.deb`
