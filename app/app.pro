#-------------------------------------------------
#
# Project created by QtCreator 2018-04-19T17:00:37
#
#-------------------------------------------------

QT       += core gui\

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = app
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


INCLUDEPATH += \
        include/antlr4-runtime

SOURCES += \
    include/anltr_generated/botvinaBaseListener.cpp \
    include/anltr_generated/botvinaLexer.cpp \
    include/anltr_generated/botvinaListener.cpp \
    include/anltr_generated/botvinaParser.cpp \
    src/Input.cpp \
    src/Lexer.cpp \
    src/main.cpp \
    src/mainwindow.cpp

HEADERS += \
        include/mainwindow.h \
    include/Token.hpp \
    include/Input.hpp \
    include/Lexer.hpp \
    include/anltr_generated/botvinaBaseListener.h \
    include/anltr_generated/botvinaLexer.h \
    include/anltr_generated/botvinaListener.h \
    include/anltr_generated/botvinaParser.h

FORMS += \
        forms/mainwindow.ui

DISTFILES += \
    include/anltr_generated/botvina.interp \
    include/anltr_generated/botvina.tokens \
    include/anltr_generated/botvinaLexer.interp \
    include/anltr_generated/botvinaLexer.tokens \
    include/anltr_generated/botvina.g4 \
    lib/libantlr4-runtime.so.4.7.1 \
    lib/libantlr4-runtime.so

LIBS += -L"$$_PRO_FILE_PWD_/lib/" -lantlr4-runtime
