/****************************************************************************
** Meta object code from reading C++ file 'tbookmarks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tbookmarks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tbookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TBOOKMARKS_t {
    QByteArrayData data[5];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TBOOKMARKS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TBOOKMARKS_t qt_meta_stringdata_TBOOKMARKS = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TBOOKMARKS"
QT_MOC_LITERAL(1, 11, 40), // "on_listWidget_customContextMe..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 3), // "pos"
QT_MOC_LITERAL(4, 57, 21) // "on_action_A_triggered"

    },
    "TBOOKMARKS\0on_listWidget_customContextMenuRequested\0"
    "\0pos\0on_action_A_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TBOOKMARKS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,

       0        // eod
};

void TBOOKMARKS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TBOOKMARKS *_t = static_cast<TBOOKMARKS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->on_action_A_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject TBOOKMARKS::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TBOOKMARKS.data,
      qt_meta_data_TBOOKMARKS,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TBOOKMARKS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TBOOKMARKS::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TBOOKMARKS.stringdata0))
        return static_cast<void*>(const_cast< TBOOKMARKS*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TBOOKMARKS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
