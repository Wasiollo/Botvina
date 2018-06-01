#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include "ast/Node.hpp"

#include <string>

namespace ast {

struct Identifier : public Node {
  std::string str;

  Identifier(const std::string& s)
    : str(s) {
  }
};

} //ast

#endif // IDENTIFIER_HPP
