#ifndef OR_STATEMENT_H
#define OR_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct LoopStatement : public Node {
    NodeObject condition;
    std:vector<NodeObject> operations;

  LoopStatement(){
  }
};

} //ast

#endif // OR_STATEMENT_H
