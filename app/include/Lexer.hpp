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
  explicit Lexer(std::istream& in = std::cin);

  Token getNextToken();
  Token getCurrentToken() const;

private:
  Input input;

  char lastChar;
  std::string tokenBuffer;

  Position lexerPosition;
  Token currentToken;

  //Methods
  void ignoreWhiteSpace();

  Token tryIdentifier();
  Token tryInteger();
  Token tryKeyword();
  Token tryOperator();
  Token tryMulOp();
  Token tryAddOp();
  Token tryEqOp();
  Token tryLogicalOp();
  Token tryRelOp();
  Token tryOther();
  Token tryBoolean();
  Token tryFunc();
  Token tryReturn();
  Token tryDraw();
  Token tryMove();
  Token tryIf();
  Token tryWhen();
  Token tryClear();
  Token tryExit();
  Token tryCircle();
  Token tryQuadrangle();
  Token tryLine();
  Token tryPoint();
  Token tryBlack();
  Token tryRed();
  Token tryBlue();
  Token tryGreen();

  void processNextChar();
  void saveNextChar();
};


} //botvina

#endif // LEXER_HPP
