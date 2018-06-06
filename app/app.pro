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
        include/antlr4-runtime \
        include

SOURCES += src/main.cpp \
    src/ast.cpp \
    src/botvinareallistener.cpp \
    src/figure/circlefigure.cpp \
    src/drawwindow.cpp \
    src/evaluator/evaluator.cpp \
    src/figure/linefigure.cpp \
    src/mainwindow.cpp \
    src/figure/pointfigure.cpp \
    src/figure/quadranglefigure.cpp \
    include/anltr_generated/botvinaBaseListener.cpp \
    include/anltr_generated/botvinaLexer.cpp \
    include/anltr_generated/botvinaListener.cpp \
    include/anltr_generated/botvinaParser.cpp \
    src/evaluator/botivnamemory.cpp

HEADERS += \
        include/mainwindow.h \
    include/anltr_generated/botvinaBaseListener.h \
    include/anltr_generated/botvinaLexer.h \
    include/anltr_generated/botvinaListener.h \
    include/anltr_generated/botvinaParser.h \
    include/ast/atom/FunctionApply.hpp \
    include/ast/atom/FunctionLiteral.hpp \
    include/ast/atom/Identifier.hpp \
    include/ast/atom/Integer.hpp \
    include/ast/add_statement.h \
    include/ast/and_statement.h \
    include/ast/assign_statement.h \
    include/ast/ast.hpp \
    include/ast/circle.hpp \
    include/ast/color.hpp \
    include/ast/eq_statement.hpp \
    include/ast/if_statement.hpp \
    include/ast/line.hpp \
    include/ast/loop_statement.hpp \
    include/ast/mul_statement.h \
    include/ast/Node.hpp \
    include/ast/or_statement.hpp \
    include/ast/point.hpp \
    include/ast/quadrangle.hpp \
    include/ast/rel_statement.hpp \
    include/figure/circlefigure.hpp \
    include/figure/figure.hpp \
    include/figure/linefigure.hpp \
    include/figure/pointfigure.hpp \
    include/figure/quadranglefigure.hpp \
    include/botvinareallistener.hpp \
    include/drawwindow.hpp \
    include/evaluator/evaluator.hpp \
    include/ast/ast_header.hpp \
    include/ast/atom/atom_header.hpp \
    include/figure/figure_header.hpp \
    include/evaluator/botvinamemory.hpp


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
