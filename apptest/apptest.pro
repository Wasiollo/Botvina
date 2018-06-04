QT += testlib
QT -= gui


CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle
CONFIG += c++14

TEMPLATE = app

include(../3rdparty/catch/catch.pri)
include(../3rdparty/trompeloeil/trompeloeil.pri)

PROJECT_DIR = $$PWD/../app

INCLUDEPATH += $$PROJECT_DIR \
       $$PROJECT_DIR/include/antlr4-runtime \
        $$PROJECT_DIR/include

PROJECT_SOURCES = \
    $$PROJECT_DIR/include/anltr_generated/botvinaBaseListener.cpp \
    $$PROJECT_DIR/include/anltr_generated/botvinaLexer.cpp \
    $$PROJECT_DIR/include/anltr_generated/botvinaListener.cpp \
    $$PROJECT_DIR/include/anltr_generated/botvinaParser.cpp \
    $$PROJECT_DIR/src/ast.cpp \
    $$PROJECT_DIR/src/botvinareallistener.cpp \
    $$PROJECT_DIR/src/evaluator/botivnamemory.cpp

PROJECT_HEADERS = \
    $$PROJECT_DIR/include/anltr_generated/botvinaBaseListener.h \
    $$PROJECT_DIR/include/anltr_generated/botvinaLexer.h \
    $$PROJECT_DIR/include/anltr_generated/botvinaListener.h \
    $$PROJECT_DIR/include/anltr_generated/botvinaParser.h \
    $$PROJECT_DIR/include/ast/ast_header.hpp \
    $$PROJECT_DIR/include/evaluator/botvinamemory.hpp \
    $$PROJECT_DIR/include/botvinareallistener.hpp




SOURCES +=  \
    tst_apptests.cpp \
    main.cpp\
    $$PROJECT_SOURCES \
    AntlerLexerTests.cpp \
    passertests.cpp \
    asttests.cpp


HEADERS += \
    $$PROJECT_HEADERS

DISTFILES += \
    $$PROJECT_DIR/include/anltr_generated/botvina.interp \
    $$PROJECT_DIR/include/anltr_generated/botvina.tokens \
    $$PROJECT_DIR/include/anltr_generated/botvinaLexer.interp \
    $$PROJECT_DIR/include/anltr_generated/botvinaLexer.tokens \
    $$PROJECT_DIR/include/anltr_generated/botvina.g4 \
    $$PROJECT_DIR/lib/libantlr4-runtime.so.4.7.1 \
    $$PROJECT_DIR/lib/libantlr4-runtime.so

LIBS += -L"$$PROJECT_DIR/lib/" -lantlr4-runtime
