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

PROJECT_SOURCES = \
    $$PROJECT_DIR/src/Input.cpp \
    $$PROJECT_DIR/src/Lexer.cpp

PROJECT_HEADERS = \
    $$PROJECT_DIR/include/Input.hpp \
    $$PROJECT_DIR/include/Lexer.hpp \
    $$PROJECT_DIR/include/Token.hpp


SOURCES +=  \
    tst_apptests.cpp \
    main.cpp\
    $$PROJECT_SOURCES \
    InputTests.cpp \
    LexerTests.cpp

HEADERS += \
    $$PROJECT_HEADERS
