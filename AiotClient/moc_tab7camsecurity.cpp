/****************************************************************************
** Meta object code from reading C++ file 'tab7camsecurity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tab7camsecurity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab7camsecurity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab7CamSecurity_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab7CamSecurity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab7CamSecurity_t qt_meta_stringdata_Tab7CamSecurity = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Tab7CamSecurity"
QT_MOC_LITERAL(1, 16, 11), // "slotCamView"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "slotSnapShot"
QT_MOC_LITERAL(4, 42, 16), // "slotSecurityMode"
QT_MOC_LITERAL(5, 59, 13) // "slotColorMode"

    },
    "Tab7CamSecurity\0slotCamView\0\0slotSnapShot\0"
    "slotSecurityMode\0slotColorMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab7CamSecurity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       3,    0,   37,    2, 0x08 /* Private */,
       4,    1,   38,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Tab7CamSecurity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab7CamSecurity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCamView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotSnapShot(); break;
        case 2: _t->slotSecurityMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slotColorMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab7CamSecurity::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Tab7CamSecurity.data,
    qt_meta_data_Tab7CamSecurity,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab7CamSecurity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab7CamSecurity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab7CamSecurity.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab7CamSecurity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
