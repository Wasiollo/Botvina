#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

namespace botvina {

struct Position {
  Position(int l = 0, int c = 0)
    : line(l),
      column(c) {
  }

  int line;
  int column;
};

enum BasicFuncOpType {
    MOVE,
    DRAW,
    IF,
    WHEN,
    CLEAR,
    EXIT
};

enum PrimitiveType {
    CIRCLE, LINE,
    QUADRANGLE, POINT
};

enum ColorType {
    BLACK, RED,
    BLUE, GREEN
};

enum AddOpType {
  ADD,
  SUB
};

enum MulOpType {
    MUL,
    DIV,
    MOD
};


enum RelOpType {
  LT, LE,
  GT, GE
};

enum EqualOpType {
  EQU,
  NEQ
};

struct Token {
  enum class Type {
    INT, IDN, BLN,
    FUN, RET,
    BASIC_FUNC,
    PRIMITIVE_FIGURE,
    COLOR_TYPE,
    SET_BRACK_OP, SET_BRACK_CL,
    RND_BRACK_OP, RND_BRACK_CL,
    SCL, CMM,
    MUL_OP,
    ADD_OP,
    REL_OP,
    EQUAL_OP,
    NOT, AND, OR,
    ASSIGN,
    UNKNOWN
  } type;

  std::string str;

  Position pos;

  union {
    int integer;
    bool boolean;

    ColorType colorType;
    PrimitiveType primitiveType;
    BasicFuncOpType basicType;
    MulOpType mulType;
    AddOpType addType;
    RelOpType relType;
    EqualOpType eqType;
  } value;

  Token(Type type, const std::string& s = "")
    : type(type),
      str(s) {
  }

  void setPos(const Position& p) {
    pos = p;
  }

  void setPos(int line, int column) {
    pos.line = line;
    pos.column = column;
  }

  bool isValid() const {
    return type != Type::UNKNOWN;
  }

  operator bool() const {
    return type != Type::UNKNOWN;
  }

  static Token Unknown() {
    return Token(Type::UNKNOWN);
  }
};

} //botvina


#endif // TOKEN_HPP
