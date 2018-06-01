#ifndef POINT_H
#define POINT_H

#include "ast/Node.hpp"
#include "ast/color.hpp"

#include <vector>
#include <string>

namespace ast {

struct Point : public Node {
    Color color;
    NodeObject x;
    NodeObject y;

  Point(Color c): color(c){
  }
};

} //ast

#endif // POINT_H
