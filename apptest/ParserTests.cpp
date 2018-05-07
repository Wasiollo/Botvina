#include "include/Lexer.hpp"
#include "catch.hpp"
#include "antlr4-runtime.h"
#include "include/anltr_generated/botvinaLexer.h"
#include "include/anltr_generated/botvinaParser.h"

#include <sstream>

using namespace antlr4;

TEST_CASE( "ANTLER PARSER TESTS" ) {

  SECTION( "integers" ) {
    ANTLRInputStream input("1 134 -3 -125 0");
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    botvinaParser parser(&tokens);
    tree::ParseTree* tree ;

    tree = parser.integer();

    REQUIRE( tree->toStringTree(&parser) == "(integer 1)");

    tree = parser.integer();

    REQUIRE( tree->toStringTree(&parser) == "(integer 134)");

    tree = parser.integer();

    REQUIRE( tree->toStringTree(&parser) == "(integer -3)");

    tree = parser.integer();

    REQUIRE( tree->toStringTree(&parser) == "(integer -125)");

    tree = parser.integer();

    REQUIRE( tree->toStringTree(&parser) == "(integer 0)");

  }



  SECTION( "POSITION" ) {
    ANTLRInputStream input("(60, 20)");
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();

    botvinaParser parser(&tokens);
    tree::ParseTree* tree ;

    tree = parser.position();

    REQUIRE( tree->toStringTree(&parser) == "(position ( (integer 60) , (integer 20) ))");

  }

  SECTION( "COLOR" ) {
      ANTLRInputStream input("black");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.color();

      REQUIRE( tree->toStringTree(&parser) == "(color black)");
  }

  SECTION( "IDENTIFIER" ) {
      ANTLRInputStream input("x");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.identifier();

      REQUIRE( tree->toStringTree(&parser) == "(identifier x)");
  }

  SECTION( "ASSIGN STATEMENT") {
      ANTLRInputStream input("x=5;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.assign_statement();

      REQUIRE( tree->toStringTree(&parser) == "(assign_statement (identifier x) = (integer 5) ;)");
  }

  SECTION( "FUNCTION LITERAL"){
      ANTLRInputStream input("func t_letter(x,y)\n{\ndraw line l1 (60, 20) (60, 80) (40, 80) (40, 90)\n(90, 90) (90, 80) (70, 80) (70, 20) (60, 20) black ;\n}");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.function_literal();

      REQUIRE( tree->toStringTree(&parser) == "(function_literal func (identifier t_letter) ( (parameter_list (expr (atom (identifier x))) , (expr (atom (identifier y)))) ) (block { (statement (operand (draw draw (predefined_figure (line line (identifier l1) (position ( (integer 60) , (integer 20) )) (position ( (integer 60) , (integer 80) )) (position ( (integer 40) , (integer 80) )) (position ( (integer 40) , (integer 90) )) (position ( (integer 90) , (integer 90) )) (position ( (integer 90) , (integer 80) )) (position ( (integer 70) , (integer 80) )) (position ( (integer 70) , (integer 20) )) (position ( (integer 60) , (integer 20) )) (color black))) ;))) }))");
  }

  SECTION( "FUNCTION APPLY"){
      ANTLRInputStream input("t_letter(x,y);");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.function_apply();

      REQUIRE( tree->toStringTree(&parser) == "(function_apply (identifier t_letter) ( (parameter_list (expr (atom (identifier x))) , (expr (atom (identifier y)))) ) ;)");
  }

  SECTION( "CLEAR STATEMENT"){
      ANTLRInputStream input("clear;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.clear_statement();

      REQUIRE( tree->toStringTree(&parser) == "(clear_statement clear ;)");
  }


  SECTION( "EXIT STATEMENT"){
      ANTLRInputStream input("exit;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.exit_statement();

      REQUIRE( tree->toStringTree(&parser) == "(exit_statement exit ;)");
  }

  SECTION( "DRAW KEYWORD"){
      ANTLRInputStream input("draw line l1 (60, 20) (60, 80) (40, 80) red ;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.draw();

      REQUIRE( tree->toStringTree(&parser) == "(draw draw (predefined_figure (line line (identifier l1) (position ( (integer 60) , (integer 20) )) (position ( (integer 60) , (integer 80) )) (position ( (integer 40) , (integer 80) )) (color red))) ;)");
  }

  SECTION( "MOVE KEYWORD"){
      ANTLRInputStream input("move t_letter (30,20) ;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.move();

      REQUIRE( tree->toStringTree(&parser) == "(move move (identifier t_letter) (position ( (integer 30) , (integer 20) )) ;)");
  }

  SECTION( "RETURN KEYWORD"){
      ANTLRInputStream input("return 0;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.return_statement();

      REQUIRE( tree->toStringTree(&parser) == "(return_statement return (expr (atom (integer 0))) ;)");
  }

  SECTION( "INPUT TEXT" ){
      ANTLRInputStream input("x=5;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.input_text();

      REQUIRE( tree->toStringTree(&parser) == "(input_text (statement (assign_statement (identifier x) = (integer 5) ;)) <EOF>)");
  }

}

