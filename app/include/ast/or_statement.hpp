#ifndef OR_STATEMENT_H
#define OR_STATEMENT_H

#include "ast/Node.hpp"

#include <vector>
#include <string>

namespace ast {

struct OrStatement : public Node {
    std::vector<NodeObject> operands;
};

} //ast

#endif // OR_STATEMENT_H
