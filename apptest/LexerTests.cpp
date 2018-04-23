#include "include/Lexer.hpp"
#include "catch.hpp"

#include <sstream>

using namespace botvina;

TEST_CASE( "LEXER TESTS" ) {

  std::istringstream iss;
  Token token = Token::Unknown();
  Lexer lexer(iss);

  SECTION( "identifiers" ) {
    iss.str("ala ma1 kota_ _ _a _1kot _ma_ _1_ 1ale");

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "ala" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "ma1" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "kota_" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "_" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "_a" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "_1kot" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "_ma_" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "_1_" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::INT );
    REQUIRE( token.str == "1" );
    REQUIRE( token.value.integer == 1 );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::IDN );
    REQUIRE( token.str == "ale" );
  }

  SECTION( "Integers" ) {
    SECTION( "positive" ) {
      iss.str("123456");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::INT );
      REQUIRE( token.str == "123456" );
      REQUIRE( token.value.integer == 123456 );
    }

    SECTION( "negative" ) {
      iss.str("-7546321");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::INT );
      REQUIRE( token.str == "-7546321" );
      REQUIRE( token.value.integer == -7546321 );
    }

    SECTION( "zero" ) {
      iss.str("0");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::INT );
      REQUIRE( token.str == "0" );
      REQUIRE( token.value.integer == 0 );
    }
  }

  SECTION( "FUNCTIONS AND BOOLEAN" ) {
    iss.str("func draw move return True False");

    SECTION( "func" ) {
      iss.str("func");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::FUN );
      REQUIRE( token.str == "func" );
    }

    SECTION( "draw" ) {
      iss.str("draw");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::BASIC_FUNC );
      REQUIRE( token.str == "draw" );
      REQUIRE( token.value.basicType == BasicFuncOpType::DRAW);
    }

    SECTION( "move" ) {
      iss.str("move");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::BASIC_FUNC );
      REQUIRE( token.str == "move" );
      REQUIRE( token.value.basicType == BasicFuncOpType::MOVE );
    }

    SECTION( "return" ) {
      iss.str("return");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::RET );
      REQUIRE( token.str == "return" );
    }

    SECTION( "True" ) {
      iss.str("True");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::BLN );
      REQUIRE( token.str == "True" );
      REQUIRE( token.value.boolean == true );
    }

    SECTION( "False" ) {
      iss.str("False");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::BLN );
      REQUIRE( token.str == "False" );
      REQUIRE( token.value.boolean == false );
    }
  }

  SECTION( "MATHEMATICA OPERATIONS" ) {
    SECTION( "greater than" ) {
      iss.str(">");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::REL_OP );
      REQUIRE( token.str == ">" );
      REQUIRE( token.value.relType == RelOpType::GT );
    }

    SECTION( "greater or equal" ) {
      iss.str(">=");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::REL_OP );
      REQUIRE( token.str == ">=" );
      REQUIRE( token.value.relType == RelOpType::GE );
    }

    SECTION( "less than" ) {
      iss.str("<");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::REL_OP );
      REQUIRE( token.str == "<" );
      REQUIRE( token.value.relType == RelOpType::LT );
    }

    SECTION( "less or equal" ) {
      iss.str("<=");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::REL_OP );
      REQUIRE( token.str == "<=" );
      REQUIRE( token.value.relType == RelOpType::LE );
    }

    SECTION( "and" ) {
      iss.str("&&");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::AND );
      REQUIRE( token.str == "&&" );
    }

    SECTION( "or" ) {
      iss.str("||");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::OR );
      REQUIRE( token.str == "||" );
    }

    SECTION( "assign" ) {
      iss.str("=");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::ASSIGN );
      REQUIRE( token.str == "=" );
    }

    SECTION( "equal" ) {
      iss.str("==");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::EQUAL_OP );
      REQUIRE( token.str == "==" );
      REQUIRE( token.value.eqType == EqualOpType::EQU );
    }

    SECTION( "not" ) {
      iss.str("!");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::NOT );
      REQUIRE( token.str == "!" );
    }

    SECTION( "not equal" ) {
      iss.str("!=");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::EQUAL_OP );
      REQUIRE( token.str == "!=" );
      REQUIRE( token.value.eqType == EqualOpType::NEQ );
    }

    SECTION( "add" ) {
      iss.str("+");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::ADD_OP );
      REQUIRE( token.str == "+" );
      REQUIRE( token.value.addType == AddOpType::ADD );
    }

    SECTION( "subtract" ) {
      iss.str("-");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::ADD_OP );
      REQUIRE( token.str == "-" );
      REQUIRE( token.value.addType == AddOpType::SUB );
    }

    SECTION( "multiply" ) {
      iss.str("*");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::MUL_OP );
      REQUIRE( token.str == "*" );
      REQUIRE( token.value.mulType == MulOpType::MUL );
    }

    SECTION( "divide" ) {
      iss.str("/");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::MUL_OP );
      REQUIRE( token.str == "/" );
      REQUIRE( token.value.mulType == MulOpType::DIV );
    }

    SECTION( "modulo" ) {
      iss.str("%");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::MUL_OP );
      REQUIRE( token.str == "%" );
      REQUIRE( token.value.mulType == MulOpType::MOD );
    }
  }

  SECTION( "other" ) {
    SECTION( "set brackets" ) {
      iss.str("{}");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::SET_BRACK_OP );
      REQUIRE( token.str == "{" );

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::SET_BRACK_CL );
      REQUIRE( token.str == "}" );
    }

    SECTION( "round brackets" ) {
      iss.str("()");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::RND_BRACK_OP );
      REQUIRE( token.str == "(" );

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::RND_BRACK_CL );
      REQUIRE( token.str == ")" );
    }

    SECTION( "comma" ) {
      iss.str(",");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::CMM );
      REQUIRE( token.str == "," );
    }

    SECTION( "semicolon" ) {
      iss.str(";");

      token = lexer.getNextToken();
      REQUIRE( token.type == Token::Type::SCL );
      REQUIRE( token.str == ";" );
    }
  }

  SECTION( "geometric primitives" ){
      SECTION( "circle" ) {
        iss.str("circle");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::PRIMITIVE_FIGURE );
        REQUIRE( token.str == "circle" );
        REQUIRE( token.value.primitiveType == PrimitiveType::CIRCLE );
      }

      SECTION( "quadrangle" ) {
        iss.str("quadrangle");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::PRIMITIVE_FIGURE );
        REQUIRE( token.str == "quadrangle" );
        REQUIRE( token.value.primitiveType == PrimitiveType::QUADRANGLE );
      }

      SECTION( "line" ) {
        iss.str("line");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::PRIMITIVE_FIGURE );
        REQUIRE( token.str == "line" );
        REQUIRE( token.value.primitiveType == PrimitiveType::LINE );
      }

      SECTION( "point" ) {
        iss.str("point");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::PRIMITIVE_FIGURE );
        REQUIRE( token.str == "point" );
        REQUIRE( token.value.primitiveType == PrimitiveType::POINT );
      }
  }

  SECTION( "colors" ){
      SECTION( "black" ) {
        iss.str("black");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::COLOR_TYPE );
        REQUIRE( token.str == "black" );
        REQUIRE( token.value.colorType == ColorType::BLACK );
      }

      SECTION( "red" ) {
        iss.str("red");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::COLOR_TYPE );
        REQUIRE( token.str == "red" );
        REQUIRE( token.value.colorType == ColorType::RED );
      }

      SECTION( "blue" ) {
        iss.str("blue");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::COLOR_TYPE );
        REQUIRE( token.str == "blue" );
        REQUIRE( token.value.colorType == ColorType::BLUE );
      }

      SECTION( "green" ) {
        iss.str("green");

        token = lexer.getNextToken();
        REQUIRE( token.type == Token::Type::COLOR_TYPE );
        REQUIRE( token.str == "green" );
        REQUIRE( token.value.colorType == ColorType::GREEN );
      }
  }



  SECTION( "invalid symbols" ) {


    iss.str("$ @ # ^ ' \" | & \\ ? ` ~ : [ ] .");

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "$" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "@" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "#" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "^" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "'" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "\"" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "|" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "&" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "\\" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "?" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "`" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "~" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == ":" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "[" );

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == "]");

    token = lexer.getNextToken();
    REQUIRE( token.type == Token::Type::UNKNOWN );
    REQUIRE( token.str == ".");

  }
}

