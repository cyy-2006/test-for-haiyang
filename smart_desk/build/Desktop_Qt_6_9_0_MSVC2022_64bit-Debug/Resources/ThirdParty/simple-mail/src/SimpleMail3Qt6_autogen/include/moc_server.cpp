/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../Resources/ThirdParty/simple-mail/src/server.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10SimpleMail6ServerE_t {};
} // unnamed namespace

template <> constexpr inline auto SimpleMail::Server::qt_create_metaobjectdata<qt_meta_tag_ZN10SimpleMail6ServerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SimpleMail::Server",
        "smtpError",
        "",
        "SmtpError",
        "e",
        "description",
        "sslErrors",
        "QList<QSslError>",
        "sslErrorList",
        "AuthMethod",
        "AuthNone",
        "AuthPlain",
        "AuthLogin",
        "AuthCramMd5",
        "ConnectionTimeoutError",
        "ResponseTimeoutError",
        "SendDataTimeoutError",
        "AuthenticationFailedError",
        "ServerError",
        "ClientError",
        "ConnectionType",
        "TcpConnection",
        "SslConnection",
        "TlsConnection",
        "PeerVerificationType",
        "VerifyNone",
        "VerifyPeer"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'smtpError'
        QtMocHelpers::SignalData<void(SmtpError, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'sslErrors'
        QtMocHelpers::SignalData<void(const QList<QSslError> &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'AuthMethod'
        QtMocHelpers::EnumData<AuthMethod>(9, 9, QMC::EnumFlags{}).add({
            {   10, AuthMethod::AuthNone },
            {   11, AuthMethod::AuthPlain },
            {   12, AuthMethod::AuthLogin },
            {   13, AuthMethod::AuthCramMd5 },
        }),
        // enum 'SmtpError'
        QtMocHelpers::EnumData<SmtpError>(3, 3, QMC::EnumFlags{}).add({
            {   14, SmtpError::ConnectionTimeoutError },
            {   15, SmtpError::ResponseTimeoutError },
            {   16, SmtpError::SendDataTimeoutError },
            {   17, SmtpError::AuthenticationFailedError },
            {   18, SmtpError::ServerError },
            {   19, SmtpError::ClientError },
        }),
        // enum 'ConnectionType'
        QtMocHelpers::EnumData<ConnectionType>(20, 20, QMC::EnumFlags{}).add({
            {   21, ConnectionType::TcpConnection },
            {   22, ConnectionType::SslConnection },
            {   23, ConnectionType::TlsConnection },
        }),
        // enum 'PeerVerificationType'
        QtMocHelpers::EnumData<PeerVerificationType>(24, 24, QMC::EnumFlags{}).add({
            {   25, PeerVerificationType::VerifyNone },
            {   26, PeerVerificationType::VerifyPeer },
        }),
    };
    return QtMocHelpers::metaObjectData<Server, qt_meta_tag_ZN10SimpleMail6ServerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SimpleMail::Server::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SimpleMail6ServerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SimpleMail6ServerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SimpleMail6ServerE_t>.metaTypes,
    nullptr
} };

void SimpleMail::Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Server *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->smtpError((*reinterpret_cast< std::add_pointer_t<SmtpError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Server::*)(SmtpError , const QString & )>(_a, &Server::smtpError, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Server::*)(const QList<QSslError> & )>(_a, &Server::sslErrors, 1))
            return;
    }
}

const QMetaObject *SimpleMail::Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleMail::Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SimpleMail6ServerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimpleMail::Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SimpleMail::Server::smtpError(SmtpError _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void SimpleMail::Server::sslErrors(const QList<QSslError> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
