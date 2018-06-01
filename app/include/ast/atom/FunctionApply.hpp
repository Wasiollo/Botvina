#ifndef FUNCTIONAPPLY_HPP
#define FUNCTIONAPPLY_HPP

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct FuncApply : public Node {
  std::string name;
  std::vector<NodeObject> exprs;

  FuncApply(const std::string& n)
    : name(n) {
  }
};

} //ast

#endif // FUNCTIONAPPLY_HPP
