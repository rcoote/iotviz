QT += gui widgets sql
CONFIG += console

TARGET=hostmanager
SOURCES+=main.cpp \
    HostManagerWindow.cpp \
    mainwindow.cpp \
    treeitem.cpp \
    treemodel.cpp

HEADERS+=\
    HostManagerWindow.h \
    mainwindow.h \
    treeitem.h \
    treemodel.h

RESOURCES += \
    resources.qrc

FORMS += \
    HostManagerWindow.ui \
    mainwindow.ui

DISTFILES += \
    README.md \
    TODOS.md \
    documentation/README.md \
    documentation/TODOS.md

LIBS += -lssh

INCLUDEPATH += $$PWD/''
DEPENDPATH += $$PWD/''
