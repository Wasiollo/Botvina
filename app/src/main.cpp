#include <iostream>

#include "antlr4-runtime.h"
#include "../include/anltr_generated/botvinaLexer.h"
#include "../include/anltr_generated/botvinaParser.h"
#include "include/mainwindow.h"

#include <QtWidgets/QApplication>

using namespace antlr4;

int main(int argc, char *argv[]) {
  ANTLRInputStream input("x = 5;\ny = 3;\nfunc t_letter(x,y)\n{\ndraw line l1 (60, 20) (60, 80) (40, 80) (40, 90)\n(90, 90) (90, 80) (70, 80) (70, 20) (60, 20) black ;\n}\nt_letter(x,y);\n clear; exit; draw line l1 (60, 20) (60, 80) (40, 80) red ;"
                         "move t_letter (30,20) ;"
                         "return 0;");
  botvinaLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

   tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout <<token->toString() << std::endl;
  }

  botvinaParser parser(&tokens);
  tree::ParseTree* tree = parser.input_text();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
 
  
  QApplication a(argc, argv);
      MainWindow w;
      w.show();


      return a.exec();
}
