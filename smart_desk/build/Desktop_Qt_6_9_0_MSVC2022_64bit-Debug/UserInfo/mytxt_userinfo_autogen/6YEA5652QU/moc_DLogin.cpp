/****************************************************************************
** Meta object code from reading C++ file 'DLogin.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../UserInfo/include/DLogin.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DLogin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6DLoginE_t {};
} // unnamed namespace

template <> constexpr inline auto DLogin::qt_create_metaobjectdata<qt_meta_tag_ZN6DLoginE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DLogin",
        "loginSuccessful",
        "",
        "username",
        "on_radioButton_clicked",
        "on_exit_toolButton_clicked",
        "on_avatar_pushButton_clicked",
        "on_registerBtn_clicked",
        "on_loginBtn_clicked",
        "onLoginResponse",
        "response",
        "onRegisterResponse",
        "onNetworkError",
        "error",
        "onAvatarDownloaded",
        "data",
        "action"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'loginSuccessful'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'on_radioButton_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_exit_toolButton_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_avatar_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_registerBtn_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_loginBtn_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLoginResponse'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 10 },
        }}),
        // Slot 'onRegisterResponse'
        QtMocHelpers::SlotData<void(const QJsonObject &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QJsonObject, 10 },
        }}),
        // Slot 'onNetworkError'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'onAvatarDownloaded'
        QtMocHelpers::SlotData<void(const QByteArray &, const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 15 }, { QMetaType::QString, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DLogin, qt_meta_tag_ZN6DLoginE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DLogin::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6DLoginE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6DLoginE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6DLoginE_t>.metaTypes,
    nullptr
} };

void DLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DLogin *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->loginSuccessful((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_radioButton_clicked(); break;
        case 2: _t->on_exit_toolButton_clicked(); break;
        case 3: _t->on_avatar_pushButton_clicked(); break;
        case 4: _t->on_registerBtn_clicked(); break;
        case 5: _t->on_loginBtn_clicked(); break;
        case 6: _t->onLoginResponse((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->onRegisterResponse((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 8: _t->onNetworkError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->onAvatarDownloaded((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DLogin::*)(const QString & )>(_a, &DLogin::loginSuccessful, 0))
            return;
    }
}

const QMetaObject *DLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6DLoginE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DLogin::loginSuccessful(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
