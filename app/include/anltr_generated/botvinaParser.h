
// Generated from botvina.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  botvinaParser : public antlr4::Parser {
public:
  enum {
    INTEGER = 1, CMM = 2, RND_BRACKET_OP = 3, RND_BRACKET_CL = 4, SET_BRACKET_OP = 5, 
    SET_BRACKET_CL = 6, SEMICOLON = 7, EQ = 8, IF_KEYWORD = 9, FUNCTION_KEYWORD = 10, 
    CLEAR_KEYWORD = 11, EXIT_KEYWORD = 12, RETURN_KEYWORD = 13, CIRCLE_KEYWORD = 14, 
    QUADRANGLE_KEYWORD = 15, POINT_KEYWORD = 16, LINE_KEYWORD = 17, DRAW_KEYWORD = 18, 
    MOVE_KEYWORD = 19, BLACK_KEYWORD = 20, RED_KEYWORD = 21, BLUE_KEYWORD = 22, 
    GREEN_KEYWORD = 23, WHEN_KEYWORD = 24, MUL_OPERATOR = 25, ADD_OPERATOR = 26, 
    RELATION_OPERATOR = 27, EQ_OPERATOR = 28, AND_OPERATOR = 29, OR_OPERATOR = 30, 
    IDENTIFIER = 31, WS = 32
  };

  enum {
    RuleStatement = 0, RuleAssign_statement = 1, RuleIf_statement = 2, RuleLoop_statement = 3, 
    RuleFunction_literal = 4, RuleFunction_apply = 5, RuleClear_statement = 6, 
    RuleExit_statement = 7, RuleReturn_statement = 8, RuleBlock = 9, RuleOperation_block = 10, 
    RuleInteger = 11, RuleIdentifier = 12, RuleCondition = 13, RulePosition = 14, 
    RuleAtom = 15, RulePredefined_figure = 16, RuleCircle = 17, RuleQuadrangle = 18, 
    RulePoint = 19, RuleLine = 20, RuleDraw = 21, RuleSize = 22, RuleColor = 23, 
    RuleExpr = 24, RuleAdd_expr = 25, RuleMul_expr = 26, RuleOr_expr = 27, 
    RuleAnd_expr = 28, RuleEq_expr = 29, RuleRel_expr = 30, RuleParameter_list = 31, 
    RuleIdentifier_list = 32
  };

  botvinaParser(antlr4::TokenStream *input);
  ~botvinaParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StatementContext;
  class Assign_statementContext;
  class If_statementContext;
  class Loop_statementContext;
  class Function_literalContext;
  class Function_applyContext;
  class Clear_statementContext;
  class Exit_statementContext;
  class Return_statementContext;
  class BlockContext;
  class Operation_blockContext;
  class IntegerContext;
  class IdentifierContext;
  class ConditionContext;
  class PositionContext;
  class AtomContext;
  class Predefined_figureContext;
  class CircleContext;
  class QuadrangleContext;
  class PointContext;
  class LineContext;
  class DrawContext;
  class SizeContext;
  class ColorContext;
  class ExprContext;
  class Add_exprContext;
  class Mul_exprContext;
  class Or_exprContext;
  class And_exprContext;
  class Eq_exprContext;
  class Rel_exprContext;
  class Parameter_listContext;
  class Identifier_listContext; 

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assign_statementContext *assign_statement();
    Loop_statementContext *loop_statement();
    If_statementContext *if_statement();
    Function_literalContext *function_literal();
    Function_applyContext *function_apply();
    DrawContext *draw();
    Clear_statementContext *clear_statement();
    Exit_statementContext *exit_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  Assign_statementContext : public antlr4::ParserRuleContext {
  public:
    Assign_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    Add_exprContext *add_expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assign_statementContext* assign_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_KEYWORD();
    ConditionContext *condition();
    Operation_blockContext *operation_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_statementContext* if_statement();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN_KEYWORD();
    ConditionContext *condition();
    Operation_blockContext *operation_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_statementContext* loop_statement();

  class  Function_literalContext : public antlr4::ParserRuleContext {
  public:
    Function_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION_KEYWORD();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RND_BRACKET_OP();
    antlr4::tree::TerminalNode *RND_BRACKET_CL();
    BlockContext *block();
    Identifier_listContext *identifier_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_literalContext* function_literal();

  class  Function_applyContext : public antlr4::ParserRuleContext {
  public:
    Function_applyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *RND_BRACKET_OP();
    antlr4::tree::TerminalNode *RND_BRACKET_CL();
    antlr4::tree::TerminalNode *SEMICOLON();
    Parameter_listContext *parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_applyContext* function_apply();

  class  Clear_statementContext : public antlr4::ParserRuleContext {
  public:
    Clear_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLEAR_KEYWORD();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Clear_statementContext* clear_statement();

  class  Exit_statementContext : public antlr4::ParserRuleContext {
  public:
    Exit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT_KEYWORD();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exit_statementContext* exit_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN_KEYWORD();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Return_statementContext* return_statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_BRACKET_OP();
    antlr4::tree::TerminalNode *SET_BRACKET_CL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    Return_statementContext *return_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  Operation_blockContext : public antlr4::ParserRuleContext {
  public:
    Operation_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_BRACKET_OP();
    antlr4::tree::TerminalNode *SET_BRACKET_CL();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Operation_blockContext* operation_block();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntegerContext* integer();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RND_BRACKET_OP();
    Or_exprContext *or_expr();
    antlr4::tree::TerminalNode *RND_BRACKET_CL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  PositionContext : public antlr4::ParserRuleContext {
  public:
    PositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RND_BRACKET_OP();
    std::vector<Add_exprContext *> add_expr();
    Add_exprContext* add_expr(size_t i);
    antlr4::tree::TerminalNode *CMM();
    antlr4::tree::TerminalNode *RND_BRACKET_CL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PositionContext* position();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    Function_applyContext *function_apply();
    Function_literalContext *function_literal();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomContext* atom();

  class  Predefined_figureContext : public antlr4::ParserRuleContext {
  public:
    Predefined_figureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuadrangleContext *quadrangle();
    PointContext *point();
    CircleContext *circle();
    LineContext *line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Predefined_figureContext* predefined_figure();

  class  CircleContext : public antlr4::ParserRuleContext {
  public:
    CircleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CIRCLE_KEYWORD();
    SizeContext *size();
    ColorContext *color();
    PositionContext *position();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CircleContext* circle();

  class  QuadrangleContext : public antlr4::ParserRuleContext {
  public:
    QuadrangleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUADRANGLE_KEYWORD();
    SizeContext *size();
    ColorContext *color();
    PositionContext *position();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuadrangleContext* quadrangle();

  class  PointContext : public antlr4::ParserRuleContext {
  public:
    PointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POINT_KEYWORD();
    ColorContext *color();
    PositionContext *position();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointContext* point();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_KEYWORD();
    ColorContext *color();
    std::vector<PositionContext *> position();
    PositionContext* position(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineContext* line();

  class  DrawContext : public antlr4::ParserRuleContext {
  public:
    DrawContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DRAW_KEYWORD();
    Predefined_figureContext *predefined_figure();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DrawContext* draw();

  class  SizeContext : public antlr4::ParserRuleContext {
  public:
    SizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SizeContext* size();

  class  ColorContext : public antlr4::ParserRuleContext {
  public:
    ColorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLACK_KEYWORD();
    antlr4::tree::TerminalNode *RED_KEYWORD();
    antlr4::tree::TerminalNode *BLUE_KEYWORD();
    antlr4::tree::TerminalNode *GREEN_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColorContext* color();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_exprContext *add_expr();
    Or_exprContext *or_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  Add_exprContext : public antlr4::ParserRuleContext {
  public:
    Add_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Mul_exprContext *> mul_expr();
    Mul_exprContext* mul_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD_OPERATOR();
    antlr4::tree::TerminalNode* ADD_OPERATOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Add_exprContext* add_expr();

  class  Mul_exprContext : public antlr4::ParserRuleContext {
  public:
    Mul_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AtomContext *> atom();
    AtomContext* atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MUL_OPERATOR();
    antlr4::tree::TerminalNode* MUL_OPERATOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Mul_exprContext* mul_expr();

  class  Or_exprContext : public antlr4::ParserRuleContext {
  public:
    Or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_exprContext *> and_expr();
    And_exprContext* and_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR_OPERATOR();
    antlr4::tree::TerminalNode* OR_OPERATOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Or_exprContext* or_expr();

  class  And_exprContext : public antlr4::ParserRuleContext {
  public:
    And_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Eq_exprContext *> eq_expr();
    Eq_exprContext* eq_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND_OPERATOR();
    antlr4::tree::TerminalNode* AND_OPERATOR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  And_exprContext* and_expr();

  class  Eq_exprContext : public antlr4::ParserRuleContext {
  public:
    Eq_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rel_exprContext *> rel_expr();
    Rel_exprContext* rel_expr(size_t i);
    antlr4::tree::TerminalNode *EQ_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Eq_exprContext* eq_expr();

  class  Rel_exprContext : public antlr4::ParserRuleContext {
  public:
    Rel_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AtomContext *> atom();
    AtomContext* atom(size_t i);
    antlr4::tree::TerminalNode *RELATION_OPERATOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rel_exprContext* rel_expr();

  class  Parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CMM();
    antlr4::tree::TerminalNode* CMM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parameter_listContext* parameter_list();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CMM();
    antlr4::tree::TerminalNode* CMM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Identifier_listContext* identifier_list();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

