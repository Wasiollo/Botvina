#ifndef AND_STATEMENT_H
#define AND_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct AndStatement : public Node {
  std::vector<NodeObject> ops;

  AndStatement(){
  }
};

} //ast

#endif // AND_STATEMENT_H
