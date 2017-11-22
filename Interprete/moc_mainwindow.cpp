/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      71,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     159,   11,  154,   11, 0x08,
     193,   11,   11,   11, 0x08,
     220,   11,   11,   11, 0x08,
     261,  247,   11,   11, 0x08,
     301,   11,  154,   11, 0x08,
     330,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionDeshacer_triggered()\0"
    "on_actionRehacer_triggered()\0"
    "on_actionCopiar_triggered()\0"
    "on_actionPegar_triggered()\0"
    "on_actionCortar_triggered()\0bool\0"
    "on_actionGuardar_como_triggered()\0"
    "on_actionAbrir_triggered()\0"
    "on_actionNuevo_triggered()\0newBlockCount\0"
    "on_editorDeTexto_blockCountChanged(int)\0"
    "on_actionGuardar_triggered()\0"
    "on_actionSalir_triggered()\0"
    "on_actionCompilar_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionDeshacer_triggered(); break;
        case 1: _t->on_actionRehacer_triggered(); break;
        case 2: _t->on_actionCopiar_triggered(); break;
        case 3: _t->on_actionPegar_triggered(); break;
        case 4: _t->on_actionCortar_triggered(); break;
        case 5: { bool _r = _t->on_actionGuardar_como_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->on_actionAbrir_triggered(); break;
        case 7: _t->on_actionNuevo_triggered(); break;
        case 8: _t->on_editorDeTexto_blockCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { bool _r = _t->on_actionGuardar_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->on_actionSalir_triggered(); break;
        case 11: _t->on_actionCompilar_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
