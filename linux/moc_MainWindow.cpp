/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Tue May 28 19:13:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   12,   11,   11, 0x05,
      80,   76,   11,   11, 0x05,
     109,   76,   11,   11, 0x05,
     140,  131,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     160,   11,   11,   11, 0x0a,
     173,   11,   11,   11, 0x0a,
     190,   12,   11,   11, 0x0a,
     243,   76,   11,   11, 0x0a,
     270,   76,   11,   11, 0x0a,
     301,  131,   11,   11, 0x0a,
     324,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,
     391,   11,   11,   11, 0x08,
     422,   11,   11,   11, 0x08,
     458,   11,   11,   11, 0x08,
     486,   11,   11,   11, 0x08,
     520,   11,   11,   11, 0x08,
     546,   11,   11,   11, 0x08,
     580,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0msg,,time\0"
    "IoWithDeviceCompleted(QString,Comm::ErrorCode,double)\0"
    "msg\0IoWithDeviceStarted(QString)\0"
    "AppendString(QString)\0newValue\0"
    "SetProgressBar(int)\0Connection()\0"
    "openRecentFile()\0"
    "IoWithDeviceComplete(QString,Comm::ErrorCode,double)\0"
    "IoWithDeviceStart(QString)\0"
    "AppendStringToTextbox(QString)\0"
    "UpdateProgressBar(int)\0"
    "on_actionBlank_Check_triggered()\0"
    "on_actionReset_Device_triggered()\0"
    "on_action_Settings_triggered()\0"
    "on_action_Verify_Device_triggered()\0"
    "on_action_About_triggered()\0"
    "on_actionWrite_Device_triggered()\0"
    "on_actionOpen_triggered()\0"
    "on_actionErase_Device_triggered()\0"
    "on_actionExit_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->IoWithDeviceCompleted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Comm::ErrorCode(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->IoWithDeviceStarted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->AppendString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Connection(); break;
        case 5: _t->openRecentFile(); break;
        case 6: _t->IoWithDeviceComplete((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Comm::ErrorCode(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->IoWithDeviceStart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->AppendStringToTextbox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->UpdateProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_actionBlank_Check_triggered(); break;
        case 11: _t->on_actionReset_Device_triggered(); break;
        case 12: _t->on_action_Settings_triggered(); break;
        case 13: _t->on_action_Verify_Device_triggered(); break;
        case 14: _t->on_action_About_triggered(); break;
        case 15: _t->on_actionWrite_Device_triggered(); break;
        case 16: _t->on_actionOpen_triggered(); break;
        case 17: _t->on_actionErase_Device_triggered(); break;
        case 18: _t->on_actionExit_triggered(); break;
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::IoWithDeviceCompleted(QString _t1, Comm::ErrorCode _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::IoWithDeviceStarted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::AppendString(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::SetProgressBar(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
