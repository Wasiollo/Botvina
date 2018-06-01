#ifndef REL_HPP
#define REL_HPP

#include "ast/Node.hpp"

namespace ast {

struct Rel : public Node {
  enum Type {
    LT, LE,
    GT, GE
  } type;
  NodeObject left;
  NodeObject right;

  Rel(Type t)
    : type(t) {
  }
};

} //ast


#endif // REL_HPP
