#ifndef BOTVINAREALLISTENER_HPP
#define BOTVINAREALLISTENER_HPP
#include "anltr_generated/botvinaBaseListener.h"
#include "antlr4-runtime.h"
#include "ast/Node.hpp"
#include "ast/ast.hpp"


struct AstNodeBox {
ast::NodeObject::Type type;
ast::Node* node;
int left;

AstNodeBox(ast::Node* n, ast::NodeObject::Type t, int childrenLeft = 0) : type(t), node(n), left(childrenLeft){
}
};


class BotvinaRealListener : public botvinaBaseListener{
    std::stack<AstNodeBox> astNodeBoxStack;
    bool ignoreNextIdentifier;
    bool ignoreNextInteger;

public:
    void enterAssign_statement(botvinaParser::Assign_statementContext* ctx);

    void enterIf_statement(botvinaParser::If_statementContext* ctx);

    void enterLoop_statement(botvinaParser::Loop_statementContext* ctx);

    void enterFunction_literal(botvinaParser::Function_literalContext* ctx);

    void enterFunction_apply(botvinaParser::Function_applyContext* ctx);

    void enterClear_statement(botvinaParser::Clear_statementContext* ctx);

    void enterExit_statement(botvinaParser::Exit_statementContext* ctx);

    void enterInteger(botvinaParser::IntegerContext* ctx);

    void enterIdentifier(botvinaParser::IdentifierContext* ctx);

    void enterCircle(botvinaParser::CircleContext* ctx) ;

    void enterQuadrangle(botvinaParser::QuadrangleContext* ctx);

    void enterPoint(botvinaParser::PointContext* ctx) ;

    void enterLine(botvinaParser::LineContext* ctx);

    void enterAdd_expr(botvinaParser::Add_exprContext* ctx);

    void enterMul_expr(botvinaParser::Mul_exprContext* ctx);

    void enterOr_expr(botvinaParser::Or_exprContext* ctx);

    void enterAnd_expr(botvinaParser::And_exprContext* ctx);

    void enterEq_expr(botvinaParser::Eq_exprContext* ctx);

    void enterRel_expr(botvinaParser::Rel_exprContext* ctx);

    ast::Ast getAst();

    BotvinaRealListener():ignoreNextIdentifier(false), ignoreNextInteger(false){}


private:
    void unwindStack();
};

#endif // BOTVINAREALLISTENER_HPP