TEST_CASE( "TRACKING POSITION" ) {
  std::istringstream iss("abcde 12 asd\n"
                         "cde fgh jkajnsdkjasn");

  Lexer lexer(iss);
  Token token = Token::Unknown();

  token = lexer.getNextToken();
  REQUIRE( token.pos.line == 1 );
  REQUIRE( token.pos.column == 0 );

  token = lexer.getNextToken();
  REQUIRE( token.pos.line == 1 );
  REQUIRE( token.pos.column == 6 );

  token = lexer.getNextToken();
  REQUIRE( token.pos.line == 1 );
  REQUIRE( token.pos.column == 9 );

  token = lexer.getNextToken();
  REQUIRE( token.pos.line == 2 );
  REQUIRE( token.pos.column == 0 );

  token = lexer.getNextToken();
  REQUIRE( token.pos.line == 2 );
  REQUIRE( token.pos.column == 4 );

  token = lexer.getNextToken();
  REQUIRE( token.pos.line == 2 );
  REQUIRE( token.pos.column == 8 );
}

TEST_CASE( "EXCEPTION - IDENTIFIER TOO LONG" ) {
  std::string s(BOTVINA_MAX_IDENTIFIER_LENGTH + 1, 'p');
  std::istringstream iss(s);

  Lexer lexer(iss);

  REQUIRE_THROWS( lexer.getNextToken() );
}
