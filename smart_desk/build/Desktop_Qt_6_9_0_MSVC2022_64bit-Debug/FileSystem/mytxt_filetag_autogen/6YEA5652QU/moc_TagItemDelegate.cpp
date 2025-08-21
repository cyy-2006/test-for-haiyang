/****************************************************************************
** Meta object code from reading C++ file 'TagItemDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../FileSystem/include/TagItemDelegate.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TagItemDelegate.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15TagItemDelegateE_t {};
} // unnamed namespace

template <> constexpr inline auto TagItemDelegate::qt_create_metaobjectdata<qt_meta_tag_ZN15TagItemDelegateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TagItemDelegate",
        "tagbutClicked",
        "",
        "QModelIndex",
        "index",
        "subbutClicked",
        "openFileRequested",
        "filePath",
        "deleteFileRequested",
        "onFilesListUpdated",
        "files",
        "TagUpdated",
        "onNewTagTriggered",
        "QAbstractItemModel*",
        "model",
        "onOpenFileTriggered",
        "onDeleteFileTriggered",
        "onCommitTriggered",
        "onCopyPathTriggered",
        "onOpenInExplorer"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'tagbutClicked'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'subbutClicked'
        QtMocHelpers::SignalData<void(const QModelIndex &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'openFileRequested'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'deleteFileRequested'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'onFilesListUpdated'
        QtMocHelpers::SignalData<void(const QStringList &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 10 },
        }}),
        // Signal 'TagUpdated'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onNewTagTriggered'
        QtMocHelpers::SlotData<void(QAbstractItemModel *, const QModelIndex &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onOpenFileTriggered'
        QtMocHelpers::SlotData<void(QAbstractItemModel *, const QModelIndex &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onDeleteFileTriggered'
        QtMocHelpers::SlotData<void(QAbstractItemModel *, const QModelIndex &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onCommitTriggered'
        QtMocHelpers::SlotData<void(QAbstractItemModel *, const QModelIndex &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onCopyPathTriggered'
        QtMocHelpers::SlotData<void(QAbstractItemModel *, const QModelIndex &)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onOpenInExplorer'
        QtMocHelpers::SlotData<void(QAbstractItemModel *, const QModelIndex &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TagItemDelegate, qt_meta_tag_ZN15TagItemDelegateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TagItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15TagItemDelegateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15TagItemDelegateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15TagItemDelegateE_t>.metaTypes,
    nullptr
} };

void TagItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TagItemDelegate *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->tagbutClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->subbutClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->openFileRequested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->deleteFileRequested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onFilesListUpdated((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: _t->TagUpdated(); break;
        case 6: _t->onNewTagTriggered((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 7: _t->onOpenFileTriggered((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 8: _t->onDeleteFileTriggered((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 9: _t->onCommitTriggered((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 10: _t->onCopyPathTriggered((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 11: _t->onOpenInExplorer((*reinterpret_cast< std::add_pointer_t<QAbstractItemModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractItemModel* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TagItemDelegate::*)(const QModelIndex & )>(_a, &TagItemDelegate::tagbutClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TagItemDelegate::*)(const QModelIndex & )>(_a, &TagItemDelegate::subbutClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TagItemDelegate::*)(const QString & )>(_a, &TagItemDelegate::openFileRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TagItemDelegate::*)(const QString & )>(_a, &TagItemDelegate::deleteFileRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TagItemDelegate::*)(const QStringList & )>(_a, &TagItemDelegate::onFilesListUpdated, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TagItemDelegate::*)()>(_a, &TagItemDelegate::TagUpdated, 5))
            return;
    }
}

const QMetaObject *TagItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15TagItemDelegateE_t>.strings))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int TagItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TagItemDelegate::tagbutClicked(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void TagItemDelegate::subbutClicked(const QModelIndex & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void TagItemDelegate::openFileRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void TagItemDelegate::deleteFileRequested(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void TagItemDelegate::onFilesListUpdated(const QStringList & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void TagItemDelegate::TagUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
