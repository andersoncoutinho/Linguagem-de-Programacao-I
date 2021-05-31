/****************************************************************************
** Meta object code from reading C++ file 'JanelaPrincipal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../JanelaPrincipal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JanelaPrincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JanelaPrincipal_t {
    const uint offsetsAndSize[16];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_JanelaPrincipal_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_JanelaPrincipal_t qt_meta_stringdata_JanelaPrincipal = {
    {
QT_MOC_LITERAL(0, 15), // "JanelaPrincipal"
QT_MOC_LITERAL(16, 23), // "on_btnCadastrar_clicked"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 23), // "on_btnConsultar_clicked"
QT_MOC_LITERAL(65, 24), // "on_btnDistribuir_clicked"
QT_MOC_LITERAL(90, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(114, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(140, 23) // "on_actionSalvar_hovered"

    },
    "JanelaPrincipal\0on_btnCadastrar_clicked\0"
    "\0on_btnConsultar_clicked\0"
    "on_btnDistribuir_clicked\0"
    "on_actionSair_triggered\0"
    "on_actionSalvar_triggered\0"
    "on_actionSalvar_hovered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JanelaPrincipal[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    0 /* Private */,
       3,    0,   51,    2, 0x08,    1 /* Private */,
       4,    0,   52,    2, 0x08,    2 /* Private */,
       5,    0,   53,    2, 0x08,    3 /* Private */,
       6,    0,   54,    2, 0x08,    4 /* Private */,
       7,    0,   55,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JanelaPrincipal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JanelaPrincipal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnCadastrar_clicked(); break;
        case 1: _t->on_btnConsultar_clicked(); break;
        case 2: _t->on_btnDistribuir_clicked(); break;
        case 3: _t->on_actionSair_triggered(); break;
        case 4: _t->on_actionSalvar_triggered(); break;
        case 5: _t->on_actionSalvar_hovered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject JanelaPrincipal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_JanelaPrincipal.offsetsAndSize,
    qt_meta_data_JanelaPrincipal,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_JanelaPrincipal_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *JanelaPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JanelaPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JanelaPrincipal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int JanelaPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
