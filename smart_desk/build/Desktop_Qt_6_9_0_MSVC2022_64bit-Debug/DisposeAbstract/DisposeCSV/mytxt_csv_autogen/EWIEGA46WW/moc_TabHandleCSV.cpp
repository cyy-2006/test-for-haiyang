/****************************************************************************
** Meta object code from reading C++ file 'TabHandleCSV.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../DisposeAbstract/DisposeCSV/TabHandleCSV.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabHandleCSV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12TabHandleCSVE_t {};
} // unnamed namespace

template <> constexpr inline auto TabHandleCSV::qt_create_metaobjectdata<qt_meta_tag_ZN12TabHandleCSVE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TabHandleCSV",
        "dataToSend",
        "",
        "data",
        "findNext",
        "str",
        "Qt::CaseSensitivity",
        "cs",
        "findAll",
        "clearHighlight"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataToSend'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'findNext'
        QtMocHelpers::SlotData<void(const QString &, Qt::CaseSensitivity)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'findAll'
        QtMocHelpers::SlotData<void(const QString &, Qt::CaseSensitivity)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { 0x80000000 | 6, 7 },
        }}),
        // Slot 'clearHighlight'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabHandleCSV, qt_meta_tag_ZN12TabHandleCSVE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TabHandleCSV::staticMetaObject = { {
    QMetaObject::SuperData::link<TabAbstract::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12TabHandleCSVE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12TabHandleCSVE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12TabHandleCSVE_t>.metaTypes,
    nullptr
} };

void TabHandleCSV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabHandleCSV *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataToSend((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->findNext((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 2: _t->findAll((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 3: _t->clearHighlight(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabHandleCSV::*)(const QString & )>(_a, &TabHandleCSV::dataToSend, 0))
            return;
    }
}

const QMetaObject *TabHandleCSV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabHandleCSV::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12TabHandleCSVE_t>.strings))
        return static_cast<void*>(this);
    return TabAbstract::qt_metacast(_clname);
}

int TabHandleCSV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabAbstract::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TabHandleCSV::dataToSend(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
