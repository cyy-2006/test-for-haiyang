/****************************************************************************
** Meta object code from reading C++ file 'WidgetFunctional.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../main/include/WidgetFunctional.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WidgetFunctional.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16WidgetFunctionalE_t {};
} // unnamed namespace

template <> constexpr inline auto WidgetFunctional::qt_create_metaobjectdata<qt_meta_tag_ZN16WidgetFunctionalE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WidgetFunctional",
        "showFiletag",
        "",
        "showFilebackup",
        "showwOnlinedoc",
        "showWSchedule",
        "sendEmailForm",
        "SendEmail*",
        "form",
        "showDraw",
        "showClipboard",
        "ClipboardView*",
        "clipboard",
        "buttonVisibilityChanged",
        "buttonIndex",
        "isVisible",
        "on_pushButton_8_clicked",
        "on_pushButton_1_clicked",
        "on_pushButton_2_clicked",
        "on_pushButton_3_clicked",
        "on_pushButton_4_clicked",
        "on_pushButton_5_clicked",
        "on_pushButton_6_clicked",
        "on_pushButton_7_clicked",
        "handleLoginSuccess",
        "username",
        "on_pushButton_9_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'showFiletag'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showFilebackup'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showwOnlinedoc'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showWSchedule'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sendEmailForm'
        QtMocHelpers::SignalData<void(SendEmail *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'showDraw'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showClipboard'
        QtMocHelpers::SignalData<void(ClipboardView *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'buttonVisibilityChanged'
        QtMocHelpers::SignalData<void(int, bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Bool, 15 },
        }}),
        // Slot 'on_pushButton_8_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_pushButton_1_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_3_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_4_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_5_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_6_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_7_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleLoginSuccess'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'on_pushButton_9_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WidgetFunctional, qt_meta_tag_ZN16WidgetFunctionalE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WidgetFunctional::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16WidgetFunctionalE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16WidgetFunctionalE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16WidgetFunctionalE_t>.metaTypes,
    nullptr
} };

void WidgetFunctional::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WidgetFunctional *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showFiletag(); break;
        case 1: _t->showFilebackup(); break;
        case 2: _t->showwOnlinedoc(); break;
        case 3: _t->showWSchedule(); break;
        case 4: _t->sendEmailForm((*reinterpret_cast< std::add_pointer_t<SendEmail*>>(_a[1]))); break;
        case 5: _t->showDraw(); break;
        case 6: _t->showClipboard((*reinterpret_cast< std::add_pointer_t<ClipboardView*>>(_a[1]))); break;
        case 7: _t->buttonVisibilityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->on_pushButton_8_clicked(); break;
        case 9: _t->on_pushButton_1_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_pushButton_4_clicked(); break;
        case 13: _t->on_pushButton_5_clicked(); break;
        case 14: _t->on_pushButton_6_clicked(); break;
        case 15: _t->on_pushButton_7_clicked(); break;
        case 16: _t->handleLoginSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->on_pushButton_9_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SendEmail* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ClipboardView* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)()>(_a, &WidgetFunctional::showFiletag, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)()>(_a, &WidgetFunctional::showFilebackup, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)()>(_a, &WidgetFunctional::showwOnlinedoc, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)()>(_a, &WidgetFunctional::showWSchedule, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)(SendEmail * )>(_a, &WidgetFunctional::sendEmailForm, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)()>(_a, &WidgetFunctional::showDraw, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)(ClipboardView * )>(_a, &WidgetFunctional::showClipboard, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (WidgetFunctional::*)(int , bool )>(_a, &WidgetFunctional::buttonVisibilityChanged, 7))
            return;
    }
}

const QMetaObject *WidgetFunctional::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetFunctional::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16WidgetFunctionalE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetFunctional::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void WidgetFunctional::showFiletag()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WidgetFunctional::showFilebackup()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WidgetFunctional::showwOnlinedoc()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WidgetFunctional::showWSchedule()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WidgetFunctional::sendEmailForm(SendEmail * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void WidgetFunctional::showDraw()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WidgetFunctional::showClipboard(ClipboardView * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void WidgetFunctional::buttonVisibilityChanged(int _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}
QT_WARNING_POP
