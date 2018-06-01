#ifndef FUNCTIONLITERAL_HPP
#define FUNCTIONLITERAL_HPP

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct FuncLiteral : public Node {
  std::string name;
  std::vector<std::string> params;
  std::vector<NodeObject> ops;
  NodeObject ret;

  FuncLiteral(const std::vector<std::string>& p)
    : params(p) {
  }
};

} //ast

#endif // FUNCTIONLITERAL_HPP
