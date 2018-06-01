#ifndef FUNCTIONLITERAL_HPP
#define FUNCTIONLITERAL_HPP

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct FunctionLiteral : public Node {
  std::string name;
  std::vector<std::string> params;
  std::vector<NodeObject> ops;
  NodeObject ret;

  FunctionLiteral(const std::string n, const std::vector<std::string>& p)
    : name(n), params(p) {
  }
};

} //ast

#endif // FUNCTIONLITERAL_HPP
