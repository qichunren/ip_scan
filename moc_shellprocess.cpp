/****************************************************************************
** Meta object code from reading C++ file 'shellprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shellprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shellprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShellProcess_t {
    QByteArrayData data[7];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ShellProcess_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ShellProcess_t qt_meta_stringdata_ShellProcess = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 14),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 2),
QT_MOC_LITERAL(4, 32, 13),
QT_MOC_LITERAL(5, 46, 10),
QT_MOC_LITERAL(6, 57, 7)
    },
    "ShellProcess\0commandSuccess\0\0ip\0"
    "commandFailed\0setIpRange\0ipRange\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShellProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,
       4,    1,   32,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,

       0        // eod
};

void ShellProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShellProcess *_t = static_cast<ShellProcess *>(_o);
        switch (_id) {
        case 0: _t->commandSuccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->commandFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setIpRange((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShellProcess::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShellProcess::commandSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (ShellProcess::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShellProcess::commandFailed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ShellProcess::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ShellProcess.data,
      qt_meta_data_ShellProcess,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShellProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShellProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShellProcess.stringdata))
        return static_cast<void*>(const_cast< ShellProcess*>(this));
    return QThread::qt_metacast(_clname);
}

int ShellProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ShellProcess::commandSuccess(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShellProcess::commandFailed(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
