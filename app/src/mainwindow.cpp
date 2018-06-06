#include "antlr4-runtime.h"
#include "anltr_generated/botvinaLexer.h"
#include "anltr_generated/botvinaParser.h"
#include "botvinareallistener.hpp"
#include "evaluator/evaluator.hpp"
#include "ast/ast.hpp"

#include "include/mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QPainter>
#include <iostream>

using namespace ast;
using namespace antlr4;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    eval(nullptr)
{
    ui->setupUi(this);
    eval = Evaluator(dynamic_cast<DrawWindow*>(this->centralWidget()->findChild<QWidget *>("drawWidget")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

Ast stringToAst(std::string statement){
    ANTLRInputStream input(statement);
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    botvinaParser parser(&tokens);
    tree::ParseTree* tree = parser.statement();
    BotvinaRealListener botvina_real_listener ;
    tree::ParseTreeWalker::DEFAULT.walk(&botvina_real_listener, tree);
    Ast ast = botvina_real_listener.getAst();
    return ast;
}

void MainWindow::keyPressEvent(QKeyEvent *key_event){
    if(key_event->key() ==Qt::Key_Return)
    {
        QLineEdit *commandLine = this->centralWidget()->findChild<QLineEdit *>("commandLine");
        QPlainTextEdit *commandHistory = this->centralWidget()->findChild<QPlainTextEdit *>("commandsHistory");
        QString commandString = commandLine->text();
        QString historyString = commandHistory->toPlainText();

        std::string commandText = commandString.toStdString();
        commandLine->clear();
        eval.eval(stringToAst(commandText));
        historyString =commandString + "\n" + historyString;
        commandHistory->setPlainText(historyString);
    }
}


