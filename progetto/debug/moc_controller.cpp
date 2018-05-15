/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_controller_t {
    QByteArrayData data[13];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller_t qt_meta_stringdata_controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "controller"
QT_MOC_LITERAL(1, 11, 12), // "cesareOutput"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "resetOutput"
QT_MOC_LITERAL(4, 37, 15), // "vigenereOutputV"
QT_MOC_LITERAL(5, 53, 12), // "resetOutputV"
QT_MOC_LITERAL(6, 66, 11), // "sha1OutputS"
QT_MOC_LITERAL(7, 78, 16), // "QVector<uint8_t>"
QT_MOC_LITERAL(8, 95, 7), // "convert"
QT_MOC_LITERAL(9, 103, 5), // "reset"
QT_MOC_LITERAL(10, 109, 8), // "convertV"
QT_MOC_LITERAL(11, 118, 6), // "resetV"
QT_MOC_LITERAL(12, 125, 8) // "convertS"

    },
    "controller\0cesareOutput\0\0resetOutput\0"
    "vigenereOutputV\0resetOutputV\0sha1OutputS\0"
    "QVector<uint8_t>\0convert\0reset\0convertV\0"
    "resetV\0convertS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    1,   68,    2, 0x06 /* Public */,
       5,    0,   71,    2, 0x06 /* Public */,
       6,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   75,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    3,   83,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        controller *_t = static_cast<controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cesareOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->resetOutput(); break;
        case 2: _t->vigenereOutputV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->resetOutputV(); break;
        case 4: _t->sha1OutputS((*reinterpret_cast< QVector<uint8_t>(*)>(_a[1]))); break;
        case 5: _t->convert((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->reset(); break;
        case 7: _t->convertV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->resetV(); break;
        case 9: _t->convertS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (controller::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::cesareOutput)) {
                *result = 0;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::resetOutput)) {
                *result = 1;
            }
        }
        {
            typedef void (controller::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::vigenereOutputV)) {
                *result = 2;
            }
        }
        {
            typedef void (controller::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::resetOutputV)) {
                *result = 3;
            }
        }
        {
            typedef void (controller::*_t)(QVector<uint8_t> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controller::sha1OutputS)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject controller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller.data,
      qt_meta_data_controller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_controller.stringdata0))
        return static_cast<void*>(const_cast< controller*>(this));
    return QObject::qt_metacast(_clname);
}

int controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void controller::cesareOutput(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void controller::resetOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void controller::vigenereOutputV(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void controller::resetOutputV()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void controller::sha1OutputS(QVector<uint8_t> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
