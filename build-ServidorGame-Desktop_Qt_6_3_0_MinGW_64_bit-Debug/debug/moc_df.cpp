/****************************************************************************
** Meta object code from reading C++ file 'df.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ServidorGame/df.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'df.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_df_t {
    const uint offsetsAndSize[2];
    char stringdata0[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_df_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_df_t qt_meta_stringdata_df = {
    {
QT_MOC_LITERAL(0, 2) // "df"

    },
    "df"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_df[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void df::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject df::staticMetaObject = { {
    QMetaObject::SuperData::link<QString::staticMetaObject>(),
    qt_meta_stringdata_df.offsetsAndSize,
    qt_meta_data_df,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_df_t
, QtPrivate::TypeAndForceComplete<df, std::true_type>



>,
    nullptr
} };


const QMetaObject *df::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *df::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_df.stringdata0))
        return static_cast<void*>(this);
    return QString::qt_metacast(_clname);
}

int df::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QString::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
