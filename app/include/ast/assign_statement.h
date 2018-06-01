#ifndef ASSIGN_STATEMENT_H
#define ASSIGN_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct AssignStatement : public Node {
  std::string id;
  std::vector<NodeObject> ops;

  AssignStatement(std::string id): id(id){
  }
};

} //ast

#endif // ASSIGN_STATEMENT_H
