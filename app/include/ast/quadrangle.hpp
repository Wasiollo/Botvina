#ifndef QUADRANGLE_H
#define QUADRANGLE_H


#include "ast/Node.hpp"
#include "ast/color.hpp"

#include <vector>
#include <string>

namespace ast {

struct Quadrangle : public Node {
    Color color;
    NodeObject origin_x;
    NodeObject origin_y;
    int size;

  Quadrangle(){
  }
};

} //ast

#endif // QUADRANGLE_H
