/****************************************************************************
** Meta object code from reading C++ file 'tab2socketclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tab2socketclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab2socketclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab2SocketClient_t {
    QByteArrayData data[8];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab2SocketClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab2SocketClient_t qt_meta_stringdata_Tab2SocketClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Tab2SocketClient"
QT_MOC_LITERAL(1, 17, 11), // "ledWriteSig"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 27), // "on_pPBServerConnect_clicked"
QT_MOC_LITERAL(4, 58, 7), // "checked"
QT_MOC_LITERAL(5, 66, 20), // "socketRecvUpdateSlot"
QT_MOC_LITERAL(6, 87, 24), // "on_pPBSendButton_clicked"
QT_MOC_LITERAL(7, 112, 27) // "on_pPBRecvDataClear_clicked"

    },
    "Tab2SocketClient\0ledWriteSig\0\0"
    "on_pPBServerConnect_clicked\0checked\0"
    "socketRecvUpdateSlot\0on_pPBSendButton_clicked\0"
    "on_pPBRecvDataClear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab2SocketClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tab2SocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab2SocketClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ledWriteSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pPBServerConnect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->socketRecvUpdateSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pPBSendButton_clicked(); break;
        case 4: _t->on_pPBRecvDataClear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tab2SocketClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab2SocketClient::ledWriteSig)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab2SocketClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Tab2SocketClient.data,
    qt_meta_data_Tab2SocketClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab2SocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab2SocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab2SocketClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab2SocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Tab2SocketClient::ledWriteSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
