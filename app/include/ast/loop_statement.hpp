#ifndef LOOP_STATEMENT_H
#define LOOP_STATEMENT_H

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

#endif // LOOP_STATEMENT_H
