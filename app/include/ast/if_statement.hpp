#ifndef IF_STATEMENT_H
#define IF_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct IfStatement : public Node {
    NodeObject condition;
  std::vector<NodeObject> ops;

  IfStatement(){
  }
};

} //ast

#endif // IF_STATEMENT_H
