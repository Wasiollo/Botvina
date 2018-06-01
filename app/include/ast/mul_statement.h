#ifndef MUL_STATEMENT_H
#define MUL_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

enum MulType {
  MUL,DIV
};

namespace ast {

struct MulStatement : public Node {
  std::vector<MulType> mulOps;
  std::vector<NodeObject> operands;
  MulStatement(const std::vector<MulType>& ops) : mulOps(ops) {}

};

} //ast

#endif // MUL_STATEMENT_H
