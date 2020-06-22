/****************************************************************************
** Meta object code from reading C++ file 'lift.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../test4/lift.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lift.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lift_t {
    QByteArrayData data[12];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lift_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lift_t qt_meta_stringdata_lift = {
    {
QT_MOC_LITERAL(0, 0, 4), // "lift"
QT_MOC_LITERAL(1, 5, 13), // "opening_doors"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "closing_doors"
QT_MOC_LITERAL(4, 34, 7), // "arrived"
QT_MOC_LITERAL(5, 42, 2), // "up"
QT_MOC_LITERAL(6, 45, 4), // "down"
QT_MOC_LITERAL(7, 50, 5), // "go_up"
QT_MOC_LITERAL(8, 56, 7), // "go_down"
QT_MOC_LITERAL(9, 64, 10), // "open_doors"
QT_MOC_LITERAL(10, 75, 11), // "close_doors"
QT_MOC_LITERAL(11, 87, 9) // "wait_here"

    },
    "lift\0opening_doors\0\0closing_doors\0"
    "arrived\0up\0down\0go_up\0go_down\0open_doors\0"
    "close_doors\0wait_here"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lift[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lift::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<lift *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opening_doors(); break;
        case 1: _t->closing_doors(); break;
        case 2: _t->arrived(); break;
        case 3: _t->up(); break;
        case 4: _t->down(); break;
        case 5: _t->go_up(); break;
        case 6: _t->go_down(); break;
        case 7: _t->open_doors(); break;
        case 8: _t->close_doors(); break;
        case 9: _t->wait_here(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (lift::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lift::opening_doors)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (lift::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lift::closing_doors)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (lift::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lift::arrived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (lift::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lift::up)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (lift::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lift::down)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject lift::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_lift.data,
    qt_meta_data_lift,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lift::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lift::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lift.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int lift::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void lift::opening_doors()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lift::closing_doors()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lift::arrived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void lift::up()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void lift::down()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
