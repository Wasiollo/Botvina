#ifndef QUADRANGLE_H
#define QUADRANGLE_H


#include "ast/Node.hpp"
#include "ast/color.hpp"

#include <vector>
#include <string>

namespace ast {

struct Quadrangle : public Node {
    Color color;
    int size;
    NodeObject origin_x;
    NodeObject origin_y;

  Quadrangle(int s, Color c): size(s), color(c){
  }
};

} //ast

#endif // QUADRANGLE_H
