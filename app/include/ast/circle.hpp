#ifndef CIRCLE_H
#define CIRCLE_H

#include "ast/Node.hpp"
#include "ast/color.hpp"

#include <vector>
#include <string>

namespace ast {

struct Circle : public Node {
  int size;
  Color color;
  NodeObject x;
  NodeObject y;

  Circle(int s, Color c): size(s), color(c){
  }
};

} //ast

#endif // CIRCLE_H
