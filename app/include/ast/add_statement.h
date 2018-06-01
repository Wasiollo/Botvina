#ifndef ADD_STATEMENT_H
#define ADD_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

enum AddType {
  ADD,SUB
};

namespace ast {

struct AddStatement : public Node {
  std::vector<AddType> addOps;
  std::vector<NodeObject> ops;

  AddStatement(const std::vector<AddType>& ops) : addOps(ops) {}

};

} //ast

#endif // ADD_STATEMENT_H
