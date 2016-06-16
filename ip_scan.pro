#-------------------------------------------------
#
# Project created by QtCreator 2013-12-07T21:09:51
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bin/ip_scan
TEMPLATE = app

ICON = icon.icns


SOURCES += main.cpp\
        mainwindow.cpp \
    shellprocess.cpp \
    device.cpp

HEADERS  += mainwindow.h \
    shellprocess.h \
    device.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    application.qrc

OTHER_FILES += README.md deb_build.sh
