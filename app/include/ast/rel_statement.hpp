#ifndef REL_HPP
#define REL_HPP

#include "ast/Node.hpp"

namespace ast {

struct RelStatement : public Node {
  enum Type {
    LT, LE,
    GT, GE
  } type;
  NodeObject left;
  NodeObject right;

  RelStatement(Type t)
    : type(t) {
  }
};

} //ast


#endif // REL_HPP
