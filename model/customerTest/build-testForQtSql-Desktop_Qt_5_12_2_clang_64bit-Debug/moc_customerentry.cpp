/****************************************************************************
** Meta object code from reading C++ file 'customerentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../testForQtSql/customerentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customerentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomerEntry_t {
    QByteArrayData data[13];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomerEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomerEntry_t qt_meta_stringdata_CustomerEntry = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CustomerEntry"
QT_MOC_LITERAL(1, 14, 11), // "nameChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "addressChanged"
QT_MOC_LITERAL(4, 42, 15), // "usernameChanged"
QT_MOC_LITERAL(5, 58, 15), // "passwordChanged"
QT_MOC_LITERAL(6, 74, 13), // "creditChanged"
QT_MOC_LITERAL(7, 88, 12), // "phoneChanged"
QT_MOC_LITERAL(8, 101, 13), // "ratingChanged"
QT_MOC_LITERAL(9, 115, 10), // "keyChanged"
QT_MOC_LITERAL(10, 126, 15), // "productsChanged"
QT_MOC_LITERAL(11, 142, 19), // "maintainPlanChanged"
QT_MOC_LITERAL(12, 162, 19) // "getPhamphletChanged"

    },
    "CustomerEntry\0nameChanged\0\0addressChanged\0"
    "usernameChanged\0passwordChanged\0"
    "creditChanged\0phoneChanged\0ratingChanged\0"
    "keyChanged\0productsChanged\0"
    "maintainPlanChanged\0getPhamphletChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomerEntry[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,
      11,    0,   78,    2, 0x06 /* Public */,
      12,    0,   79,    2, 0x06 /* Public */,

 // signals: parameters
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
    QMetaType::Void,

       0        // eod
};

void CustomerEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomerEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->addressChanged(); break;
        case 2: _t->usernameChanged(); break;
        case 3: _t->passwordChanged(); break;
        case 4: _t->creditChanged(); break;
        case 5: _t->phoneChanged(); break;
        case 6: _t->ratingChanged(); break;
        case 7: _t->keyChanged(); break;
        case 8: _t->productsChanged(); break;
        case 9: _t->maintainPlanChanged(); break;
        case 10: _t->getPhamphletChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::addressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::usernameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::passwordChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::creditChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::phoneChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::ratingChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::keyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::productsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::maintainPlanChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CustomerEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomerEntry::getPhamphletChanged)) {
                *result = 10;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CustomerEntry::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CustomerEntry.data,
    qt_meta_data_CustomerEntry,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomerEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomerEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomerEntry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CustomerEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void CustomerEntry::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CustomerEntry::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CustomerEntry::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CustomerEntry::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CustomerEntry::creditChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CustomerEntry::phoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CustomerEntry::ratingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CustomerEntry::keyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CustomerEntry::productsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void CustomerEntry::maintainPlanChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void CustomerEntry::getPhamphletChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
