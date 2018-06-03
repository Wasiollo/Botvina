#include "ast/ast.hpp"
#include "anltr_generated/botvinaBaseListener.h"
#include "ast/Node.hpp"
#include "ast/assign_statement.h"
#include "ast/if_statement.hpp"
#include "ast/loop_statement.hpp"
#include "ast/atom/FunctionLiteral.hpp"
#include "ast/atom/FunctionApply.hpp"
#include "ast/atom/Identifier.hpp"
#include "ast/atom/Integer.hpp"
#include "ast/circle.hpp"
#include "ast/line.hpp"
#include "ast/quadrangle.hpp"
#include "ast/point.hpp"
#include "ast/color.hpp"
#include "ast/add_statement.h"
#include "ast/mul_statement.h"
#include "ast/eq_statement.hpp"
#include "ast/or_statement.hpp"
#include "ast/and_statement.h"
#include "ast/rel_statement.hpp"
#include "algorithm"

using namespace ast;

std::string Ast::toString() const {
    std::string ret;

    struct NodeBox {
        Node* node;
        NodeObject::Type type;

        NodeBox(Node* n, NodeObject::Type t) : node(n), type(t) {}
    };

    std::stack<NodeBox> dfs;
    dfs.emplace(root.object.get(), root.type);

    while(!dfs.empty()) {
        NodeBox box = dfs.top(); dfs.pop();

        switch(box.type) {
            case NodeObject::ASSIGN:
            {
                AssignStatement* ptr = dynamic_cast<AssignStatement*>(box.node);
                ret += "ASSIGN[";
                ret += ptr->id;
                ret += "]( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->r_val.object.get(), ptr->r_val.type);
            }
            break;

            case NodeObject::OR:
            {
                OrStatement* ptr = dynamic_cast<OrStatement*>(box.node);
                ret += "OR( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->operands.rbegin(),
                          ptr->operands.rend(),
                          [&dfs](const NodeObject& nobj) {
                              dfs.emplace(nobj.object.get(), nobj.type);
                          });

            }
            break;
            case NodeObject::AND:
            {
                AndStatement* ptr = dynamic_cast<AndStatement*>(box.node);
                ret += "AND( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->operands.rbegin(),
                          ptr->operands.rend(),
                          [&dfs](const NodeObject& nobj) {
                              dfs.emplace(nobj.object.get(), nobj.type);
                          });

            }
            break;
            case NodeObject::EQ:
            {
                EqStatement* ptr = dynamic_cast<EqStatement*>(box.node);
                ret+= "EQ( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->right.object.get(), ptr->right.type);
                dfs.emplace(ptr->left.object.get(), ptr->left.type);
            }
            break;
            case NodeObject::REL:
            {
                RelStatement* ptr = dynamic_cast<RelStatement*>(box.node);
                ret+= "REL( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->right.object.get(), ptr->right.type);
                dfs.emplace(ptr->left.object.get(), ptr->left.type);
            }
            break;
            case NodeObject::ADD:
            {
                AddStatement* ptr = dynamic_cast<AddStatement*>(box.node);
                ret += "ADD( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->operands.rbegin(),
                  ptr->operands.rend(),
                  [&dfs](const NodeObject& nobj) {
                      dfs.emplace(nobj.object.get(), nobj.type);
                  });

            }
            break;
            case NodeObject::MUL:
            {
                MulStatement* ptr = dynamic_cast<MulStatement*>(box.node);
                ret += "MUL( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->operands.rbegin(),
                  ptr->operands.rend(),
                  [&dfs](const NodeObject& nobj) {
                      dfs.emplace(nobj.object.get(), nobj.type);
                  });

            }
            break;
            case NodeObject::ID:
            {
                Identifier* ptr = dynamic_cast<Identifier*>(box.node);
                ret += "ID[" + ptr->str + "] ";
            }
            break;
            case NodeObject::INT:
            {
                Integer* ptr = dynamic_cast<Integer*>(box.node);
                ret += "INT[" + std::to_string(ptr->value) + "] ";
            }
            break;
            case NodeObject::IF_STATEMENT:
            {
                IfStatement* ptr = dynamic_cast<IfStatement*>(box.node);
                ret +="IF( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->ops.rbegin(),
                  ptr->ops.rend(),
                  [&dfs](const NodeObject& nobj) {
                      dfs.emplace(nobj.object.get(), nobj.type);
                  });
                dfs.emplace(ptr->condition.object.get(), ptr->condition.type);

            }
            break;
            case NodeObject::LOOP_STATEMENT:
            {
                LoopStatement* ptr = dynamic_cast<LoopStatement*>(box.node);
                ret +="LOOP( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->ops.rbegin(),
                  ptr->ops.rend(),
                  [&dfs](const NodeObject& nobj) {
                      dfs.emplace(nobj.object.get(), nobj.type);
                  });
                dfs.emplace(ptr->condition.object.get(), ptr->condition.type);

            }
            break;
            case NodeObject::FUNCTION_LITERAL:
            {
                FunctionLiteral* ptr = dynamic_cast<FunctionLiteral*>(box.node);
                ret+="FUN_LITERAL["+ptr->name+"]( ";
                dfs.emplace(nullptr, NodeObject::NONE);

                if (ptr->ret){
                    dfs.emplace(ptr->ret.object.get(), ptr->ret.type);
                }
                std::for_each(ptr->ops.rbegin(),
                  ptr->ops.rend(),
                  [&dfs](const NodeObject& nobj) {
                      dfs.emplace(nobj.object.get(), nobj.type);
                  });
            }
            break;
            case NodeObject::FUNCTION_APPLY:
            {
                FunctionApply* ptr = dynamic_cast<FunctionApply*>(box.node);
                ret+="FUN_APPLY["+ptr->name+"]( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                std::for_each(ptr->exprs.rbegin(),
                  ptr->exprs.rend(),
                  [&dfs](const NodeObject& nobj) {
                      dfs.emplace(nobj.object.get(), nobj.type);
                  });
            }
            break;
            case NodeObject::CIRCLE:
            {
                Circle* ptr = dynamic_cast<Circle*>(box.node);
                ret+="CIRCLE["+std::to_string(ptr->size)+"]( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->y.object.get(), ptr->y.type);
                dfs.emplace(ptr->x.object.get(), ptr->x.type);
            }
            break;
            case NodeObject::QUADRANGLE:
            {
                Quadrangle* ptr = dynamic_cast<Quadrangle*>(box.node);
                ret+="QUADRANGLE["+std::to_string(ptr->size)+"]( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->y.object.get(), ptr->y.type);
                dfs.emplace(ptr->x.object.get(), ptr->x.type);
            }
            break;
            case NodeObject::POINT:
            {
                Point* ptr = dynamic_cast<Point*>(box.node);
                ret+="POINT( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->y.object.get(), ptr->y.type);
                dfs.emplace(ptr->x.object.get(), ptr->x.type);
            }
            break;
            case NodeObject::LINE:
            {
                Line* ptr = dynamic_cast<Line*>(box.node);
                ret+="Line( ";
                dfs.emplace(nullptr, NodeObject::NONE);
                dfs.emplace(ptr->end_y.object.get(), ptr->end_y.type);
                dfs.emplace(ptr->end_x.object.get(), ptr->end_x.type);
                dfs.emplace(ptr->origin_y.object.get(), ptr->origin_y.type);
                dfs.emplace(ptr->origin_x.object.get(), ptr->origin_x.type);
            }
            break;
            case NodeObject::EXIT:
                ret+="EXIT! ";
            break;
            case NodeObject::CLEAR:
                ret+="CLEAR! ";
            break;


            case NodeObject::NONE:
                ret += ") ";
                break;
        }
    }

    return ret;
}
