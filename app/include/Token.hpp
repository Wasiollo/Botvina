#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

namespace botvina {

struct Position {
  Position(int l = 0, int c = 0)
    : line(l),
      col(c) {
  }

  int line;
  int col;
};

enum BasicFuncOpType {
    MOVE,
    DRAW
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

enum EqOpType {
  EQU,
  NEQ
};

struct Token {
  enum class Type {
    INT, IDN, BLN,
    FUN, RET,
    MOVE_OP,
    DRAW_OP,
    SET_BRACK_OP, SET_BRACK_CL,
    RND_OP, RND_CL,
    SCL, DOT, CMM,
    MUL_OP,
    ADD_OP,
    REL_OP,
    EQ_OP,
    NOT, AND, OR,
    ASN,
    END_OF_SEQ,
    UNKNOWN
  } type;

  std::string str;

  Position pos;

  union {
    int integer;
    bool boolean;

    BasicFuncOpType basicType;
    MulOpType mulType;
    AddOpType addType;
    RelOpType relType;
    EqOpType eqType;
  } value;

  Token(Type type, const std::string& s = "")
    : type(type),
      str(s) {
  }

  void setPos(const Position& p) {
    pos = p;
  }

  void setPos(int line, int col) {
    pos.line = line;
    pos.col = col;
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
