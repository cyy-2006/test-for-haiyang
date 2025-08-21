/****************************************************************************
** Meta object code from reading C++ file 'FlaskInfo.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../UserInfo/include/FlaskInfo.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlaskInfo.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9FlaskInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto FlaskInfo::qt_create_metaobjectdata<qt_meta_tag_ZN9FlaskInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FlaskInfo",
        "s_loginRec",
        "",
        "response",
        "s_registerRec",
        "s_updateRec",
        "s_loadRec",
        "errorOccurred",
        "error",
        "avatarDownloaded",
        "data",
        "action",
        "H_LoginAct",
        "jsonRes",
        "H_RegisterAct",
        "H_UpdateAct",
        "H_LoadAct",
        "fetchAvatarImage",
        "url"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 's_loginRec'
        QtMocHelpers::SignalData<void(const QJsonObject &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QJsonObject, 3 },
        }}),
        // Signal 's_registerRec'
        QtMocHelpers::SignalData<void(const QJsonObject &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QJsonObject, 3 },
        }}),
        // Signal 's_updateRec'
        QtMocHelpers::SignalData<void(const QJsonObject &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QJsonObject, 3 },
        }}),
        // Signal 's_loadRec'
        QtMocHelpers::SignalData<void(const QJsonObject &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QJsonObject, 3 },
        }}),
        // Signal 'errorOccurred'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Signal 'avatarDownloaded'
        QtMocHelpers::SignalData<void(const QByteArray &, const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 10 }, { QMetaType::QString, 11 },
        }}),
        // Slot 'H_LoginAct'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 13 },
        }}),
        // Slot 'H_RegisterAct'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 13 },
        }}),
        // Slot 'H_UpdateAct'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 13 },
        }}),
        // Slot 'H_LoadAct'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 13 },
        }}),
        // Slot 'fetchAvatarImage'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 }, { QMetaType::QString, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FlaskInfo, qt_meta_tag_ZN9FlaskInfoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FlaskInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9FlaskInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9FlaskInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9FlaskInfoE_t>.metaTypes,
    nullptr
} };

void FlaskInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FlaskInfo *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->s_loginRec((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 1: _t->s_registerRec((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 2: _t->s_updateRec((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 3: _t->s_loadRec((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 4: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->avatarDownloaded((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->H_LoginAct((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->H_RegisterAct((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 8: _t->H_UpdateAct((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 9: _t->H_LoadAct((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 10: _t->fetchAvatarImage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FlaskInfo::*)(const QJsonObject & )>(_a, &FlaskInfo::s_loginRec, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlaskInfo::*)(const QJsonObject & )>(_a, &FlaskInfo::s_registerRec, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlaskInfo::*)(const QJsonObject & )>(_a, &FlaskInfo::s_updateRec, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlaskInfo::*)(const QJsonObject & )>(_a, &FlaskInfo::s_loadRec, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlaskInfo::*)(const QString & )>(_a, &FlaskInfo::errorOccurred, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FlaskInfo::*)(const QByteArray & , const QString & )>(_a, &FlaskInfo::avatarDownloaded, 5))
            return;
    }
}

const QMetaObject *FlaskInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlaskInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9FlaskInfoE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlaskInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FlaskInfo::s_loginRec(const QJsonObject & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FlaskInfo::s_registerRec(const QJsonObject & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void FlaskInfo::s_updateRec(const QJsonObject & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void FlaskInfo::s_loadRec(const QJsonObject & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void FlaskInfo::errorOccurred(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void FlaskInfo::avatarDownloaded(const QByteArray & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}
QT_WARNING_POP
