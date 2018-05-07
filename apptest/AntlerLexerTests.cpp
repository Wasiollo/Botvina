#include "include/Lexer.hpp"
#include "catch.hpp"
#include "antlr4-runtime.h"
#include "include/anltr_generated/botvinaLexer.h"
#include "include/anltr_generated/botvinaParser.h"

#include <sstream>

using namespace antlr4;

TEST_CASE( "ANTLER LEXER TESTS" ) {

  SECTION( "identifiers" ) {
    ANTLRInputStream input("ala ma1 kota_ _ _a _1kot _ma_ _1_ 1ale");
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();

    auto token = tokens.get(0);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText()== "ala" );

    token = tokens.get(1);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "ma1" );

    token = tokens.get(2);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "kota_" );

    token = tokens.get(3);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "_" );

    token = tokens.get(4);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "_a" );

    token = tokens.get(5);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "_1kot" );

    token = tokens.get(6);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "_ma_" );

    token = tokens.get(7);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "_1_" );

    token = tokens.get(8);
    REQUIRE( token->getType() == lexer.INTEGER);
    REQUIRE( token->getText() == "1" );

    token = tokens.get(9);
    REQUIRE( token->getType() == lexer.IDENTIFIER );
    REQUIRE( token->getText() == "ale" );
  }

  SECTION( "Integers" ) {
    SECTION( "positive" ) {
    ANTLRInputStream input("123456");
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();

      auto token = tokens.get(0);
      REQUIRE( token->getType() == lexer.INTEGER );
      REQUIRE( token->getText() == "123456" );
    }

    SECTION( "negative" ) {
        ANTLRInputStream input("-7546321");
        botvinaLexer lexer(&input);
        CommonTokenStream tokens(&lexer);

        tokens.fill();

      auto token = tokens.get(0);
      REQUIRE( token->getType() == lexer.INTEGER );
      REQUIRE( token->getText() == "-7546321" );
    }

    SECTION( "zero" ) {
        ANTLRInputStream input("0");
        botvinaLexer lexer(&input);
        CommonTokenStream tokens(&lexer);

        tokens.fill();

      auto token = tokens.get(0);

      REQUIRE( token->getType() == lexer.INTEGER );
      REQUIRE( token->getText() == "0" );
    }
  }

  SECTION( "FUNCTIONS AND BOOLEAN" ) {
    ANTLRInputStream input("func draw move if when clear exit return True False");
    botvinaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();


    SECTION( "func" ) {

      auto token = tokens.get(0);
      REQUIRE( token->getType() == lexer.FUNCTION_KEYWORD );
      REQUIRE( token->getText() == "func" );
    }

    SECTION( "draw" ) {

      auto token = tokens.get(1);
      REQUIRE( token->getType() == lexer.DRAW_KEYWORD );
      REQUIRE( token->getText() == "draw" );
    }

    SECTION( "move" ) {

      auto token = tokens.get(2);
      REQUIRE( token->getType() == lexer.MOVE_KEYWORD );
      REQUIRE( token->getText() == "move" );
    }

    SECTION( "if" ) {

      auto token = tokens.get(3);
      REQUIRE( token->getType() == lexer.IF_KEYWORD);
      REQUIRE( token->getText() == "if" );
    }

    SECTION( "when" ) {

      auto token = tokens.get(4);
      REQUIRE( token->getType() == lexer.WHEN_KEYWORD );
      REQUIRE( token->getText() == "when" );
    }

    SECTION( "clear" ) {

      auto token = tokens.get(5);
      REQUIRE( token->getType() == lexer.CLEAR_KEYWORD );
      REQUIRE( token->getText() == "clear" );
    }

    SECTION( "exit" ) {

      auto token = tokens.get(6);
      REQUIRE( token->getType() == lexer.EXIT_KEYWORD );
      REQUIRE( token->getText() == "exit" );
    }

    SECTION( "return" ) {

      auto token = tokens.get(7);
      REQUIRE( token->getType() == lexer.RETURN_KEYWORD );
      REQUIRE( token->getText() == "return" );
    }

    SECTION( "True" ) {

      auto token = tokens.get(8);
      REQUIRE( token->getType() == lexer.TRUE_KEYWORD );
      REQUIRE( token->getText() == "True" );
    }

    SECTION( "False" ) {

      auto token = tokens.get(9);
      REQUIRE( token->getType() == lexer.FALSE_KEYWORD );
      REQUIRE( token->getText() == "False" );
    }
  }

  SECTION( "MATHEMATICA OPERATIONS" ) {
      ANTLRInputStream input("> >= < <= && || = == != + - * / %");
      botvinaLexer lexer(&input);
      CommonTokenStream tokens(&lexer);

      tokens.fill();

    SECTION( "greater than" ) {

      auto token = tokens.get(0);
      REQUIRE( token->getType() == lexer.RELATION_OPERATOR );
      REQUIRE( token->getText() == ">" );
    }

    SECTION( "greater or equal" ) {

      auto token = tokens.get(1);
      REQUIRE( token->getType() == lexer.RELATION_OPERATOR );
      REQUIRE( token->getText() == ">=" );
    }

    SECTION( "less than" ) {

      auto token = tokens.get(2);
      REQUIRE( token->getType() == lexer.RELATION_OPERATOR );
      REQUIRE( token->getText() == "<" );
    }

    SECTION( "less or equal" ) {
      auto token = tokens.get(3);
      REQUIRE( token->getType() == lexer.RELATION_OPERATOR );
      REQUIRE( token->getText() == "<=" );
    }

    SECTION( "and" ) {

      auto token = tokens.get(4);
      REQUIRE( token->getType() == lexer.AND_OPERATOR );
      REQUIRE( token->getText() == "&&" );
    }

    SECTION( "or" ) {

      auto token = tokens.get(5);
      REQUIRE( token->getType() == lexer.OR_OPERATOR);
      REQUIRE( token->getText() == "||" );
    }

    SECTION( "assign" ) {

      auto token = tokens.get(6);
      REQUIRE( token->getType() == lexer.EQ);
      REQUIRE( token->getText() == "=" );
    }

    SECTION( "equal" ) {

      auto token = tokens.get(7);
      REQUIRE( token->getType() == lexer.EQ_OPERATOR );
      REQUIRE( token->getText() == "==" );
    }

    SECTION( "not equal" ) {

      auto token = tokens.get(8);
      REQUIRE( token->getType() == lexer.EQ_OPERATOR );
      REQUIRE( token->getText() == "!=" );
    }

    SECTION( "add" ) {

      auto token = tokens.get(9);
      REQUIRE( token->getType() == lexer.ADD_OPERATOR );
      REQUIRE( token->getText() == "+" );
    }

    SECTION( "subtract" ) {

      auto token = tokens.get(10);
      REQUIRE( token->getType() == lexer.ADD_OPERATOR );
      REQUIRE( token->getText() == "-" );
    }

    SECTION( "multiply" ) {

      auto token = tokens.get(11);
      REQUIRE( token->getType() == lexer.MUL_OPERATOR);
      REQUIRE( token->getText() == "*" );
    }

    SECTION( "divide" ) {

      auto token = tokens.get(12);
      REQUIRE( token->getType() == lexer.MUL_OPERATOR);
      REQUIRE( token->getText() == "/" );
    }

    SECTION( "modulo" ) {

      auto token = tokens.get(13);
      REQUIRE( token->getType() == lexer.MUL_OPERATOR );
      REQUIRE( token->getText() == "%" );
    }
  }

  SECTION( "other" ) {
  ANTLRInputStream input("{}(),;");
  botvinaLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
    SECTION( "set brackets" ) {

      auto token = tokens.get(0);
      REQUIRE( token->getType() == lexer.SET_BRACKET_OP );
      REQUIRE( token->getText() == "{" );

      token = tokens.get(1);
      REQUIRE( token->getType() == lexer.SET_BRACKET_CL);
      REQUIRE( token->getText() == "}" );
    }

    SECTION( "round brackets" ) {

      auto token = tokens.get(2);
      REQUIRE( token->getType() == lexer.RND_BRACKET_OP);
      REQUIRE( token->getText() == "(" );

      token = tokens.get(3);
      REQUIRE( token->getType() == lexer.RND_BRACKET_CL );
      REQUIRE( token->getText() == ")" );
    }

    SECTION( "comma" ) {

      auto token = tokens.get(4);
      REQUIRE( token->getType() == lexer.CMM );
      REQUIRE( token->getText() == "," );
    }

    SECTION( "semicolon" ) {

      auto token = tokens.get(5);
      REQUIRE( token->getType() == lexer.SEMICOLON );
      REQUIRE( token->getText() == ";" );
    }
  }

  SECTION( "geometric primitives" ){
  ANTLRInputStream input("circle quadrangle line point");
  botvinaLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
      SECTION( "circle" ) {

        auto token = tokens.get(0);
        REQUIRE( token->getType() == lexer.CIRCLE_KEYWORD );
        REQUIRE( token->getText() == "circle" );
      }

      SECTION( "quadrangle" ) {

        auto token = tokens.get(1);
        REQUIRE( token->getType() == lexer.QUADRANGLE_KEYWORD );
        REQUIRE( token->getText() == "quadrangle" );
      }

      SECTION( "line" ) {

        auto token = tokens.get(2);
        REQUIRE( token->getType() == lexer.LINE_KEYWORD);
        REQUIRE( token->getText() == "line" );
      }

      SECTION( "point" ) {

        auto token = tokens.get(3);
        REQUIRE( token->getType() == lexer.POINT_KEYWORD );
        REQUIRE( token->getText() == "point" );
      }
  }

  SECTION( "colors" ){
  ANTLRInputStream input("black red blue green");
  botvinaLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
      SECTION( "black" ) {

        auto token = tokens.get(0);
        REQUIRE( token->getType() == lexer.BLACK_KEYWORD );
        REQUIRE( token->getText() == "black" );
      }

      SECTION( "red" ) {

        auto token = tokens.get(1);
        REQUIRE( token->getType() == lexer.RED_KEYWORD);
        REQUIRE( token->getText() == "red" );
      }

      SECTION( "blue" ) {

        auto token = tokens.get(2);
        REQUIRE( token->getType() == lexer.BLUE_KEYWORD);
        REQUIRE( token->getText() == "blue" );
      }

      SECTION( "green" ) {

        auto token = tokens.get(3);
        REQUIRE( token->getType() == lexer.GREEN_KEYWORD);
        REQUIRE( token->getText() == "green" );
      }
  }

}


TEST_CASE( "TRACKING POSITION ANTLER" ) {
ANTLRInputStream input("abcde 12 asd\n"
                       "cde fgh jkajnsdkjasn");
botvinaLexer lexer(&input);
CommonTokenStream tokens(&lexer);

tokens.fill();
  auto token = tokens.get(0);


  REQUIRE( token->getLine() == 1 );
  REQUIRE( token->getCharPositionInLine() == 0 );

  token = tokens.get(1);
  REQUIRE( token->getLine() == 1 );
  REQUIRE( token->getCharPositionInLine() == 6 );

  token = tokens.get(2);
  REQUIRE( token->getLine() == 1 );
  REQUIRE( token->getCharPositionInLine() == 9 );

  token = tokens.get(3);
  REQUIRE( token->getLine() == 2 );
  REQUIRE( token->getCharPositionInLine() == 0 );

  token = tokens.get(4);
  REQUIRE( token->getLine() == 2 );
  REQUIRE( token->getCharPositionInLine() == 4 );

  token = tokens.get(5);
  REQUIRE( token->getLine() == 2 );
  REQUIRE( token->getCharPositionInLine() == 8 );
}

