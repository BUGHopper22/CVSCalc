/****************************************************************************
** Meta object code from reading C++ file 'vigenereView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vigenereView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vigenereView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vigenereView_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vigenereView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vigenereView_t qt_meta_stringdata_vigenereView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "vigenereView"
QT_MOC_LITERAL(1, 13, 14), // "convertMethodV"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "copyMethodV"
QT_MOC_LITERAL(4, 41, 12), // "resetMethodV"
QT_MOC_LITERAL(5, 54, 8), // "convertV"
QT_MOC_LITERAL(6, 63, 15), // "vigenereOutputV"
QT_MOC_LITERAL(7, 79, 11), // "copyOutputV"
QT_MOC_LITERAL(8, 91, 6), // "resetV"
QT_MOC_LITERAL(9, 98, 12) // "resetOutputV"

    },
    "vigenereView\0convertMethodV\0\0copyMethodV\0"
    "resetMethodV\0convertV\0vigenereOutputV\0"
    "copyOutputV\0resetV\0resetOutputV"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vigenereView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       3,    1,   61,    2, 0x06 /* Public */,
       4,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x0a /* Public */,
       6,    1,   66,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vigenereView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vigenereView *_t = static_cast<vigenereView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->convertMethodV((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->copyMethodV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->resetMethodV(); break;
        case 3: _t->convertV(); break;
        case 4: _t->vigenereOutputV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->copyOutputV(); break;
        case 6: _t->resetV(); break;
        case 7: _t->resetOutputV(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (vigenereView::*_t)(QString , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vigenereView::convertMethodV)) {
                *result = 0;
            }
        }
        {
            typedef void (vigenereView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vigenereView::copyMethodV)) {
                *result = 1;
            }
        }
        {
            typedef void (vigenereView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vigenereView::resetMethodV)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject vigenereView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vigenereView.data,
      qt_meta_data_vigenereView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *vigenereView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vigenereView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_vigenereView.stringdata0))
        return static_cast<void*>(const_cast< vigenereView*>(this));
    return QWidget::qt_metacast(_clname);
}

int vigenereView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void vigenereView::convertMethodV(QString _t1, QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void vigenereView::copyMethodV(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void vigenereView::resetMethodV()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
