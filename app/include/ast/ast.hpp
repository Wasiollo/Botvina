#ifndef AST_HPP
#define AST_HPP


#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct Ast : public Node {
  NodeObject root;

  Ast(Node* n, NodeObject::Type t): root(n,t){

  }
};

} //ast
#endif // AST_HPP
