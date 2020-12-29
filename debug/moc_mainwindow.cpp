/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(4, 58, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(5, 83, 22), // "on_dial_2_valueChanged"
QT_MOC_LITERAL(6, 106, 5), // "value"
QT_MOC_LITERAL(7, 112, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 136, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(9, 160, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(10, 184, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(11, 208, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(12, 233, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(13, 258, 13), // "ser_readyRead"
QT_MOC_LITERAL(14, 272, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(15, 296, 42), // "on_pushButton_2_customContext..."
QT_MOC_LITERAL(16, 339, 3), // "pos"
QT_MOC_LITERAL(17, 343, 23), // "on_pushButton_9_toggled"
QT_MOC_LITERAL(18, 367, 7) // "checked"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_pushButton_8_clicked\0"
    "on_pushButton_11_clicked\0"
    "on_dial_2_valueChanged\0value\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_12_clicked\0ser_readyRead\0"
    "on_pushButton_2_clicked\0"
    "on_pushButton_2_customContextMenuRequested\0"
    "pos\0on_pushButton_9_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      17,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_8_clicked(); break;
        case 2: _t->on_pushButton_11_clicked(); break;
        case 3: _t->on_dial_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->on_pushButton_10_clicked(); break;
        case 9: _t->on_pushButton_12_clicked(); break;
        case 10: _t->ser_readyRead(); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_pushButton_2_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_9_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
