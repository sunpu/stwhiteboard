/****************************************************************************
** Meta object code from reading C++ file 'stwhiteboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stwhiteboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stwhiteboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STWhiteBoard_t {
    QByteArrayData data[15];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STWhiteBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STWhiteBoard_t qt_meta_stringdata_tahiti__STWhiteBoard = {
    {
QT_MOC_LITERAL(0, 0, 20), // "tahiti::STWhiteBoard"
QT_MOC_LITERAL(1, 21, 15), // "setPenThickness"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "thickness"
QT_MOC_LITERAL(4, 48, 11), // "setPenColor"
QT_MOC_LITERAL(5, 60, 5), // "color"
QT_MOC_LITERAL(6, 66, 11), // "setTextSize"
QT_MOC_LITERAL(7, 78, 4), // "size"
QT_MOC_LITERAL(8, 83, 12), // "setTextColor"
QT_MOC_LITERAL(9, 96, 13), // "setActionMode"
QT_MOC_LITERAL(10, 110, 4), // "mode"
QT_MOC_LITERAL(11, 115, 12), // "deleteAction"
QT_MOC_LITERAL(12, 128, 15), // "hideStylePanels"
QT_MOC_LITERAL(13, 144, 17), // "showPenStylePanel"
QT_MOC_LITERAL(14, 162, 18) // "showTextStylePanel"

    },
    "tahiti::STWhiteBoard\0setPenThickness\0"
    "\0thickness\0setPenColor\0color\0setTextSize\0"
    "size\0setTextColor\0setActionMode\0mode\0"
    "deleteAction\0hideStylePanels\0"
    "showPenStylePanel\0showTextStylePanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STWhiteBoard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STWhiteBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STWhiteBoard *_t = static_cast<STWhiteBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPenThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPenColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setTextSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setTextColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setActionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->deleteAction(); break;
        case 6: _t->hideStylePanels(); break;
        case 7: _t->showPenStylePanel(); break;
        case 8: _t->showTextStylePanel(); break;
        default: ;
        }
    }
}

const QMetaObject tahiti::STWhiteBoard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tahiti__STWhiteBoard.data,
      qt_meta_data_tahiti__STWhiteBoard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STWhiteBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STWhiteBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STWhiteBoard.stringdata0))
        return static_cast<void*>(const_cast< STWhiteBoard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tahiti::STWhiteBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
