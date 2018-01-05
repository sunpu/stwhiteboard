/****************************************************************************
** Meta object code from reading C++ file 'stwbnetworkclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stwbnetworkclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stwbnetworkclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STWBNetworkClient_t {
    QByteArrayData data[26];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STWBNetworkClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STWBNetworkClient_t qt_meta_stringdata_tahiti__STWBNetworkClient = {
    {
QT_MOC_LITERAL(0, 0, 25), // "tahiti::STWBNetworkClient"
QT_MOC_LITERAL(1, 26, 9), // "onConnect"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "drawRemoteRealtimePen"
QT_MOC_LITERAL(4, 59, 5), // "color"
QT_MOC_LITERAL(5, 65, 9), // "thickness"
QT_MOC_LITERAL(6, 75, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(7, 91, 6), // "points"
QT_MOC_LITERAL(8, 98, 17), // "drawRemotePenItem"
QT_MOC_LITERAL(9, 116, 6), // "itemID"
QT_MOC_LITERAL(10, 123, 18), // "drawRemoteTextItem"
QT_MOC_LITERAL(11, 142, 4), // "size"
QT_MOC_LITERAL(12, 147, 7), // "content"
QT_MOC_LITERAL(13, 155, 3), // "pos"
QT_MOC_LITERAL(14, 159, 15), // "moveRemoteItems"
QT_MOC_LITERAL(15, 175, 5), // "point"
QT_MOC_LITERAL(16, 181, 17), // "deleteRemoteItems"
QT_MOC_LITERAL(17, 199, 10), // "QList<int>"
QT_MOC_LITERAL(18, 210, 7), // "itemIDs"
QT_MOC_LITERAL(19, 218, 17), // "editableAuthority"
QT_MOC_LITERAL(20, 236, 8), // "editable"
QT_MOC_LITERAL(21, 245, 11), // "readMessage"
QT_MOC_LITERAL(22, 257, 12), // "displayError"
QT_MOC_LITERAL(23, 270, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(24, 299, 13), // "connectUpdate"
QT_MOC_LITERAL(25, 313, 16) // "disconnectUpdate"

    },
    "tahiti::STWBNetworkClient\0onConnect\0"
    "\0drawRemoteRealtimePen\0color\0thickness\0"
    "QVector<QPoint>\0points\0drawRemotePenItem\0"
    "itemID\0drawRemoteTextItem\0size\0content\0"
    "pos\0moveRemoteItems\0point\0deleteRemoteItems\0"
    "QList<int>\0itemIDs\0editableAuthority\0"
    "editable\0readMessage\0displayError\0"
    "QAbstractSocket::SocketError\0connectUpdate\0"
    "disconnectUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STWBNetworkClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    3,   70,    2, 0x06 /* Public */,
       8,    4,   77,    2, 0x06 /* Public */,
      10,    5,   86,    2, 0x06 /* Public */,
      14,    2,   97,    2, 0x06 /* Public */,
      16,    1,  102,    2, 0x06 /* Public */,
      19,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  108,    2, 0x08 /* Private */,
      22,    1,  109,    2, 0x08 /* Private */,
      24,    0,  112,    2, 0x08 /* Private */,
      25,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 6, QMetaType::Int,    4,    5,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QPoint, QMetaType::Int,    4,   11,   12,   13,    9,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,   15,    9,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STWBNetworkClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STWBNetworkClient *_t = static_cast<STWBNetworkClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnect(); break;
        case 1: _t->drawRemoteRealtimePen((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVector<QPoint>(*)>(_a[3]))); break;
        case 2: _t->drawRemotePenItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVector<QPoint>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->drawRemoteTextItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QPoint(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 4: _t->moveRemoteItems((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->deleteRemoteItems((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 6: _t->editableAuthority((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->readMessage(); break;
        case 8: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: _t->connectUpdate(); break;
        case 10: _t->disconnectUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STWBNetworkClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::onConnect)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STWBNetworkClient::*_t)(QString , int , QVector<QPoint> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::drawRemoteRealtimePen)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (STWBNetworkClient::*_t)(QString , int , QVector<QPoint> , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::drawRemotePenItem)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (STWBNetworkClient::*_t)(QString , int , QString , QPoint , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::drawRemoteTextItem)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (STWBNetworkClient::*_t)(QPoint , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::moveRemoteItems)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (STWBNetworkClient::*_t)(QList<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::deleteRemoteItems)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (STWBNetworkClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBNetworkClient::editableAuthority)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STWBNetworkClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tahiti__STWBNetworkClient.data,
      qt_meta_data_tahiti__STWBNetworkClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STWBNetworkClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STWBNetworkClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STWBNetworkClient.stringdata0))
        return static_cast<void*>(const_cast< STWBNetworkClient*>(this));
    return QObject::qt_metacast(_clname);
}

int tahiti::STWBNetworkClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STWBNetworkClient::onConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void tahiti::STWBNetworkClient::drawRemoteRealtimePen(QString _t1, int _t2, QVector<QPoint> _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tahiti::STWBNetworkClient::drawRemotePenItem(QString _t1, int _t2, QVector<QPoint> _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tahiti::STWBNetworkClient::drawRemoteTextItem(QString _t1, int _t2, QString _t3, QPoint _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tahiti::STWBNetworkClient::moveRemoteItems(QPoint _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void tahiti::STWBNetworkClient::deleteRemoteItems(QList<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void tahiti::STWBNetworkClient::editableAuthority(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
