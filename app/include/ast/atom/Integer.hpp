#ifndef INTEGER_HPP
#define INTEGER_HPP

#include "ast/Node.hpp"

namespace ast {

struct Integer : public Node {
  int value;

  Integer(int v = 0)
    : value(v) {
  }
};

} //ast

#endif // INTEGER_HPP
