/****************************************************************************
** Meta object code from reading C++ file 'tab1devcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tab1devcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab1devcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab1DevControl_t {
    QByteArrayData data[10];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab1DevControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab1DevControl_t qt_meta_stringdata_Tab1DevControl = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Tab1DevControl"
QT_MOC_LITERAL(1, 15, 21), // "on_pPBappQuit_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "on_pPBtimerStart_clicked"
QT_MOC_LITERAL(4, 63, 7), // "checked"
QT_MOC_LITERAL(5, 71, 17), // "setValueDaialSlot"
QT_MOC_LITERAL(6, 89, 36), // "on_pCBtimerValue_currentIndex..."
QT_MOC_LITERAL(7, 126, 4), // "arg1"
QT_MOC_LITERAL(8, 131, 15), // "keyCheckBoxSlot"
QT_MOC_LITERAL(9, 147, 20) // "keyCheckBoxSlotMouse"

    },
    "Tab1DevControl\0on_pPBappQuit_clicked\0"
    "\0on_pPBtimerStart_clicked\0checked\0"
    "setValueDaialSlot\0"
    "on_pCBtimerValue_currentIndexChanged\0"
    "arg1\0keyCheckBoxSlot\0keyCheckBoxSlotMouse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab1DevControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Tab1DevControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab1DevControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pPBappQuit_clicked(); break;
        case 1: _t->on_pPBtimerStart_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setValueDaialSlot(); break;
        case 3: _t->on_pCBtimerValue_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->keyCheckBoxSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->keyCheckBoxSlotMouse((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab1DevControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Tab1DevControl.data,
    qt_meta_data_Tab1DevControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab1DevControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab1DevControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab1DevControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab1DevControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
