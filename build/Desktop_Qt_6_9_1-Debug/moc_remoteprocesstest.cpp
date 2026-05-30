/****************************************************************************
** Meta object code from reading C++ file 'remoteprocesstest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../remoteprocesstest.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteprocesstest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS = QtMocHelpers::stringData(
    "RemoteProcessTest",
    "handleConnectionError",
    "",
    "handleProcessStarted",
    "handleProcessStdout",
    "handleProcessStderr",
    "handleProcessClosed",
    "exitStatus",
    "handleTimeout",
    "handleReadyRead",
    "handleReadyReadStdout",
    "handleReadyReadStderr",
    "handleConnected",
    "sshParams",
    "QSsh::SshConnectionParameters"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[18];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[11];
    char stringdata8[14];
    char stringdata9[16];
    char stringdata10[22];
    char stringdata11[22];
    char stringdata12[16];
    char stringdata13[10];
    char stringdata14[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS_t qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "RemoteProcessTest"
        QT_MOC_LITERAL(18, 21),  // "handleConnectionError"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 20),  // "handleProcessStarted"
        QT_MOC_LITERAL(62, 19),  // "handleProcessStdout"
        QT_MOC_LITERAL(82, 19),  // "handleProcessStderr"
        QT_MOC_LITERAL(102, 19),  // "handleProcessClosed"
        QT_MOC_LITERAL(122, 10),  // "exitStatus"
        QT_MOC_LITERAL(133, 13),  // "handleTimeout"
        QT_MOC_LITERAL(147, 15),  // "handleReadyRead"
        QT_MOC_LITERAL(163, 21),  // "handleReadyReadStdout"
        QT_MOC_LITERAL(185, 21),  // "handleReadyReadStderr"
        QT_MOC_LITERAL(207, 15),  // "handleConnected"
        QT_MOC_LITERAL(223, 9),  // "sshParams"
        QT_MOC_LITERAL(233, 29)   // "QSsh::SshConnectionParameters"
    },
    "RemoteProcessTest",
    "handleConnectionError",
    "",
    "handleProcessStarted",
    "handleProcessStdout",
    "handleProcessStderr",
    "handleProcessClosed",
    "exitStatus",
    "handleTimeout",
    "handleReadyRead",
    "handleReadyReadStdout",
    "handleReadyReadStderr",
    "handleConnected",
    "sshParams",
    "QSsh::SshConnectionParameters"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRemoteProcessTestENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    2 /* Private */,
       3,    0,   75,    2, 0x08,    3 /* Private */,
       4,    0,   76,    2, 0x08,    4 /* Private */,
       5,    0,   77,    2, 0x08,    5 /* Private */,
       6,    1,   78,    2, 0x08,    6 /* Private */,
       8,    0,   81,    2, 0x08,    8 /* Private */,
       9,    0,   82,    2, 0x08,    9 /* Private */,
      10,    0,   83,    2, 0x08,   10 /* Private */,
      11,    0,   84,    2, 0x08,   11 /* Private */,
      12,    0,   85,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x00015c09, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject RemoteProcessTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRemoteProcessTestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS_t,
        // property 'sshParams'
        QtPrivate::TypeAndForceComplete<QSsh::SshConnectionParameters, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RemoteProcessTest, std::true_type>,
        // method 'handleConnectionError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleProcessStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleProcessStdout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleProcessStderr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleProcessClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleReadyReadStdout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleReadyReadStderr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RemoteProcessTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteProcessTest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleConnectionError(); break;
        case 1: _t->handleProcessStarted(); break;
        case 2: _t->handleProcessStdout(); break;
        case 3: _t->handleProcessStderr(); break;
        case 4: _t->handleProcessClosed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->handleTimeout(); break;
        case 6: _t->handleReadyRead(); break;
        case 7: _t->handleReadyReadStdout(); break;
        case 8: _t->handleReadyReadStderr(); break;
        case 9: _t->handleConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RemoteProcessTest *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSsh::SshConnectionParameters*>(_v) = _t->sshParams(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *RemoteProcessTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteProcessTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRemoteProcessTestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RemoteProcessTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
