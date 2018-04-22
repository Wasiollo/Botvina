#include "include/Lexer.hpp"

#include <cctype>
#include <cstdlib>

#include <stdexcept>

using namespace botvina;

using Type = Token::Type;

Lexer::Lexer(std::istream& in)
  : input_(in),
    lastChar(' '),
    lexerPosition(1, -1),
    currentToken(Token::Unknown()) {
}

void Lexer::processNextChar() {
  if(lastChar == '\n') {
    lexerPosition.col = 0;
    ++lexerPosition.line;
  }

  else
    ++lexerPosition.col;

  lastChar = input_.getNextChar();
}

void Lexer::saveNextChar() {
  tokenBuffer += lastChar;
  processNextChar();
}

Token Lexer::getToken() {
  Token ret = Token::Unknown();

  ignoreWhiteSpace();
  Position pos = lexerPosition;

  if( (ret = tryIdentifier()).isValid() )
    ;
  else if( (ret = tryInteger()).isValid() )
    ;
  else if( (ret = tryOperator()).isValid() )
    ;
  else if( (ret = tryOther()).isValid() )
    ;
  else {
    //invalid symbol
    saveNextChar();
    ret.str = tokenBuffer;
  }

  ret.setPos(pos);
  tokenBuffer.clear();
  return currentToken = ret;
}

Token Lexer::getCurrentToken() const {
  return currentToken;
}

void Lexer::ignoreWhiteSpace() {
  while(std::isspace(lastChar))
    processNextChar();
}

Token Lexer::tryIdentifier() {
  Token ret = Token::Unknown();

  if(std::isalpha(lastChar) || lastChar == '_') {
    int length = 1;
    saveNextChar();

    while(std::isalnum(lastChar) || lastChar == '_') {
      saveNextChar();

      if(++length > BOTVINA_MAX_IDENTIFIER_LENGTH) {
        throw std::runtime_error("Maximum identifier length exceeded");
      }
    }
  }
  else {
    //identifier check failed
    return ret;
  }

  if( (ret = tryKeyword()).isValid() ) {
    return ret;
  }

  //identifier
  ret.type = Type::IDN;
  ret.str = tokenBuffer;

  return ret;
}

Token Lexer::tryInteger() {
  Token ret = Token::Unknown();

  if(lastChar == '0') {
    saveNextChar();

    ret.type = Type::INT;
    ret.str = tokenBuffer;
    ret.value.integer = 0;
  }
  else if(lastChar == '-') {
    char test = input_.peekNextChar();

    if(test != '0' && std::isdigit(test)) {
      saveNextChar();

      while(std::isdigit(lastChar)) {
        saveNextChar();
      }

      ret.type = Type::INT;
      ret.str = tokenBuffer;
      ret.value.integer = atoi(tokenBuffer.c_str());
    }
  }
  else if(std::isdigit(lastChar)) {
    saveNextChar();

    while(std::isdigit(lastChar)) {
      saveNextChar();
    }

    ret.type = Type::INT;
    ret.str = tokenBuffer;
    ret.value.integer = atoi(tokenBuffer.c_str());
  }

  return ret;
}

Token Lexer::tryOperator() {
  Token ret = Token::Unknown();

  if( (ret = tryRelOp()).isValid() )
      ;
  else if( (ret = tryMulOp()).isValid() )
    ;
  else if( (ret = tryAddOp()).isValid() )
    ;
  else if( (ret = tryEqOp()).isValid() )
    ;
  else if( (ret = tryLogicalOp()).isValid() )
    ;

  return ret;
}

Token Lexer::tryRelOp() {
Token ret = Token::Unknown();

  if(lastChar == '<') {
    char test = input_.peekNextChar();

    if(test == '=') {
      saveNextChar();
      saveNextChar();

      ret.type = Type::REL_OP;
      ret.str = tokenBuffer;
      ret.value.relType = RelOpType::LE;
    }
    else {
      saveNextChar();

      ret.type = Type::REL_OP;
      ret.str = tokenBuffer;
      ret.value.relType = RelOpType::LT;
    }
  }
  else if(lastChar == '>') {
    char test = input_.peekNextChar();

    if(test == '=') {
      saveNextChar();
      saveNextChar();

      ret.type = Type::REL_OP;
      ret.str = tokenBuffer;
      ret.value.relType = RelOpType::GE;
    }
    else {
      saveNextChar();

      ret.type = Type::REL_OP;
      ret.str = tokenBuffer;
      ret.value.relType = RelOpType::GT;
    }
  }

  return ret;
}



Token Lexer::tryMulOp() {
  Token ret = Token::Unknown();

  if(lastChar == '*') {
    saveNextChar();

    ret.type = Type::MUL_OP;
    ret.str = tokenBuffer;
    ret.value.mulType = MulOpType::MUL;
  }
  else if(lastChar == '/') {
    saveNextChar();

    ret.type = Type::MUL_OP;
    ret.str = tokenBuffer;
    ret.value.mulType = MulOpType::DIV;
  }
  else if(lastChar == '%') {
    saveNextChar();

    ret.type = Type::MUL_OP;
    ret.str = tokenBuffer;
    ret.value.mulType = MulOpType::MOD;
  }

  return ret;
}

