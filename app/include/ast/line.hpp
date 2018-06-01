#ifndef LINE_H
#define LINE_H

#include "ast/Node.hpp"
#include "ast/color.hpp"

#include <vector>
#include <string>

namespace ast {

struct Line : public Node {
    Color color;
    NodeObject origin_x;
    NodeObject origin_y;
    NodeObject end_x;
    NodeObject end_y;

  Line(){
  }
};

} //ast

#endif // LINE_H
