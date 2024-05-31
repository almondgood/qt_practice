/****************************************************************************
** Meta object code from reading C++ file 'tabsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SensorMan_jwt/tabsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabSocket_t {
    QByteArrayData data[12];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabSocket_t qt_meta_stringdata_TabSocket = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TabSocket"
QT_MOC_LITERAL(1, 10, 11), // "ledWriteSig"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "tab3RecvDataSig"
QT_MOC_LITERAL(4, 39, 15), // "tab4RecvDataSig"
QT_MOC_LITERAL(5, 55, 15), // "tab5RecvDataSig"
QT_MOC_LITERAL(6, 71, 27), // "on_pPBServerConnect_clicked"
QT_MOC_LITERAL(7, 99, 7), // "checked"
QT_MOC_LITERAL(8, 107, 20), // "socketRecvUpdateSlot"
QT_MOC_LITERAL(9, 128, 24), // "on_pPBSendButton_clicked"
QT_MOC_LITERAL(10, 153, 27), // "on_pPBRecvDataClear_clicked"
QT_MOC_LITERAL(11, 181, 12) // "keyboardSlot"

    },
    "TabSocket\0ledWriteSig\0\0tab3RecvDataSig\0"
    "tab4RecvDataSig\0tab5RecvDataSig\0"
    "on_pPBServerConnect_clicked\0checked\0"
    "socketRecvUpdateSlot\0on_pPBSendButton_clicked\0"
    "on_pPBRecvDataClear_clicked\0keyboardSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabSocket[] = {

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

void TabSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabSocket *>(_o);
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
            using _t = void (TabSocket::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabSocket::ledWriteSig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabSocket::tab3RecvDataSig)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TabSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabSocket::tab4RecvDataSig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TabSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabSocket::tab5RecvDataSig)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TabSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TabSocket.data,
    qt_meta_data_TabSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabSocket.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TabSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TabSocket::ledWriteSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabSocket::tab3RecvDataSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TabSocket::tab4RecvDataSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabSocket::tab5RecvDataSig(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
