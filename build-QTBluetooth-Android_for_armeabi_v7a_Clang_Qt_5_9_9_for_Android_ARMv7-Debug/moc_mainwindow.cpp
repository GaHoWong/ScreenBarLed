/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../5.APP/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 29), // "on_pushButton_openBLE_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "on_pushButton_upDateBLE_clicked"
QT_MOC_LITERAL(4, 74, 25), // "addBlueToothDevicesToList"
QT_MOC_LITERAL(5, 100, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(6, 121, 4), // "info"
QT_MOC_LITERAL(7, 126, 10), // "findFinish"
QT_MOC_LITERAL(8, 137, 10), // "connectBLE"
QT_MOC_LITERAL(9, 148, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 165, 4), // "item"
QT_MOC_LITERAL(11, 170, 9), // "connectOK"
QT_MOC_LITERAL(12, 180, 10), // "connectNot"
QT_MOC_LITERAL(13, 191, 22), // "readBluetoothDataEvent"
QT_MOC_LITERAL(14, 214, 30), // "on_pushButton_closeBLE_clicked"
QT_MOC_LITERAL(15, 245, 34), // "on_pushButton_clearReceive_cl..."
QT_MOC_LITERAL(16, 280, 26), // "on_pushButton_send_clicked"
QT_MOC_LITERAL(17, 307, 13), // "checkBox_main"
QT_MOC_LITERAL(18, 321, 15) // "checkBox_fenwei"

    },
    "MainWindow\0on_pushButton_openBLE_clicked\0"
    "\0on_pushButton_upDateBLE_clicked\0"
    "addBlueToothDevicesToList\0"
    "QBluetoothDeviceInfo\0info\0findFinish\0"
    "connectBLE\0QListWidgetItem*\0item\0"
    "connectOK\0connectNot\0readBluetoothDataEvent\0"
    "on_pushButton_closeBLE_clicked\0"
    "on_pushButton_clearReceive_clicked\0"
    "on_pushButton_send_clicked\0checkBox_main\0"
    "checkBox_fenwei"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,
      17,    0,   94,    2, 0x08 /* Private */,
      18,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_openBLE_clicked(); break;
        case 1: _t->on_pushButton_upDateBLE_clicked(); break;
        case 2: _t->addBlueToothDevicesToList((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 3: _t->findFinish(); break;
        case 4: _t->connectBLE((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->connectOK(); break;
        case 6: _t->connectNot(); break;
        case 7: _t->readBluetoothDataEvent(); break;
        case 8: _t->on_pushButton_closeBLE_clicked(); break;
        case 9: _t->on_pushButton_clearReceive_clicked(); break;
        case 10: _t->on_pushButton_send_clicked(); break;
        case 11: _t->checkBox_main(); break;
        case 12: _t->checkBox_fenwei(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
