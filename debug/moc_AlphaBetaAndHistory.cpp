/****************************************************************************
** Meta object code from reading C++ file 'AlphaBetaAndHistory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AlphaBetaAndHistory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlphaBetaAndHistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlphaBetaAndHistory_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlphaBetaAndHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlphaBetaAndHistory_t qt_meta_stringdata_AlphaBetaAndHistory = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AlphaBetaAndHistory"
QT_MOC_LITERAL(1, 20, 9), // "endSearch"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "Step*"
QT_MOC_LITERAL(4, 37, 11), // "getBestStep"
QT_MOC_LITERAL(5, 49, 4) // "int*"

    },
    "AlphaBetaAndHistory\0endSearch\0\0Step*\0"
    "getBestStep\0int*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlphaBetaAndHistory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    5,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, QMetaType::Bool, QMetaType::Int,    2,    2,    2,    2,    2,

       0        // eod
};

void AlphaBetaAndHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlphaBetaAndHistory *_t = static_cast<AlphaBetaAndHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->endSearch((*reinterpret_cast< Step*(*)>(_a[1]))); break;
        case 1: _t->getBestStep((*reinterpret_cast< int*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])),(*reinterpret_cast< int*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AlphaBetaAndHistory::*_t)(Step * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlphaBetaAndHistory::endSearch)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AlphaBetaAndHistory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AlphaBetaAndHistory.data,
      qt_meta_data_AlphaBetaAndHistory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AlphaBetaAndHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlphaBetaAndHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlphaBetaAndHistory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlphaBetaAndHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AlphaBetaAndHistory::endSearch(Step * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
