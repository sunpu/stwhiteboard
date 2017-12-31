/****************************************************************************
** Meta object code from reading C++ file 'stwbvtoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stwbvtoolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stwbvtoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STWBPenStylePanel_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STWBPenStylePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STWBPenStylePanel_t qt_meta_stringdata_tahiti__STWBPenStylePanel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "tahiti::STWBPenStylePanel"
QT_MOC_LITERAL(1, 26, 18), // "updatePenThickness"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 9), // "thickness"
QT_MOC_LITERAL(4, 56, 14), // "updatePenColor"
QT_MOC_LITERAL(5, 71, 5), // "color"
QT_MOC_LITERAL(6, 77, 14), // "on_pb1_clicked"
QT_MOC_LITERAL(7, 92, 14), // "on_pb2_clicked"
QT_MOC_LITERAL(8, 107, 14), // "on_pb3_clicked"
QT_MOC_LITERAL(9, 122, 14) // "on_pb4_clicked"

    },
    "tahiti::STWBPenStylePanel\0updatePenThickness\0"
    "\0thickness\0updatePenColor\0color\0"
    "on_pb1_clicked\0on_pb2_clicked\0"
    "on_pb3_clicked\0on_pb4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STWBPenStylePanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STWBPenStylePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STWBPenStylePanel *_t = static_cast<STWBPenStylePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePenThickness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updatePenColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pb1_clicked(); break;
        case 3: _t->on_pb2_clicked(); break;
        case 4: _t->on_pb3_clicked(); break;
        case 5: _t->on_pb4_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STWBPenStylePanel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBPenStylePanel::updatePenThickness)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STWBPenStylePanel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBPenStylePanel::updatePenColor)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STWBPenStylePanel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tahiti__STWBPenStylePanel.data,
      qt_meta_data_tahiti__STWBPenStylePanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STWBPenStylePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STWBPenStylePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STWBPenStylePanel.stringdata0))
        return static_cast<void*>(const_cast< STWBPenStylePanel*>(this));
    return QDialog::qt_metacast(_clname);
}

int tahiti::STWBPenStylePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STWBPenStylePanel::updatePenThickness(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::STWBPenStylePanel::updatePenColor(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_tahiti__STWBTextStylePanel_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STWBTextStylePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STWBTextStylePanel_t qt_meta_stringdata_tahiti__STWBTextStylePanel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "tahiti::STWBTextStylePanel"
QT_MOC_LITERAL(1, 27, 14), // "updateTextSize"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "size"
QT_MOC_LITERAL(4, 48, 15), // "updateTextColor"
QT_MOC_LITERAL(5, 64, 5), // "color"
QT_MOC_LITERAL(6, 70, 14), // "on_pb1_clicked"
QT_MOC_LITERAL(7, 85, 14), // "on_pb2_clicked"
QT_MOC_LITERAL(8, 100, 14), // "on_pb3_clicked"
QT_MOC_LITERAL(9, 115, 14) // "on_pb4_clicked"

    },
    "tahiti::STWBTextStylePanel\0updateTextSize\0"
    "\0size\0updateTextColor\0color\0on_pb1_clicked\0"
    "on_pb2_clicked\0on_pb3_clicked\0"
    "on_pb4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STWBTextStylePanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STWBTextStylePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STWBTextStylePanel *_t = static_cast<STWBTextStylePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTextSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateTextColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pb1_clicked(); break;
        case 3: _t->on_pb2_clicked(); break;
        case 4: _t->on_pb3_clicked(); break;
        case 5: _t->on_pb4_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STWBTextStylePanel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBTextStylePanel::updateTextSize)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STWBTextStylePanel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBTextStylePanel::updateTextColor)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STWBTextStylePanel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tahiti__STWBTextStylePanel.data,
      qt_meta_data_tahiti__STWBTextStylePanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STWBTextStylePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STWBTextStylePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STWBTextStylePanel.stringdata0))
        return static_cast<void*>(const_cast< STWBTextStylePanel*>(this));
    return QDialog::qt_metacast(_clname);
}

int tahiti::STWBTextStylePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STWBTextStylePanel::updateTextSize(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::STWBTextStylePanel::updateTextColor(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_tahiti__STWBVToolbar_t {
    QByteArrayData data[12];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STWBVToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STWBVToolbar_t qt_meta_stringdata_tahiti__STWBVToolbar = {
    {
QT_MOC_LITERAL(0, 0, 20), // "tahiti::STWBVToolbar"
QT_MOC_LITERAL(1, 21, 13), // "setActionMode"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "mode"
QT_MOC_LITERAL(4, 41, 12), // "deleteAction"
QT_MOC_LITERAL(5, 54, 15), // "hideStylePanels"
QT_MOC_LITERAL(6, 70, 17), // "showPenStylePanel"
QT_MOC_LITERAL(7, 88, 18), // "showTextStylePanel"
QT_MOC_LITERAL(8, 107, 19), // "on_pbSelect_clicked"
QT_MOC_LITERAL(9, 127, 16), // "on_pbPen_clicked"
QT_MOC_LITERAL(10, 144, 17), // "on_pbText_clicked"
QT_MOC_LITERAL(11, 162, 19) // "on_pbDelete_clicked"

    },
    "tahiti::STWBVToolbar\0setActionMode\0\0"
    "mode\0deleteAction\0hideStylePanels\0"
    "showPenStylePanel\0showTextStylePanel\0"
    "on_pbSelect_clicked\0on_pbPen_clicked\0"
    "on_pbText_clicked\0on_pbDelete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STWBVToolbar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,
       7,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STWBVToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STWBVToolbar *_t = static_cast<STWBVToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActionMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deleteAction(); break;
        case 2: _t->hideStylePanels(); break;
        case 3: _t->showPenStylePanel(); break;
        case 4: _t->showTextStylePanel(); break;
        case 5: _t->on_pbSelect_clicked(); break;
        case 6: _t->on_pbPen_clicked(); break;
        case 7: _t->on_pbText_clicked(); break;
        case 8: _t->on_pbDelete_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STWBVToolbar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBVToolbar::setActionMode)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STWBVToolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBVToolbar::deleteAction)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (STWBVToolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBVToolbar::hideStylePanels)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (STWBVToolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBVToolbar::showPenStylePanel)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (STWBVToolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STWBVToolbar::showTextStylePanel)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STWBVToolbar::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tahiti__STWBVToolbar.data,
      qt_meta_data_tahiti__STWBVToolbar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STWBVToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STWBVToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STWBVToolbar.stringdata0))
        return static_cast<void*>(const_cast< STWBVToolbar*>(this));
    return QDialog::qt_metacast(_clname);
}

int tahiti::STWBVToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tahiti::STWBVToolbar::setActionMode(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::STWBVToolbar::deleteAction()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void tahiti::STWBVToolbar::hideStylePanels()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void tahiti::STWBVToolbar::showPenStylePanel()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void tahiti::STWBVToolbar::showTextStylePanel()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
