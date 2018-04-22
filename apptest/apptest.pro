QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle
CONFIG += c++14

TEMPLATE = app

include(../3rdparty/catch/catch.pri)
include(../3rdparty/trompeloeil/trompeloeil.pri)

PROJECT_DIR = $$PWD/../app

INCLUDEPATH += $$PROJECT_DIR

SOURCES +=  \
    tst_apptests.cpp \
    main.cpp