Token Lexer::tryAddOp() {
  Token ret = Token::Unknown();

  if(lastChar == '+') {
    saveNextChar();

    ret.type = Type::ADD_OP;
    ret.str = tokenBuffer;
    ret.value.addType = AddOpType::ADD;
  }
  else if(lastChar == '-') {
    saveNextChar();

    ret.type = Type::ADD_OP;
    ret.str = tokenBuffer;
    ret.value.addType = AddOpType::SUB;
  }

  return ret;
}

Token Lexer::tryEqOp() {
  Token ret = Token::Unknown();

  if(lastChar == '!') {
    char test = input_.peekNextChar();

    if(test == '=') {
      saveNextChar();
      saveNextChar();

      ret.type = Type::EQ_OP;
      ret.str = tokenBuffer;
      ret.value.eqType = EqOpType::NEQ;
    }
    else {
      saveNextChar();

      ret.type = Type::NOT;
      ret.str = tokenBuffer;
    }
  }
  else if(lastChar == '=') {
    char test = input_.peekNextChar();

    if(test == '=') {
      saveNextChar();
      saveNextChar();

      ret.type = Type::EQ_OP;
      ret.str = tokenBuffer;
      ret.value.eqType = EqOpType::EQU;
    }
    else {
      saveNextChar();

      ret.type = Type::ASN;
      ret.str = tokenBuffer;
    }
  }

  return ret;
}

Token Lexer::tryLogicalOp() {
  Token ret = Token::Unknown();

  if(lastChar == '&') {
    char test = input_.peekNextChar();

    if(test == '&') {
      saveNextChar();
      saveNextChar();

      ret.type = Type::AND;
      ret.str = tokenBuffer;
    }
  }
  else if(lastChar == '|') {
    char test = input_.peekNextChar();

    if(test == '|') {
      saveNextChar();
      saveNextChar();

      ret.type = Type::OR;
      ret.str = tokenBuffer;
    }
  }

  return ret;
}

Token Lexer::tryOther() {
  Token ret = Token::Unknown();

  if(lastChar == '{') {
    saveNextChar();

    ret.type = Type::SET_BRACK_OP;
    ret.str = tokenBuffer;
  }
  else if(lastChar == '}') {
    saveNextChar();

    ret.type = Type::SET_BRACK_CL;
    ret.str = tokenBuffer;
  }
  else if(lastChar == '(') {
    saveNextChar();

    ret.type = Type::RND_OP;
    ret.str = tokenBuffer;
  }
  else if(lastChar == ')') {
    saveNextChar();

    ret.type = Type::RND_CL;
    ret.str = tokenBuffer;
  }
  else if(lastChar == '.') {
    saveNextChar();

    ret.type = Type::DOT;
    ret.str = tokenBuffer;
  }
  else if(lastChar == ',') {
    saveNextChar();

    ret.type = Type::CMM;
    ret.str = tokenBuffer;
  }
  else if(lastChar == ';') {
    saveNextChar();

    ret.type = Type::SCL;
    ret.str = tokenBuffer;
  }

  return ret;
}

Token Lexer::tryKeyword() {
  Token ret = Token::Unknown();

  if( (ret = tryBoolean()).isValid() ) {
    return ret;
  }

  if( (ret = tryFunc()).isValid() ) {
    return ret;
  }

  if( (ret = tryReturn()).isValid() ) {
    return ret;
  }

  if( (ret = tryDraw()).isValid()) {
      return ret;
  }

  if( (ret = tryMove()).isValid()) {
      return ret;
  }

  return ret;
}

Token Lexer::tryBoolean() {
  Token ret = Token::Unknown();

  if(tokenBuffer == "False") {
    ret.type = Type::BLN;
    ret.str = tokenBuffer;
    ret.value.boolean = false;
  }
  else if(tokenBuffer == "True") {
    ret.type = Type::BLN;
    ret.str = tokenBuffer;
    ret.value.boolean = true;
  }

  return ret;
}

Token Lexer::tryFunc() {
  Token ret = Token::Unknown();

  if(tokenBuffer == "func") {
    ret.type = Type::FUN;
    ret.str = tokenBuffer;
  }

  return ret;
}

Token Lexer::tryReturn() {
  Token ret = Token::Unknown();

  if(tokenBuffer == "return") {
    ret.type = Type::RET;
    ret.str = tokenBuffer;
  }

  return ret;
}

Token Lexer::tryDraw() {
    Token ret = Token::Unknown();

    if(tokenBuffer == "draw") {
        ret.type = Type::DRAW_OP;
        ret.str = tokenBuffer;
        ret.value.basicType = BasicFuncOpType::DRAW;
    }
    return ret;
}

Token Lexer::tryMove() {
    Token ret = Token::Unknown();

    if(tokenBuffer == "move") {
        ret.type = Type::MOVE_OP;
        ret.str = tokenBuffer;
        ret.value.basicType = BasicFuncOpType::MOVE;
    }
    return ret;
}
