#include "device.h"

Device::Device(QObject *parent) : QObject(parent) {
}

const QString &Device::ip() const{
    return _ip;
}

const QString &Device::sn() const{
    return _sn;
}

const QString &Device::model() const{
    return _model;
}

const QString &Device::version() const{
    return _version;
}

void Device::setIp(QString ip) {
    _ip = ip;
}

void Device::setSn(QString sn) {
    _sn = sn;
}

void Device::setModel(QString model) {
    _model = model;
}

void Device::setVersion(QString version) {
    _version = version;
}
