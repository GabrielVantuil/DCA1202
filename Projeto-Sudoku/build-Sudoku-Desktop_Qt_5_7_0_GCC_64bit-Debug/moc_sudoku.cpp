/****************************************************************************
** Meta object code from reading C++ file 'sudoku.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Sudoku/sudoku.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sudoku.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Sudoku_t {
    QByteArrayData data[12];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sudoku_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sudoku_t qt_meta_stringdata_Sudoku = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Sudoku"
QT_MOC_LITERAL(1, 7, 24), // "on_tabuleiro_cellClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "row"
QT_MOC_LITERAL(4, 37, 6), // "column"
QT_MOC_LITERAL(5, 44, 20), // "on_Reiniciar_clicked"
QT_MOC_LITERAL(6, 65, 22), // "on_SelNum_valueChanged"
QT_MOC_LITERAL(7, 88, 4), // "arg1"
QT_MOC_LITERAL(8, 93, 17), // "on_ok_num_clicked"
QT_MOC_LITERAL(9, 111, 19), // "on_resolver_clicked"
QT_MOC_LITERAL(10, 131, 27), // "on_actionResolver_triggered"
QT_MOC_LITERAL(11, 159, 28) // "on_actionReiniciar_triggered"

    },
    "Sudoku\0on_tabuleiro_cellClicked\0\0row\0"
    "column\0on_Reiniciar_clicked\0"
    "on_SelNum_valueChanged\0arg1\0"
    "on_ok_num_clicked\0on_resolver_clicked\0"
    "on_actionResolver_triggered\0"
    "on_actionReiniciar_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sudoku[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x08 /* Private */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Sudoku::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sudoku *_t = static_cast<Sudoku *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tabuleiro_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_Reiniciar_clicked(); break;
        case 2: _t->on_SelNum_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ok_num_clicked(); break;
        case 4: _t->on_resolver_clicked(); break;
        case 5: _t->on_actionResolver_triggered(); break;
        case 6: _t->on_actionReiniciar_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject Sudoku::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Sudoku.data,
      qt_meta_data_Sudoku,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Sudoku::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sudoku::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Sudoku.stringdata0))
        return static_cast<void*>(const_cast< Sudoku*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Sudoku::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
