#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "../include/anltr_generated/botvinaLexer.h"
#include "../include/anltr_generated/botvinaParser.h"
#include "../include/anltr_generated/botvinaBaseListener.h"
#include "include/mainwindow.h"
#include "botvinareallistener.hpp"

#include <QtWidgets/QApplication>
#include <QPainter>

using namespace antlr4;

int main(int argc, char *argv[]) {
  ANTLRInputStream input("x = 5+2+5+2+3;\ny = 3;");
  botvinaLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  std::string testString = "x = 5+2+5+2+3;\ny = 3;\nfunc t_letter(x,y)\n{\ndraw line l1 (60, 20) (60, 80) (40, 80) (40, 90)\n(90, 90) (90, 80) (70, 80) (70, 20) (60, 20) black ;\n}\nt_letter(x,y);\n clear; exit; draw line l1 (60, 20) (60, 80) (40, 80) red ; move t_letter (30,20) ; return 0;" ;

   tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout <<token->toString() << std::endl;
  }

  botvinaParser parser(&tokens);
  tree::ParseTree* tree = parser.assign_statement();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  std::cout << tree->getText()<<std::endl;

  std::cout<<tree->children[0]->getText()<<std::endl;
  std::cout<<tree->children[2]->children[0]->children[0]->children[0]->getText()<<std::endl;

  botvinaBaseListener botvina_baseListner ;
  BotvinaRealListener botvina_real_listener ;

  tree::ParseTreeWalker::DEFAULT.walk(&botvina_real_listener, tree);

  QApplication a(argc, argv);
      MainWindow w;
      w.show();
      QWidget *drawWidget = w.centralWidget()->findChild<QWidget *>("drawWidget");

/*
              QPainter painter(drawWidget);
              QPen linepen(Qt::red);
              linepen.setCapStyle(Qt::RoundCap);
              linepen.setWidth(30);
              painter.setRenderHint(QPainter::Antialiasing,true);
              painter.setPen(linepen);
              painter.drawRoundedRect(5, 6, 7, 8, 1,2);

*/
      return a.exec();
}
