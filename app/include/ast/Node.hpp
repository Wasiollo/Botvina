#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <memory>

namespace ast {

class Node {
public:
  virtual ~Node() {
  }

};

struct NodeObject {
  enum Type {
    ASSIGN,
    OR, AND,
    EQ, REL,
    ADD,
    MUL,
    ID,
    INT, BOOL,
    CIRCLE,
    IF_STATEMENT,
    LOOP_STATEMENT,
    FUNCTION_LITERAL,
    FUNCTION_APPLY,
    QUADRANGLE,
    LINE,
    POINT,
    EXIT,
    CLEAR
  } type;

  std::unique_ptr<Node> object;

  NodeObject()
    : type(Type::NONE) {
  }

  NodeObject(Node* ptr, Type t)
    : type(t),
      object(ptr) {
  }

  operator bool() const {
    return (bool)object;
  }
};
} //ast


#endif // NODE_HPP
