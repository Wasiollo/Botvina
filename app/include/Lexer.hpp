#ifndef LEXER_HPP
#define LEXER_HPP

#include "Input.hpp"
#include "Token.hpp"

#ifndef BOTVINA_MAX_IDENTIFIER_LENGTH
#define BOTVINA_MAX_IDENTIFIER_LENGTH 64
#endif // BOTVINA_MAX_IDENTIFIER_LENGTH

namespace botvina {

class Lexer {
public:
  Lexer(std::istream& in = std::cin);

  Token getToken();
  Token getCurrentToken() const;

private:
  Input input_;

  char lastChar;
  std::string tokenBuffer;

  Position lexerPosition;
  Token currentToken;

private:
  void ignoreWhiteSpace();

  Token tryIdentifier();
  Token tryInteger();

  Token tryOperator();
  Token tryMulOp();
  Token tryAddOp();
  Token tryEqOp();
  Token tryLogicalOp();
  Token tryRelOp();

  Token tryOther();

  Token tryKeyword();
  Token tryBoolean();
  Token tryFunc();
  Token tryReturn();
  Token tryDraw();
  Token tryMove();


  void processNextChar();
  void saveNextChar();
};


} //botvina

#endif // LEXER_HPP
