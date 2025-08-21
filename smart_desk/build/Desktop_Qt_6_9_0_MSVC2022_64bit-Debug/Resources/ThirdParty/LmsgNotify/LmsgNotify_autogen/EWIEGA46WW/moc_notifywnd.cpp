/****************************************************************************
** Meta object code from reading C++ file 'notifywnd.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Resources/ThirdParty/LmsgNotify/notifywnd.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notifywnd.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9NotifyWndE_t {};
} // unnamed namespace

template <> constexpr inline auto NotifyWnd::qt_create_metaobjectdata<qt_meta_tag_ZN9NotifyWndE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NotifyWnd"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyWnd, qt_meta_tag_ZN9NotifyWndE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NotifyWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<ArrangedWnd::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9NotifyWndE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9NotifyWndE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9NotifyWndE_t>.metaTypes,
    nullptr
} };

void NotifyWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NotifyWnd *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *NotifyWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotifyWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9NotifyWndE_t>.strings))
        return static_cast<void*>(this);
    return ArrangedWnd::qt_metacast(_clname);
}

int NotifyWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArrangedWnd::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN14NotifyCountWndE_t {};
} // unnamed namespace

template <> constexpr inline auto NotifyCountWnd::qt_create_metaobjectdata<qt_meta_tag_ZN14NotifyCountWndE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NotifyCountWnd"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyCountWnd, qt_meta_tag_ZN14NotifyCountWndE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NotifyCountWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<ArrangedWnd::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14NotifyCountWndE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14NotifyCountWndE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14NotifyCountWndE_t>.metaTypes,
    nullptr
} };

void NotifyCountWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NotifyCountWnd *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *NotifyCountWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotifyCountWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14NotifyCountWndE_t>.strings))
        return static_cast<void*>(this);
    return ArrangedWnd::qt_metacast(_clname);
}

int NotifyCountWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArrangedWnd::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
