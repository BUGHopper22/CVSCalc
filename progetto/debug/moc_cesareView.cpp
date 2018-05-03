/****************************************************************************
** Meta object code from reading C++ file 'cesareView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cesareView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cesareView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cesareView_t {
    QByteArrayData data[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cesareView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cesareView_t qt_meta_stringdata_cesareView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "cesareView"
QT_MOC_LITERAL(1, 11, 13), // "convertMethod"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "copyMethod"
QT_MOC_LITERAL(4, 37, 11), // "resetMethod"
QT_MOC_LITERAL(5, 49, 7), // "convert"
QT_MOC_LITERAL(6, 57, 12), // "cesareOutput"
QT_MOC_LITERAL(7, 70, 10), // "copyOutput"
QT_MOC_LITERAL(8, 81, 5), // "reset"
QT_MOC_LITERAL(9, 87, 11) // "resetOutput"

    },
    "cesareView\0convertMethod\0\0copyMethod\0"
    "resetMethod\0convert\0cesareOutput\0"
    "copyOutput\0reset\0resetOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cesareView[] = {

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
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
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

void cesareView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cesareView *_t = static_cast<cesareView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->convertMethod((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->copyMethod((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->resetMethod(); break;
        case 3: _t->convert(); break;
        case 4: _t->cesareOutput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->copyOutput(); break;
        case 6: _t->reset(); break;
        case 7: _t->resetOutput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (cesareView::*_t)(QString , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cesareView::convertMethod)) {
                *result = 0;
            }
        }
        {
            typedef void (cesareView::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cesareView::copyMethod)) {
                *result = 1;
            }
        }
        {
            typedef void (cesareView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cesareView::resetMethod)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject cesareView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cesareView.data,
      qt_meta_data_cesareView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cesareView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cesareView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cesareView.stringdata0))
        return static_cast<void*>(const_cast< cesareView*>(this));
    return QWidget::qt_metacast(_clname);
}

int cesareView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void cesareView::convertMethod(QString _t1, int _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cesareView::copyMethod(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cesareView::resetMethod()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
