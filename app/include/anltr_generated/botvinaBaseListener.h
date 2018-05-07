
// Generated from botvina.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "botvinaListener.h"


/**
 * This class provides an empty implementation of botvinaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  botvinaBaseListener : public botvinaListener {
public:

  virtual void enterInput_text(botvinaParser::Input_textContext * /*ctx*/) override { }
  virtual void exitInput_text(botvinaParser::Input_textContext * /*ctx*/) override { }

  virtual void enterStatement(botvinaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(botvinaParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssign_statement(botvinaParser::Assign_statementContext * /*ctx*/) override { }
  virtual void exitAssign_statement(botvinaParser::Assign_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(botvinaParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(botvinaParser::If_statementContext * /*ctx*/) override { }

  virtual void enterLoop_statement(botvinaParser::Loop_statementContext * /*ctx*/) override { }
  virtual void exitLoop_statement(botvinaParser::Loop_statementContext * /*ctx*/) override { }

  virtual void enterOperand(botvinaParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(botvinaParser::OperandContext * /*ctx*/) override { }

  virtual void enterFunction_literal(botvinaParser::Function_literalContext * /*ctx*/) override { }
  virtual void exitFunction_literal(botvinaParser::Function_literalContext * /*ctx*/) override { }

  virtual void enterFunction_apply(botvinaParser::Function_applyContext * /*ctx*/) override { }
  virtual void exitFunction_apply(botvinaParser::Function_applyContext * /*ctx*/) override { }

  virtual void enterClear_statement(botvinaParser::Clear_statementContext * /*ctx*/) override { }
  virtual void exitClear_statement(botvinaParser::Clear_statementContext * /*ctx*/) override { }

  virtual void enterExit_statement(botvinaParser::Exit_statementContext * /*ctx*/) override { }
  virtual void exitExit_statement(botvinaParser::Exit_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(botvinaParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(botvinaParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterBlock(botvinaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(botvinaParser::BlockContext * /*ctx*/) override { }

  virtual void enterBoolean(botvinaParser::BooleanContext * /*ctx*/) override { }
  virtual void exitBoolean(botvinaParser::BooleanContext * /*ctx*/) override { }

  virtual void enterInteger(botvinaParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(botvinaParser::IntegerContext * /*ctx*/) override { }

  virtual void enterIdentifier(botvinaParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(botvinaParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterCondition(botvinaParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(botvinaParser::ConditionContext * /*ctx*/) override { }

  virtual void enterPosition(botvinaParser::PositionContext * /*ctx*/) override { }
  virtual void exitPosition(botvinaParser::PositionContext * /*ctx*/) override { }

  virtual void enterAtom(botvinaParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(botvinaParser::AtomContext * /*ctx*/) override { }

  virtual void enterPredefined_figure(botvinaParser::Predefined_figureContext * /*ctx*/) override { }
  virtual void exitPredefined_figure(botvinaParser::Predefined_figureContext * /*ctx*/) override { }

  virtual void enterCircle(botvinaParser::CircleContext * /*ctx*/) override { }
  virtual void exitCircle(botvinaParser::CircleContext * /*ctx*/) override { }

  virtual void enterQuadrangle(botvinaParser::QuadrangleContext * /*ctx*/) override { }
  virtual void exitQuadrangle(botvinaParser::QuadrangleContext * /*ctx*/) override { }

  virtual void enterPoint(botvinaParser::PointContext * /*ctx*/) override { }
  virtual void exitPoint(botvinaParser::PointContext * /*ctx*/) override { }

  virtual void enterLine(botvinaParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(botvinaParser::LineContext * /*ctx*/) override { }

  virtual void enterDraw(botvinaParser::DrawContext * /*ctx*/) override { }
  virtual void exitDraw(botvinaParser::DrawContext * /*ctx*/) override { }

  virtual void enterMove(botvinaParser::MoveContext * /*ctx*/) override { }
  virtual void exitMove(botvinaParser::MoveContext * /*ctx*/) override { }

  virtual void enterSize(botvinaParser::SizeContext * /*ctx*/) override { }
  virtual void exitSize(botvinaParser::SizeContext * /*ctx*/) override { }

  virtual void enterColor(botvinaParser::ColorContext * /*ctx*/) override { }
  virtual void exitColor(botvinaParser::ColorContext * /*ctx*/) override { }

  virtual void enterExpr(botvinaParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(botvinaParser::ExprContext * /*ctx*/) override { }

  virtual void enterParameter_list(botvinaParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(botvinaParser::Parameter_listContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

