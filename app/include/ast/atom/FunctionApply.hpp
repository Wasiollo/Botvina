#ifndef FUNCTIONAPPLY_HPP
#define FUNCTIONAPPLY_HPP

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct FunctionApply : public Node {
  std::string name;
  std::vector<NodeObject> exprs;

  FunctionApply(const std::string& n)
    : name(n) {
  }
};

} //ast

#endif // FUNCTIONAPPLY_HPP
