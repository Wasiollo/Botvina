
// Generated from botvina.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "botvinaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by botvinaParser.
 */
class  botvinaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStatement(botvinaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(botvinaParser::StatementContext *ctx) = 0;

  virtual void enterAssign_statement(botvinaParser::Assign_statementContext *ctx) = 0;
  virtual void exitAssign_statement(botvinaParser::Assign_statementContext *ctx) = 0;

  virtual void enterIf_statement(botvinaParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(botvinaParser::If_statementContext *ctx) = 0;

  virtual void enterLoop_statement(botvinaParser::Loop_statementContext *ctx) = 0;
  virtual void exitLoop_statement(botvinaParser::Loop_statementContext *ctx) = 0;

  virtual void enterFunction_literal(botvinaParser::Function_literalContext *ctx) = 0;
  virtual void exitFunction_literal(botvinaParser::Function_literalContext *ctx) = 0;

  virtual void enterFunction_apply(botvinaParser::Function_applyContext *ctx) = 0;
  virtual void exitFunction_apply(botvinaParser::Function_applyContext *ctx) = 0;

  virtual void enterClear_statement(botvinaParser::Clear_statementContext *ctx) = 0;
  virtual void exitClear_statement(botvinaParser::Clear_statementContext *ctx) = 0;

  virtual void enterExit_statement(botvinaParser::Exit_statementContext *ctx) = 0;
  virtual void exitExit_statement(botvinaParser::Exit_statementContext *ctx) = 0;

  virtual void enterReturn_statement(botvinaParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(botvinaParser::Return_statementContext *ctx) = 0;

  virtual void enterBlock(botvinaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(botvinaParser::BlockContext *ctx) = 0;

  virtual void enterOperation_block(botvinaParser::Operation_blockContext *ctx) = 0;
  virtual void exitOperation_block(botvinaParser::Operation_blockContext *ctx) = 0;

  virtual void enterInteger(botvinaParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(botvinaParser::IntegerContext *ctx) = 0;

  virtual void enterIdentifier(botvinaParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(botvinaParser::IdentifierContext *ctx) = 0;

  virtual void enterCondition(botvinaParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(botvinaParser::ConditionContext *ctx) = 0;

  virtual void enterPosition(botvinaParser::PositionContext *ctx) = 0;
  virtual void exitPosition(botvinaParser::PositionContext *ctx) = 0;

  virtual void enterAtom(botvinaParser::AtomContext *ctx) = 0;
  virtual void exitAtom(botvinaParser::AtomContext *ctx) = 0;

  virtual void enterPredefined_figure(botvinaParser::Predefined_figureContext *ctx) = 0;
  virtual void exitPredefined_figure(botvinaParser::Predefined_figureContext *ctx) = 0;

  virtual void enterCircle(botvinaParser::CircleContext *ctx) = 0;
  virtual void exitCircle(botvinaParser::CircleContext *ctx) = 0;

  virtual void enterQuadrangle(botvinaParser::QuadrangleContext *ctx) = 0;
  virtual void exitQuadrangle(botvinaParser::QuadrangleContext *ctx) = 0;

  virtual void enterPoint(botvinaParser::PointContext *ctx) = 0;
  virtual void exitPoint(botvinaParser::PointContext *ctx) = 0;

  virtual void enterLine(botvinaParser::LineContext *ctx) = 0;
  virtual void exitLine(botvinaParser::LineContext *ctx) = 0;

  virtual void enterDraw(botvinaParser::DrawContext *ctx) = 0;
  virtual void exitDraw(botvinaParser::DrawContext *ctx) = 0;

  virtual void enterSize(botvinaParser::SizeContext *ctx) = 0;
  virtual void exitSize(botvinaParser::SizeContext *ctx) = 0;

  virtual void enterColor(botvinaParser::ColorContext *ctx) = 0;
  virtual void exitColor(botvinaParser::ColorContext *ctx) = 0;

  virtual void enterExpr(botvinaParser::ExprContext *ctx) = 0;
  virtual void exitExpr(botvinaParser::ExprContext *ctx) = 0;

  virtual void enterAdd_expr(botvinaParser::Add_exprContext *ctx) = 0;
  virtual void exitAdd_expr(botvinaParser::Add_exprContext *ctx) = 0;

  virtual void enterMul_expr(botvinaParser::Mul_exprContext *ctx) = 0;
  virtual void exitMul_expr(botvinaParser::Mul_exprContext *ctx) = 0;

  virtual void enterOr_expr(botvinaParser::Or_exprContext *ctx) = 0;
  virtual void exitOr_expr(botvinaParser::Or_exprContext *ctx) = 0;

  virtual void enterAnd_expr(botvinaParser::And_exprContext *ctx) = 0;
  virtual void exitAnd_expr(botvinaParser::And_exprContext *ctx) = 0;

  virtual void enterEq_expr(botvinaParser::Eq_exprContext *ctx) = 0;
  virtual void exitEq_expr(botvinaParser::Eq_exprContext *ctx) = 0;

  virtual void enterRel_expr(botvinaParser::Rel_exprContext *ctx) = 0;
  virtual void exitRel_expr(botvinaParser::Rel_exprContext *ctx) = 0;

  virtual void enterParameter_list(botvinaParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(botvinaParser::Parameter_listContext *ctx) = 0;

  virtual void enterIdentifier_list(botvinaParser::Identifier_listContext *ctx) = 0;
  virtual void exitIdentifier_list(botvinaParser::Identifier_listContext *ctx) = 0;


};

