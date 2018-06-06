#include "antlr4-runtime.h"
#include "catch.hpp"
#include "anltr_generated/botvinaLexer.h"
#include "anltr_generated/botvinaParser.h"

#include <sstream>

using namespace antlr4;

TEST_CASE( "ANTLER PARSER TESTS" ) {

  SECTION( "INTEGERS" ) {
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

    REQUIRE( tree->toStringTree(&parser) == "(position ( (add_expr (mul_expr (atom (integer 60)))) , (add_expr (mul_expr (atom (integer 20)))) ))");

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

      REQUIRE( tree->toStringTree(&parser) == "(assign_statement (identifier x) = (add_expr (mul_expr (atom (integer 5)))) ;)");
  }

  SECTION( "FUNCTION APPLY"){
      ANTLRInputStream input("t_letter(x,y);");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.function_apply();

      REQUIRE( tree->toStringTree(&parser) == "(function_apply (identifier t_letter) ( (parameter_list (expr (add_expr (mul_expr (atom (identifier x))))) , (expr (add_expr (mul_expr (atom (identifier y)))))) ) ;)");
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

  SECTION( "DRAW FIGURE"){
      ANTLRInputStream input("draw line red (60, 20) (60, 80) ;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.draw();

      REQUIRE( tree->toStringTree(&parser) == "(draw draw (predefined_figure (line line (color red) (position ( (add_expr (mul_expr (atom (integer 60)))) , (add_expr (mul_expr (atom (integer 20)))) )) (position ( (add_expr (mul_expr (atom (integer 60)))) , (add_expr (mul_expr (atom (integer 80)))) )))) ;)");
  }

  SECTION( "RETURN KEYWORD"){
      ANTLRInputStream input("return 0;");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

      botvinaParser parser(&tokens);
      tree::ParseTree* tree ;

      tree = parser.return_statement();

      REQUIRE( tree->toStringTree(&parser) == "(return_statement return (expr (add_expr (mul_expr (atom (integer 0))))) ;)");
  }



}
