#ifndef EQ_STATEMENT_H
#define EQ_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct EqStatement : public Node {
    enum Type {
      EQ,
        NEQ
    } type;
  std::vector<NodeObject> ops;

  EqStatement(Type t)
      : type(t){
  }
};

} //ast


#endif // EQ_STATEMENT_H
