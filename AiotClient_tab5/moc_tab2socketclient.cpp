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
    QByteArrayData data[12];
    char stringdata0[201];
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
QT_MOC_LITERAL(3, 30, 15), // "tab3RecvDataSig"
QT_MOC_LITERAL(4, 46, 15), // "tab4RecvDataSig"
QT_MOC_LITERAL(5, 62, 15), // "tab5RecvDataSig"
QT_MOC_LITERAL(6, 78, 27), // "on_pPBServerConnect_clicked"
QT_MOC_LITERAL(7, 106, 7), // "checked"
QT_MOC_LITERAL(8, 114, 20), // "socketRecvUpdateSlot"
QT_MOC_LITERAL(9, 135, 24), // "on_pPBSendButton_clicked"
QT_MOC_LITERAL(10, 160, 27), // "on_pPBRecvDataClear_clicked"
QT_MOC_LITERAL(11, 188, 12) // "keyboardSlot"

    },
    "Tab2SocketClient\0ledWriteSig\0\0"
    "tab3RecvDataSig\0tab4RecvDataSig\0"
    "tab5RecvDataSig\0on_pPBServerConnect_clicked\0"
    "checked\0socketRecvUpdateSlot\0"
    "on_pPBSendButton_clicked\0"
    "on_pPBRecvDataClear_clicked\0keyboardSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab2SocketClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
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
        case 1: _t->tab3RecvDataSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->tab4RecvDataSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->tab5RecvDataSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pPBServerConnect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->socketRecvUpdateSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pPBSendButton_clicked(); break;
        case 7: _t->on_pPBRecvDataClear_clicked(); break;
        case 8: _t->keyboardSlot(); break;
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
        {
            using _t = void (Tab2SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab2SocketClient::tab3RecvDataSig)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tab2SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab2SocketClient::tab4RecvDataSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tab2SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab2SocketClient::tab5RecvDataSig)) {
                *result = 3;
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
void Tab2SocketClient::ledWriteSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tab2SocketClient::tab3RecvDataSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tab2SocketClient::tab4RecvDataSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tab2SocketClient::tab5RecvDataSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE