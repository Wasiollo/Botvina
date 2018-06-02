#include "botvinareallistener.hpp"
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
#include "ast/ast.hpp"
#include <stack>

using namespace ast;


void BotvinaRealListener::enterAssign_statement(botvinaParser::Assign_statementContext *ctx){
    const std::string& vname = ctx->identifier()->getText();

    astNodeBoxStack.emplace(new AssignStatement(vname), NodeObject::ASSIGN, 1);

    std::cout<<"kurwa"<<std::endl;
    ctx->children[0]->getText();
}

void BotvinaRealListener::enterIf_statement(botvinaParser::If_statementContext* ctx){
    botvinaParser::Operation_blockContext* block = ctx->operation_block();
    int nchildren = block->statement().size() + 1;
    astNodeBoxStack.emplace(new IfStatement(), NodeObject::IF_STATEMENT, nchildren);

}

void BotvinaRealListener::enterLoop_statement(botvinaParser::Loop_statementContext* ctx){
    botvinaParser::Operation_blockContext* block = ctx->operation_block();
    int nchildren = block->statement().size() + 1;

    astNodeBoxStack.emplace(new LoopStatement(), NodeObject::LOOP_STATEMENT, nchildren);

}

void BotvinaRealListener::enterFunction_literal(botvinaParser::Function_literalContext* ctx){

    const std::string& vname = ctx->identifier()->getText();
    botvinaParser::Identifier_listContext* id_list = ctx->identifier_list();
    std::vector<std::string> params;
    if(id_list){
        for(auto param : id_list->identifier()){
                   params.emplace_back(param->getText());

               }
    }

    FunctionLiteral* functionLiteral = new FunctionLiteral(vname, params);

    botvinaParser::BlockContext* block = ctx->block();

    int nchildren = block->statement().size();
    if(block->return_statement()){
        ++nchildren;
        functionLiteral->ret.type=NodeObject::ASSIGN;
        }

    astNodeBoxStack.emplace(functionLiteral, NodeObject::FUNCTION_LITERAL, nchildren);
    if(nchildren == 0){
            unwindStack();
    }

}

void BotvinaRealListener::enterFunction_apply(botvinaParser::Function_applyContext* ctx){

    const std::string& vname = ctx->identifier()->getText();

    int nchildren = 0;
    botvinaParser::Parameter_listContext* plist = ctx->parameter_list();
    if(plist){
        nchildren = plist->expr().size();
    }


    astNodeBoxStack.emplace(new FunctionApply(vname), NodeObject::FUNCTION_APPLY, nchildren);
    if(nchildren == 0){
            unwindStack();
    }
}

void BotvinaRealListener::enterClear_statement(botvinaParser::Clear_statementContext* ctx){
    astNodeBoxStack.emplace(nullptr, NodeObject::CLEAR);
    unwindStack();
}

void BotvinaRealListener::enterExit_statement(botvinaParser::Exit_statementContext* ctx){
    astNodeBoxStack.emplace(nullptr, NodeObject::EXIT);
    unwindStack();

}


void BotvinaRealListener::enterInteger(botvinaParser::IntegerContext* ctx){
    astNodeBoxStack.emplace(new Integer(std::stoi(ctx->getText())), NodeObject::INT);
    unwindStack();
}

void BotvinaRealListener::enterIdentifier(botvinaParser::IdentifierContext* ctx){

    astNodeBoxStack.emplace(new Identifier(ctx->getText()), NodeObject::ID);
    unwindStack();
}

Color stringToColor(const std::string& color){
    if (color == "red")
        return Color::RED;
    else if (color == "blue")
        return Color::BLUE;
    else if (color == "green")
        return Color::GREEN;
    else
        return Color::BLACK;
}

void BotvinaRealListener::enterCircle(botvinaParser::CircleContext* ctx) {
    Color color = stringToColor(ctx->color()->getText());
    int size = std::stoi(ctx->size()->getText());

    astNodeBoxStack.emplace(new Circle(size,color), NodeObject::CIRCLE, 2);
}

void BotvinaRealListener::enterQuadrangle(botvinaParser::QuadrangleContext* ctx){
    Color color = stringToColor(ctx->color()->getText());
    int size = std::stoi(ctx->size()->getText());

    astNodeBoxStack.emplace(new Quadrangle(size,color), NodeObject::QUADRANGLE,2);

}

void BotvinaRealListener::enterPoint(botvinaParser::PointContext* ctx) {
    Color color = stringToColor(ctx->color()->getText());

    astNodeBoxStack.emplace(new Point(color), NodeObject::POINT, 2);
}

void BotvinaRealListener::enterLine(botvinaParser::LineContext* ctx){
    Color color = stringToColor(ctx->color()->getText());

    astNodeBoxStack.emplace(new Line(color), NodeObject::LINE, 4);
}

void BotvinaRealListener::enterAdd_expr(botvinaParser::Add_exprContext* ctx){

    int nchildren = ctx->mul_expr().size();
    if(nchildren > 1){
        std::vector<AddType> operators{AddType::ADD};
        for(auto& terminal : ctx->ADD_OPERATOR()){
                const std::string& str = terminal->getText();
                if(str == "+"){
                    operators.push_back(AddType::ADD);
                } else {
                    operators.push_back(AddType::SUB);
                }
        }
    astNodeBoxStack.emplace(new AddStatement(operators), NodeObject::ADD, nchildren);
    }

}

void BotvinaRealListener::enterMul_expr(botvinaParser::Mul_exprContext* ctx){
    int nchildren = ctx->atom().size();
    if(nchildren > 1){
        std::vector<MulType> operators{MulType::MUL};
        for(auto& terminal : ctx->MUL_OPERATOR()){
                const std::string& str = terminal->getText();
                if(str == "*"){
                    operators.push_back(MulType::MUL);
                } else {
                    operators.push_back(MulType::DIV);
                }
        }
    astNodeBoxStack.emplace(new MulStatement(operators), NodeObject::MUL, nchildren);
    }
}

void BotvinaRealListener::enterOr_expr(botvinaParser::Or_exprContext* ctx){

    int nchildren  = ctx->and_expr().size();
    if (nchildren >1){
    astNodeBoxStack.emplace(new OrStatement(), NodeObject::OR, nchildren);
    }


}

void BotvinaRealListener::enterAnd_expr(botvinaParser::And_exprContext* ctx){
    int nchildren  = ctx->eq_expr().size();
    if (nchildren >1){
    astNodeBoxStack.emplace(new AndStatement(), NodeObject::AND, nchildren);
    }
}

void BotvinaRealListener::enterEq_expr(botvinaParser::Eq_exprContext* ctx){
    int nchildren  = ctx->rel_expr().size();

    if (nchildren >1){
        EqStatement::Type type;
        if(ctx->EQ_OPERATOR()->getText()=="=="){
            type = EqStatement::EQ;
        } else {
            type = EqStatement::NEQ;
        }
        astNodeBoxStack.emplace(new EqStatement(type), NodeObject::EQ, nchildren);
    }
}

void BotvinaRealListener::enterRel_expr(botvinaParser::Rel_exprContext* ctx){
    int nchildren  = ctx->atom().size();

    if (nchildren >1){
        RelStatement::Type type;
        const std::string& op_text = ctx->RELATION_OPERATOR()->getText();
        if( op_text == ">") {
            type = RelStatement::GT;
        } else if (op_text == ">=") {
            type = RelStatement::GE;
        } else if (op_text == "<") {
            type = RelStatement::LT;
        } else {
            type = RelStatement::LE;
        }
        astNodeBoxStack.emplace(new RelStatement(type), NodeObject::REL, nchildren);
    }
}

void BotvinaRealListener::unwindStack(){
    while(astNodeBoxStack.size() > 1) {
        AstNodeBox child = astNodeBoxStack.top();
        astNodeBoxStack.pop();
        AstNodeBox& parent = astNodeBoxStack.top();
        switch(parent.type)
        {
            case NodeObject::ASSIGN:
            {
                AssignStatement* ptr = dynamic_cast<AssignStatement*>(parent.node);
                ptr->r_val.type=child.type;
                ptr->r_val.object.reset(child.node);
            }
            break;

            case NodeObject::ADD:
            {
                AddStatement* ptr = dynamic_cast<AddStatement*>(parent.node);
                ptr->operands.emplace_back(child.node, child.type);
            }
            break;

            case NodeObject::MUL:
            {
                MulStatement* ptr = dynamic_cast<MulStatement*>(parent.node);
                ptr->operands.emplace_back(child.node, child.type);
            }
            break;

            case NodeObject::OR:
            {
                OrStatement* ptr = dynamic_cast<OrStatement*>(parent.node);
                ptr->operands.emplace_back(child.node, child.type);
            }
            break;

            case NodeObject::AND:
            {
                AndStatement* ptr = dynamic_cast<AndStatement*>(parent.node);
                ptr->operands.emplace_back(child.node, child.type);
            }
            break;

            case NodeObject::REL:
            {
                RelStatement* ptr = dynamic_cast<RelStatement*>(parent.node);
                if(!ptr->left) {
                    ptr->left.type = child.type;
                    ptr->left.object.reset(child.node);
                }
                else {
                    ptr->right.type = child.type;
                    ptr->right.object.reset(child.node);
                }
            }
            break;

            case NodeObject::EQ:
            {
                EqStatement* ptr = dynamic_cast<EqStatement*>(parent.node);
                if(!ptr->left) {
                    ptr->left.type = child.type;
                    ptr->left.object.reset(child.node);
                }
                else {
                    ptr->right.type = child.type;
                    ptr->right.object.reset(child.node);
                }
            }
            break;

            case NodeObject::IF_STATEMENT:
            {
                IfStatement* ptr = dynamic_cast<IfStatement*>(parent.node);
                if(!ptr->condition){
                    ptr->condition.type = child.type;
                    ptr->condition.object.reset(child.node);
                } else {
                    ptr->ops.emplace_back(child.node, child.type);
                }
            }
            break;

            case NodeObject::LOOP_STATEMENT:
            {
                LoopStatement* ptr = dynamic_cast<LoopStatement*>(parent.node);
                if(!ptr->condition){
                    ptr->condition.type = child.type;
                    ptr->condition.object.reset(child.node);
                } else {
                    ptr->ops.emplace_back(child.node, child.type);
                }

            }
            break;

            case NodeObject::FUNCTION_LITERAL:
            {
                FunctionLiteral* ptr = dynamic_cast<FunctionLiteral*>(parent.node);
                if(parent.left>1){
                    ptr->ops.emplace_back(child.node, child.type);
                } else {

                    if(ptr->ret.type == NodeObject::NONE)
                    {
                        ptr->ops.emplace_back(child.node, child.type);
                    } else {
                        ptr->ret.type = child.type;
                        ptr->ret.object.reset(child.node);
                    }
                }
            }
            break;

            case NodeObject::FUNCTION_APPLY:
            {
                FunctionApply* ptr = dynamic_cast<FunctionApply*>(parent.node);
                ptr->exprs.emplace_back(child.node, child.type);

            }
            break;

            case NodeObject::CIRCLE:
            {
                Circle* ptr = dynamic_cast<Circle*>(parent.node);
                if(!ptr->x){
                    ptr->x.type = child.type;
                    ptr->x.object.reset(child.node);
                } else {
                    ptr->y.type = child.type;
                    ptr->y.object.reset(child.node);
                }
            }
            break;

            case NodeObject::QUADRANGLE:
            {
                Quadrangle* ptr = dynamic_cast<Quadrangle*>(parent.node);
                if(!ptr->x){
                    ptr->x.type = child.type;
                    ptr->x.object.reset(child.node);
                } else {
                    ptr->y.type = child.type;
                    ptr->y.object.reset(child.node);
                }
            }
            break;
            case NodeObject::POINT:
            {
                Point* ptr = dynamic_cast<Point*>(parent.node);
                if(!ptr->x){
                    ptr->x.type = child.type;
                    ptr->x.object.reset(child.node);
                } else {
                    ptr->y.type = child.type;
                    ptr->y.object.reset(child.node);
                }
            }
            break;

            case NodeObject::LINE:
            {
                Line* ptr = dynamic_cast<Line*>(parent.node);
                if(!ptr->origin_x){
                    ptr->origin_x.type = child.type;
                    ptr->origin_x.object.reset(child.node);
                } else if(!ptr->origin_y) {
                    ptr->origin_y.type = child.type;
                    ptr->origin_y.object.reset(child.node);
                } else if(!ptr->end_x) {
                    ptr->end_x.type = child.type;
                    ptr->end_x.object.reset(child.node);
                } else {
                    ptr->end_y.type = child.type;
                    ptr->end_y.object.reset(child.node);
                }
            }
            break;

        }
        parent.left--;

        if(parent.left > 0)
            break;
    }

}


Ast BotvinaRealListener::getAst(){
    AstNodeBox topBox = astNodeBoxStack.top();
    astNodeBoxStack.pop();
    return Ast(topBox.node, topBox.type);
}
