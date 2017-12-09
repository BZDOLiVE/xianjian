/****************************************************************************
** Meta object code from reading C++ file 'map1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../map1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'map1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_map1_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_map1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_map1_t qt_meta_stringdata_map1 = {
    {
QT_MOC_LITERAL(0, 0, 4), // "map1"
QT_MOC_LITERAL(1, 5, 29), // "sendInformationToBattleWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "Hero*"
QT_MOC_LITERAL(4, 42, 10), // "zhaolinger"
QT_MOC_LITERAL(5, 53, 29), // "on_returnToMainWindow_clicked"
QT_MOC_LITERAL(6, 83, 20) // "on_btnBattle_clicked"

    },
    "map1\0sendInformationToBattleWindow\0\0"
    "Hero*\0zhaolinger\0on_returnToMainWindow_clicked\0"
    "on_btnBattle_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_map1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void map1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        map1 *_t = static_cast<map1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInformationToBattleWindow((*reinterpret_cast< Hero*(*)>(_a[1]))); break;
        case 1: _t->on_returnToMainWindow_clicked(); break;
        case 2: _t->on_btnBattle_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (map1::*_t)(Hero * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&map1::sendInformationToBattleWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject map1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_map1.data,
      qt_meta_data_map1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *map1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *map1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_map1.stringdata0))
        return static_cast<void*>(const_cast< map1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int map1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void map1::sendInformationToBattleWindow(Hero * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
