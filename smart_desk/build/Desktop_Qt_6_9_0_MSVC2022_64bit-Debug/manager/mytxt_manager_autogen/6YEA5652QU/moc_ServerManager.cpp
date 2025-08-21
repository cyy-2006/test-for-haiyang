/****************************************************************************
** Meta object code from reading C++ file 'ServerManager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../manager/include/ServerManager.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QPointer>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServerManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ServerManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto ServerManager::qt_create_metaobjectdata<qt_meta_tag_ZN13ServerManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ServerManager",
        "commitSuccess",
        "",
        "commitFailed",
        "historyReceived",
        "history",
        "onFilesListUpdated",
        "files",
        "fileListReady",
        "fileNames",
        "returnStatus",
        "exists",
        "oncommitFin",
        "QPointer<QNetworkReply>",
        "reply",
        "ondownloadFin",
        "QNetworkReply*",
        "fileName",
        "onhistoryFin"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'commitSuccess'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commitFailed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'historyReceived'
        QtMocHelpers::SignalData<void(const QStringList &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 5 },
        }}),
        // Signal 'onFilesListUpdated'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'fileListReady'
        QtMocHelpers::SignalData<void(const QStringList &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 9 },
        }}),
        // Signal 'returnStatus'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'oncommitFin'
        QtMocHelpers::SlotData<void(QPointer<QNetworkReply>)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'ondownloadFin'
        QtMocHelpers::SlotData<void(QNetworkReply *, const QString &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 14 }, { QMetaType::QString, 17 },
        }}),
        // Slot 'onhistoryFin'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ServerManager, qt_meta_tag_ZN13ServerManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ServerManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ServerManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ServerManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ServerManagerE_t>.metaTypes,
    nullptr
} };

void ServerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ServerManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->commitSuccess(); break;
        case 1: _t->commitFailed(); break;
        case 2: _t->historyReceived((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 3: _t->onFilesListUpdated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->fileListReady((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: _t->returnStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->oncommitFin((*reinterpret_cast< std::add_pointer_t<QPointer<QNetworkReply>>>(_a[1]))); break;
        case 7: _t->ondownloadFin((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->onhistoryFin((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPointer<QNetworkReply> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ServerManager::*)()>(_a, &ServerManager::commitSuccess, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ServerManager::*)()>(_a, &ServerManager::commitFailed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ServerManager::*)(const QStringList & )>(_a, &ServerManager::historyReceived, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ServerManager::*)(const QString & )>(_a, &ServerManager::onFilesListUpdated, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ServerManager::*)(const QStringList & )>(_a, &ServerManager::fileListReady, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ServerManager::*)(bool )>(_a, &ServerManager::returnStatus, 5))
            return;
    }
}

const QMetaObject *ServerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ServerManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ServerManager::commitSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ServerManager::commitFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ServerManager::historyReceived(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ServerManager::onFilesListUpdated(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void ServerManager::fileListReady(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void ServerManager::returnStatus(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
