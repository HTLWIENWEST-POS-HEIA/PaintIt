/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PaintIt/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "on_tbtnLine_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "on_tbtnFill_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_tbtnText_clicked"
QT_MOC_LITERAL(5, 72, 20), // "on_tbtnStamp_clicked"
QT_MOC_LITERAL(6, 93, 20), // "on_tbtnBrush_clicked"
QT_MOC_LITERAL(7, 114, 20), // "on_tbtnSpray_clicked"
QT_MOC_LITERAL(8, 135, 25), // "on_tbtnSwapColors_clicked"
QT_MOC_LITERAL(9, 161, 27), // "on_action_Beenden_triggered"
QT_MOC_LITERAL(10, 189, 30), // "on_tbtnForegroundColor_clicked"
QT_MOC_LITERAL(11, 220, 30), // "on_tbtnBackgroundColor_clicked"
QT_MOC_LITERAL(12, 251, 30), // "on_spinBox_Radius_valueChanged"
QT_MOC_LITERAL(13, 282, 6), // "radius"
QT_MOC_LITERAL(14, 289, 33), // "on_spinBox_LineWidth_valueCha..."
QT_MOC_LITERAL(15, 323, 9) // "lineWidth"

    },
    "MainWindow\0on_tbtnLine_clicked\0\0"
    "on_tbtnFill_clicked\0on_tbtnText_clicked\0"
    "on_tbtnStamp_clicked\0on_tbtnBrush_clicked\0"
    "on_tbtnSpray_clicked\0on_tbtnSwapColors_clicked\0"
    "on_action_Beenden_triggered\0"
    "on_tbtnForegroundColor_clicked\0"
    "on_tbtnBackgroundColor_clicked\0"
    "on_spinBox_Radius_valueChanged\0radius\0"
    "on_spinBox_LineWidth_valueChanged\0"
    "lineWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tbtnLine_clicked(); break;
        case 1: _t->on_tbtnFill_clicked(); break;
        case 2: _t->on_tbtnText_clicked(); break;
        case 3: _t->on_tbtnStamp_clicked(); break;
        case 4: _t->on_tbtnBrush_clicked(); break;
        case 5: _t->on_tbtnSpray_clicked(); break;
        case 6: _t->on_tbtnSwapColors_clicked(); break;
        case 7: _t->on_action_Beenden_triggered(); break;
        case 8: _t->on_tbtnForegroundColor_clicked(); break;
        case 9: _t->on_tbtnBackgroundColor_clicked(); break;
        case 10: _t->on_spinBox_Radius_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_spinBox_LineWidth_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
