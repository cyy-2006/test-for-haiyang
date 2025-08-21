/****************************************************************************
** Meta object code from reading C++ file 'TabHandleTXT.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../DisposeAbstract/DisposeTXT/TabHandleTXT.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabHandleTXT.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7TextTabE_t {};
} // unnamed namespace

template <> constexpr inline auto TextTab::qt_create_metaobjectdata<qt_meta_tag_ZN7TextTabE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextTab",
        "findNext",
        "",
        "str",
        "Qt::CaseSensitivity",
        "cs",
        "findAll",
        "clearHighlight"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'findNext'
        QtMocHelpers::SlotData<void(const QString &, Qt::CaseSensitivity)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'findAll'
        QtMocHelpers::SlotData<void(const QString &, Qt::CaseSensitivity)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'clearHighlight'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextTab, qt_meta_tag_ZN7TextTabE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TextTab::staticMetaObject = { {
    QMetaObject::SuperData::link<TabAbstract::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TextTabE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TextTabE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7TextTabE_t>.metaTypes,
    nullptr
} };

void TextTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextTab *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->findNext((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 1: _t->findAll((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 2: _t->clearHighlight(); break;
        default: ;
        }
    }
}

const QMetaObject *TextTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7TextTabE_t>.strings))
        return static_cast<void*>(this);
    return TabAbstract::qt_metacast(_clname);
}

int TextTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabAbstract::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
