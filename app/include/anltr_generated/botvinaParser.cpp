
// Generated from botvina.g4 by ANTLR 4.7.1


#include "botvinaListener.h"

#include "botvinaParser.h"


using namespace antlrcpp;
using namespace antlr4;

botvinaParser::botvinaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

botvinaParser::~botvinaParser() {
  delete _interpreter;
}

std::string botvinaParser::getGrammarFileName() const {
  return "botvina.g4";
}

const std::vector<std::string>& botvinaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& botvinaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Input_textContext ------------------------------------------------------------------

botvinaParser::Input_textContext::Input_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Input_textContext::EOF() {
  return getToken(botvinaParser::EOF, 0);
}

std::vector<botvinaParser::StatementContext *> botvinaParser::Input_textContext::statement() {
  return getRuleContexts<botvinaParser::StatementContext>();
}

botvinaParser::StatementContext* botvinaParser::Input_textContext::statement(size_t i) {
  return getRuleContext<botvinaParser::StatementContext>(i);
}


size_t botvinaParser::Input_textContext::getRuleIndex() const {
  return botvinaParser::RuleInput_text;
}

void botvinaParser::Input_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput_text(this);
}

void botvinaParser::Input_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput_text(this);
}

botvinaParser::Input_textContext* botvinaParser::input_text() {
  Input_textContext *_localctx = _tracker.createInstance<Input_textContext>(_ctx, getState());
  enterRule(_localctx, 0, botvinaParser::RuleInput_text);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::IF_KEYWORD)
      | (1ULL << botvinaParser::FUNCTION_KEYWORD)
      | (1ULL << botvinaParser::CLEAR_KEYWORD)
      | (1ULL << botvinaParser::EXIT_KEYWORD)
      | (1ULL << botvinaParser::RETURN_KEYWORD)
      | (1ULL << botvinaParser::DRAW_KEYWORD)
      | (1ULL << botvinaParser::MOVE_KEYWORD)
      | (1ULL << botvinaParser::WHEN_KEYWORD)
      | (1ULL << botvinaParser::IDENTIFIER))) != 0)) {
      setState(62);
      statement();
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
    match(botvinaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

botvinaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::Assign_statementContext* botvinaParser::StatementContext::assign_statement() {
  return getRuleContext<botvinaParser::Assign_statementContext>(0);
}

botvinaParser::Loop_statementContext* botvinaParser::StatementContext::loop_statement() {
  return getRuleContext<botvinaParser::Loop_statementContext>(0);
}

botvinaParser::If_statementContext* botvinaParser::StatementContext::if_statement() {
  return getRuleContext<botvinaParser::If_statementContext>(0);
}

botvinaParser::Function_literalContext* botvinaParser::StatementContext::function_literal() {
  return getRuleContext<botvinaParser::Function_literalContext>(0);
}

botvinaParser::Function_applyContext* botvinaParser::StatementContext::function_apply() {
  return getRuleContext<botvinaParser::Function_applyContext>(0);
}

botvinaParser::OperandContext* botvinaParser::StatementContext::operand() {
  return getRuleContext<botvinaParser::OperandContext>(0);
}

botvinaParser::Clear_statementContext* botvinaParser::StatementContext::clear_statement() {
  return getRuleContext<botvinaParser::Clear_statementContext>(0);
}

botvinaParser::Exit_statementContext* botvinaParser::StatementContext::exit_statement() {
  return getRuleContext<botvinaParser::Exit_statementContext>(0);
}

botvinaParser::Return_statementContext* botvinaParser::StatementContext::return_statement() {
  return getRuleContext<botvinaParser::Return_statementContext>(0);
}


size_t botvinaParser::StatementContext::getRuleIndex() const {
  return botvinaParser::RuleStatement;
}

void botvinaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void botvinaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

botvinaParser::StatementContext* botvinaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, botvinaParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(70);
      assign_statement();
      break;
    }

    case 2: {
      setState(71);
      loop_statement();
      break;
    }

    case 3: {
      setState(72);
      if_statement();
      break;
    }

    case 4: {
      setState(73);
      function_literal();
      break;
    }

    case 5: {
      setState(74);
      function_apply();
      break;
    }

    case 6: {
      setState(75);
      operand();
      break;
    }

    case 7: {
      setState(76);
      clear_statement();
      break;
    }

    case 8: {
      setState(77);
      exit_statement();
      break;
    }

    case 9: {
      setState(78);
      return_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_statementContext ------------------------------------------------------------------

botvinaParser::Assign_statementContext::Assign_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::IdentifierContext* botvinaParser::Assign_statementContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

tree::TerminalNode* botvinaParser::Assign_statementContext::EQ() {
  return getToken(botvinaParser::EQ, 0);
}

botvinaParser::Math_exprContext* botvinaParser::Assign_statementContext::math_expr() {
  return getRuleContext<botvinaParser::Math_exprContext>(0);
}

tree::TerminalNode* botvinaParser::Assign_statementContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::Assign_statementContext::getRuleIndex() const {
  return botvinaParser::RuleAssign_statement;
}

void botvinaParser::Assign_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign_statement(this);
}

void botvinaParser::Assign_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign_statement(this);
}

botvinaParser::Assign_statementContext* botvinaParser::assign_statement() {
  Assign_statementContext *_localctx = _tracker.createInstance<Assign_statementContext>(_ctx, getState());
  enterRule(_localctx, 4, botvinaParser::RuleAssign_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    identifier();
    setState(82);
    match(botvinaParser::EQ);
    setState(83);
    math_expr();
    setState(84);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

botvinaParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::If_statementContext::IF_KEYWORD() {
  return getToken(botvinaParser::IF_KEYWORD, 0);
}

botvinaParser::ConditionContext* botvinaParser::If_statementContext::condition() {
  return getRuleContext<botvinaParser::ConditionContext>(0);
}

botvinaParser::BlockContext* botvinaParser::If_statementContext::block() {
  return getRuleContext<botvinaParser::BlockContext>(0);
}


size_t botvinaParser::If_statementContext::getRuleIndex() const {
  return botvinaParser::RuleIf_statement;
}

void botvinaParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void botvinaParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}

botvinaParser::If_statementContext* botvinaParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, botvinaParser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(botvinaParser::IF_KEYWORD);
    setState(87);
    condition();
    setState(88);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_statementContext ------------------------------------------------------------------

botvinaParser::Loop_statementContext::Loop_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Loop_statementContext::WHEN_KEYWORD() {
  return getToken(botvinaParser::WHEN_KEYWORD, 0);
}

botvinaParser::ConditionContext* botvinaParser::Loop_statementContext::condition() {
  return getRuleContext<botvinaParser::ConditionContext>(0);
}

botvinaParser::BlockContext* botvinaParser::Loop_statementContext::block() {
  return getRuleContext<botvinaParser::BlockContext>(0);
}


size_t botvinaParser::Loop_statementContext::getRuleIndex() const {
  return botvinaParser::RuleLoop_statement;
}

void botvinaParser::Loop_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop_statement(this);
}

void botvinaParser::Loop_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop_statement(this);
}

botvinaParser::Loop_statementContext* botvinaParser::loop_statement() {
  Loop_statementContext *_localctx = _tracker.createInstance<Loop_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, botvinaParser::RuleLoop_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(botvinaParser::WHEN_KEYWORD);
    setState(91);
    condition();
    setState(92);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

botvinaParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::DrawContext* botvinaParser::OperandContext::draw() {
  return getRuleContext<botvinaParser::DrawContext>(0);
}

botvinaParser::MoveContext* botvinaParser::OperandContext::move() {
  return getRuleContext<botvinaParser::MoveContext>(0);
}


size_t botvinaParser::OperandContext::getRuleIndex() const {
  return botvinaParser::RuleOperand;
}

void botvinaParser::OperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperand(this);
}

void botvinaParser::OperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperand(this);
}

botvinaParser::OperandContext* botvinaParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 10, botvinaParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case botvinaParser::DRAW_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        draw();
        break;
      }

      case botvinaParser::MOVE_KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(95);
        move();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_literalContext ------------------------------------------------------------------

botvinaParser::Function_literalContext::Function_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Function_literalContext::FUNCTION_KEYWORD() {
  return getToken(botvinaParser::FUNCTION_KEYWORD, 0);
}

botvinaParser::IdentifierContext* botvinaParser::Function_literalContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

tree::TerminalNode* botvinaParser::Function_literalContext::RND_BRACKET_OP() {
  return getToken(botvinaParser::RND_BRACKET_OP, 0);
}

botvinaParser::Parameter_listContext* botvinaParser::Function_literalContext::parameter_list() {
  return getRuleContext<botvinaParser::Parameter_listContext>(0);
}

tree::TerminalNode* botvinaParser::Function_literalContext::RND_BRACKET_CL() {
  return getToken(botvinaParser::RND_BRACKET_CL, 0);
}

botvinaParser::BlockContext* botvinaParser::Function_literalContext::block() {
  return getRuleContext<botvinaParser::BlockContext>(0);
}


size_t botvinaParser::Function_literalContext::getRuleIndex() const {
  return botvinaParser::RuleFunction_literal;
}

void botvinaParser::Function_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_literal(this);
}

void botvinaParser::Function_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_literal(this);
}

botvinaParser::Function_literalContext* botvinaParser::function_literal() {
  Function_literalContext *_localctx = _tracker.createInstance<Function_literalContext>(_ctx, getState());
  enterRule(_localctx, 12, botvinaParser::RuleFunction_literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(botvinaParser::FUNCTION_KEYWORD);
    setState(99);
    identifier();
    setState(100);
    match(botvinaParser::RND_BRACKET_OP);
    setState(101);
    parameter_list();
    setState(102);
    match(botvinaParser::RND_BRACKET_CL);
    setState(103);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_applyContext ------------------------------------------------------------------

botvinaParser::Function_applyContext::Function_applyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::IdentifierContext* botvinaParser::Function_applyContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

tree::TerminalNode* botvinaParser::Function_applyContext::RND_BRACKET_OP() {
  return getToken(botvinaParser::RND_BRACKET_OP, 0);
}

botvinaParser::Parameter_listContext* botvinaParser::Function_applyContext::parameter_list() {
  return getRuleContext<botvinaParser::Parameter_listContext>(0);
}

tree::TerminalNode* botvinaParser::Function_applyContext::RND_BRACKET_CL() {
  return getToken(botvinaParser::RND_BRACKET_CL, 0);
}

tree::TerminalNode* botvinaParser::Function_applyContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::Function_applyContext::getRuleIndex() const {
  return botvinaParser::RuleFunction_apply;
}

void botvinaParser::Function_applyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_apply(this);
}

void botvinaParser::Function_applyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_apply(this);
}

botvinaParser::Function_applyContext* botvinaParser::function_apply() {
  Function_applyContext *_localctx = _tracker.createInstance<Function_applyContext>(_ctx, getState());
  enterRule(_localctx, 14, botvinaParser::RuleFunction_apply);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    identifier();
    setState(106);
    match(botvinaParser::RND_BRACKET_OP);
    setState(107);
    parameter_list();
    setState(108);
    match(botvinaParser::RND_BRACKET_CL);
    setState(109);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Clear_statementContext ------------------------------------------------------------------

botvinaParser::Clear_statementContext::Clear_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Clear_statementContext::CLEAR_KEYWORD() {
  return getToken(botvinaParser::CLEAR_KEYWORD, 0);
}

tree::TerminalNode* botvinaParser::Clear_statementContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::Clear_statementContext::getRuleIndex() const {
  return botvinaParser::RuleClear_statement;
}

void botvinaParser::Clear_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClear_statement(this);
}

void botvinaParser::Clear_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClear_statement(this);
}

botvinaParser::Clear_statementContext* botvinaParser::clear_statement() {
  Clear_statementContext *_localctx = _tracker.createInstance<Clear_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, botvinaParser::RuleClear_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(botvinaParser::CLEAR_KEYWORD);
    setState(112);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exit_statementContext ------------------------------------------------------------------

botvinaParser::Exit_statementContext::Exit_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Exit_statementContext::EXIT_KEYWORD() {
  return getToken(botvinaParser::EXIT_KEYWORD, 0);
}

tree::TerminalNode* botvinaParser::Exit_statementContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::Exit_statementContext::getRuleIndex() const {
  return botvinaParser::RuleExit_statement;
}

void botvinaParser::Exit_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExit_statement(this);
}

void botvinaParser::Exit_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExit_statement(this);
}

botvinaParser::Exit_statementContext* botvinaParser::exit_statement() {
  Exit_statementContext *_localctx = _tracker.createInstance<Exit_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, botvinaParser::RuleExit_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(botvinaParser::EXIT_KEYWORD);
    setState(115);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

botvinaParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Return_statementContext::RETURN_KEYWORD() {
  return getToken(botvinaParser::RETURN_KEYWORD, 0);
}

botvinaParser::ExprContext* botvinaParser::Return_statementContext::expr() {
  return getRuleContext<botvinaParser::ExprContext>(0);
}

tree::TerminalNode* botvinaParser::Return_statementContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::Return_statementContext::getRuleIndex() const {
  return botvinaParser::RuleReturn_statement;
}

void botvinaParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void botvinaParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}

botvinaParser::Return_statementContext* botvinaParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, botvinaParser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(botvinaParser::RETURN_KEYWORD);
    setState(118);
    expr();
    setState(119);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

botvinaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::BlockContext::SET_BRACKET_OP() {
  return getToken(botvinaParser::SET_BRACKET_OP, 0);
}

tree::TerminalNode* botvinaParser::BlockContext::SET_BRACKET_CL() {
  return getToken(botvinaParser::SET_BRACKET_CL, 0);
}

std::vector<botvinaParser::StatementContext *> botvinaParser::BlockContext::statement() {
  return getRuleContexts<botvinaParser::StatementContext>();
}

botvinaParser::StatementContext* botvinaParser::BlockContext::statement(size_t i) {
  return getRuleContext<botvinaParser::StatementContext>(i);
}

botvinaParser::Return_statementContext* botvinaParser::BlockContext::return_statement() {
  return getRuleContext<botvinaParser::Return_statementContext>(0);
}


size_t botvinaParser::BlockContext::getRuleIndex() const {
  return botvinaParser::RuleBlock;
}

void botvinaParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void botvinaParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

botvinaParser::BlockContext* botvinaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 22, botvinaParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(botvinaParser::SET_BRACKET_OP);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(122);
        statement(); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == botvinaParser::RETURN_KEYWORD) {
      setState(128);
      return_statement();
    }
    setState(131);
    match(botvinaParser::SET_BRACKET_CL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanContext ------------------------------------------------------------------

botvinaParser::BooleanContext::BooleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::BooleanContext::FALSE_KEYWORD() {
  return getToken(botvinaParser::FALSE_KEYWORD, 0);
}

tree::TerminalNode* botvinaParser::BooleanContext::TRUE_KEYWORD() {
  return getToken(botvinaParser::TRUE_KEYWORD, 0);
}


size_t botvinaParser::BooleanContext::getRuleIndex() const {
  return botvinaParser::RuleBoolean;
}

void botvinaParser::BooleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean(this);
}

void botvinaParser::BooleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean(this);
}

botvinaParser::BooleanContext* botvinaParser::boolean() {
  BooleanContext *_localctx = _tracker.createInstance<BooleanContext>(_ctx, getState());
  enterRule(_localctx, 24, botvinaParser::RuleBoolean);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    _la = _input->LA(1);
    if (!(_la == botvinaParser::TRUE_KEYWORD

    || _la == botvinaParser::FALSE_KEYWORD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

botvinaParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::IntegerContext::INTEGER() {
  return getToken(botvinaParser::INTEGER, 0);
}


size_t botvinaParser::IntegerContext::getRuleIndex() const {
  return botvinaParser::RuleInteger;
}

void botvinaParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}

void botvinaParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

botvinaParser::IntegerContext* botvinaParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 26, botvinaParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(botvinaParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

botvinaParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::IdentifierContext::IDENTIFIER() {
  return getToken(botvinaParser::IDENTIFIER, 0);
}


size_t botvinaParser::IdentifierContext::getRuleIndex() const {
  return botvinaParser::RuleIdentifier;
}

void botvinaParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void botvinaParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

botvinaParser::IdentifierContext* botvinaParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 28, botvinaParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(botvinaParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

botvinaParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::ConditionContext::RND_BRACKET_OP() {
  return getToken(botvinaParser::RND_BRACKET_OP, 0);
}

std::vector<botvinaParser::ExprContext *> botvinaParser::ConditionContext::expr() {
  return getRuleContexts<botvinaParser::ExprContext>();
}

botvinaParser::ExprContext* botvinaParser::ConditionContext::expr(size_t i) {
  return getRuleContext<botvinaParser::ExprContext>(i);
}

botvinaParser::Logic_exprContext* botvinaParser::ConditionContext::logic_expr() {
  return getRuleContext<botvinaParser::Logic_exprContext>(0);
}

tree::TerminalNode* botvinaParser::ConditionContext::RND_BRACKET_CL() {
  return getToken(botvinaParser::RND_BRACKET_CL, 0);
}


size_t botvinaParser::ConditionContext::getRuleIndex() const {
  return botvinaParser::RuleCondition;
}

void botvinaParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void botvinaParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

botvinaParser::ConditionContext* botvinaParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 30, botvinaParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(botvinaParser::RND_BRACKET_OP);
    setState(140);
    expr();
    setState(141);
    logic_expr();
    setState(142);
    expr();
    setState(143);
    match(botvinaParser::RND_BRACKET_CL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PositionContext ------------------------------------------------------------------

botvinaParser::PositionContext::PositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::PositionContext::RND_BRACKET_OP() {
  return getToken(botvinaParser::RND_BRACKET_OP, 0);
}

std::vector<botvinaParser::Math_exprContext *> botvinaParser::PositionContext::math_expr() {
  return getRuleContexts<botvinaParser::Math_exprContext>();
}

botvinaParser::Math_exprContext* botvinaParser::PositionContext::math_expr(size_t i) {
  return getRuleContext<botvinaParser::Math_exprContext>(i);
}

tree::TerminalNode* botvinaParser::PositionContext::CMM() {
  return getToken(botvinaParser::CMM, 0);
}

tree::TerminalNode* botvinaParser::PositionContext::RND_BRACKET_CL() {
  return getToken(botvinaParser::RND_BRACKET_CL, 0);
}


size_t botvinaParser::PositionContext::getRuleIndex() const {
  return botvinaParser::RulePosition;
}

void botvinaParser::PositionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosition(this);
}

void botvinaParser::PositionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosition(this);
}

botvinaParser::PositionContext* botvinaParser::position() {
  PositionContext *_localctx = _tracker.createInstance<PositionContext>(_ctx, getState());
  enterRule(_localctx, 32, botvinaParser::RulePosition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(botvinaParser::RND_BRACKET_OP);
    setState(146);
    math_expr();
    setState(147);
    match(botvinaParser::CMM);
    setState(148);
    math_expr();
    setState(149);
    match(botvinaParser::RND_BRACKET_CL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

botvinaParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::IntegerContext* botvinaParser::AtomContext::integer() {
  return getRuleContext<botvinaParser::IntegerContext>(0);
}

botvinaParser::BooleanContext* botvinaParser::AtomContext::boolean() {
  return getRuleContext<botvinaParser::BooleanContext>(0);
}

botvinaParser::Function_applyContext* botvinaParser::AtomContext::function_apply() {
  return getRuleContext<botvinaParser::Function_applyContext>(0);
}

botvinaParser::Function_literalContext* botvinaParser::AtomContext::function_literal() {
  return getRuleContext<botvinaParser::Function_literalContext>(0);
}

botvinaParser::IdentifierContext* botvinaParser::AtomContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}


size_t botvinaParser::AtomContext::getRuleIndex() const {
  return botvinaParser::RuleAtom;
}

void botvinaParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void botvinaParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

botvinaParser::AtomContext* botvinaParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 34, botvinaParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(151);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(152);
      boolean();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(153);
      function_apply();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(154);
      function_literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(155);
      identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Predefined_figureContext ------------------------------------------------------------------

botvinaParser::Predefined_figureContext::Predefined_figureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::QuadrangleContext* botvinaParser::Predefined_figureContext::quadrangle() {
  return getRuleContext<botvinaParser::QuadrangleContext>(0);
}

botvinaParser::PointContext* botvinaParser::Predefined_figureContext::point() {
  return getRuleContext<botvinaParser::PointContext>(0);
}

botvinaParser::CircleContext* botvinaParser::Predefined_figureContext::circle() {
  return getRuleContext<botvinaParser::CircleContext>(0);
}

botvinaParser::LineContext* botvinaParser::Predefined_figureContext::line() {
  return getRuleContext<botvinaParser::LineContext>(0);
}


size_t botvinaParser::Predefined_figureContext::getRuleIndex() const {
  return botvinaParser::RulePredefined_figure;
}

void botvinaParser::Predefined_figureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredefined_figure(this);
}

void botvinaParser::Predefined_figureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredefined_figure(this);
}

botvinaParser::Predefined_figureContext* botvinaParser::predefined_figure() {
  Predefined_figureContext *_localctx = _tracker.createInstance<Predefined_figureContext>(_ctx, getState());
  enterRule(_localctx, 36, botvinaParser::RulePredefined_figure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case botvinaParser::QUADRANGLE_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(158);
        quadrangle();
        break;
      }

      case botvinaParser::POINT_KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(159);
        point();
        break;
      }

      case botvinaParser::CIRCLE_KEYWORD: {
        enterOuterAlt(_localctx, 3);
        setState(160);
        circle();
        break;
      }

      case botvinaParser::LINE_KEYWORD: {
        enterOuterAlt(_localctx, 4);
        setState(161);
        line();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CircleContext ------------------------------------------------------------------

botvinaParser::CircleContext::CircleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::CircleContext::CIRCLE_KEYWORD() {
  return getToken(botvinaParser::CIRCLE_KEYWORD, 0);
}

botvinaParser::IdentifierContext* botvinaParser::CircleContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

botvinaParser::PositionContext* botvinaParser::CircleContext::position() {
  return getRuleContext<botvinaParser::PositionContext>(0);
}

botvinaParser::SizeContext* botvinaParser::CircleContext::size() {
  return getRuleContext<botvinaParser::SizeContext>(0);
}

botvinaParser::ColorContext* botvinaParser::CircleContext::color() {
  return getRuleContext<botvinaParser::ColorContext>(0);
}


size_t botvinaParser::CircleContext::getRuleIndex() const {
  return botvinaParser::RuleCircle;
}

void botvinaParser::CircleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCircle(this);
}

void botvinaParser::CircleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCircle(this);
}

botvinaParser::CircleContext* botvinaParser::circle() {
  CircleContext *_localctx = _tracker.createInstance<CircleContext>(_ctx, getState());
  enterRule(_localctx, 38, botvinaParser::RuleCircle);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(botvinaParser::CIRCLE_KEYWORD);
    setState(165);
    identifier();
    setState(166);
    position();
    setState(167);
    size();
    setState(168);
    color();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuadrangleContext ------------------------------------------------------------------

botvinaParser::QuadrangleContext::QuadrangleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::QuadrangleContext::QUADRANGLE_KEYWORD() {
  return getToken(botvinaParser::QUADRANGLE_KEYWORD, 0);
}

botvinaParser::IdentifierContext* botvinaParser::QuadrangleContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

botvinaParser::PositionContext* botvinaParser::QuadrangleContext::position() {
  return getRuleContext<botvinaParser::PositionContext>(0);
}

botvinaParser::SizeContext* botvinaParser::QuadrangleContext::size() {
  return getRuleContext<botvinaParser::SizeContext>(0);
}

botvinaParser::ColorContext* botvinaParser::QuadrangleContext::color() {
  return getRuleContext<botvinaParser::ColorContext>(0);
}


size_t botvinaParser::QuadrangleContext::getRuleIndex() const {
  return botvinaParser::RuleQuadrangle;
}

void botvinaParser::QuadrangleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuadrangle(this);
}

void botvinaParser::QuadrangleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuadrangle(this);
}

botvinaParser::QuadrangleContext* botvinaParser::quadrangle() {
  QuadrangleContext *_localctx = _tracker.createInstance<QuadrangleContext>(_ctx, getState());
  enterRule(_localctx, 40, botvinaParser::RuleQuadrangle);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(botvinaParser::QUADRANGLE_KEYWORD);
    setState(171);
    identifier();
    setState(172);
    position();
    setState(173);
    size();
    setState(174);
    color();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointContext ------------------------------------------------------------------

botvinaParser::PointContext::PointContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::PointContext::POINT_KEYWORD() {
  return getToken(botvinaParser::POINT_KEYWORD, 0);
}

botvinaParser::IdentifierContext* botvinaParser::PointContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

botvinaParser::PositionContext* botvinaParser::PointContext::position() {
  return getRuleContext<botvinaParser::PositionContext>(0);
}

botvinaParser::ColorContext* botvinaParser::PointContext::color() {
  return getRuleContext<botvinaParser::ColorContext>(0);
}


size_t botvinaParser::PointContext::getRuleIndex() const {
  return botvinaParser::RulePoint;
}

void botvinaParser::PointContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPoint(this);
}

void botvinaParser::PointContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPoint(this);
}

botvinaParser::PointContext* botvinaParser::point() {
  PointContext *_localctx = _tracker.createInstance<PointContext>(_ctx, getState());
  enterRule(_localctx, 42, botvinaParser::RulePoint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(botvinaParser::POINT_KEYWORD);
    setState(177);
    identifier();
    setState(178);
    position();
    setState(179);
    color();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

botvinaParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::LineContext::LINE_KEYWORD() {
  return getToken(botvinaParser::LINE_KEYWORD, 0);
}

botvinaParser::IdentifierContext* botvinaParser::LineContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

botvinaParser::ColorContext* botvinaParser::LineContext::color() {
  return getRuleContext<botvinaParser::ColorContext>(0);
}

std::vector<botvinaParser::PositionContext *> botvinaParser::LineContext::position() {
  return getRuleContexts<botvinaParser::PositionContext>();
}

botvinaParser::PositionContext* botvinaParser::LineContext::position(size_t i) {
  return getRuleContext<botvinaParser::PositionContext>(i);
}


size_t botvinaParser::LineContext::getRuleIndex() const {
  return botvinaParser::RuleLine;
}

void botvinaParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void botvinaParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}

botvinaParser::LineContext* botvinaParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 44, botvinaParser::RuleLine);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(botvinaParser::LINE_KEYWORD);
    setState(182);
    identifier();
    setState(184); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(183);
      position();
      setState(186); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == botvinaParser::RND_BRACKET_OP);
    setState(188);
    color();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DrawContext ------------------------------------------------------------------

botvinaParser::DrawContext::DrawContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::DrawContext::DRAW_KEYWORD() {
  return getToken(botvinaParser::DRAW_KEYWORD, 0);
}

botvinaParser::Predefined_figureContext* botvinaParser::DrawContext::predefined_figure() {
  return getRuleContext<botvinaParser::Predefined_figureContext>(0);
}

tree::TerminalNode* botvinaParser::DrawContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::DrawContext::getRuleIndex() const {
  return botvinaParser::RuleDraw;
}

void botvinaParser::DrawContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDraw(this);
}

void botvinaParser::DrawContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDraw(this);
}

botvinaParser::DrawContext* botvinaParser::draw() {
  DrawContext *_localctx = _tracker.createInstance<DrawContext>(_ctx, getState());
  enterRule(_localctx, 46, botvinaParser::RuleDraw);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(botvinaParser::DRAW_KEYWORD);
    setState(191);
    predefined_figure();
    setState(192);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveContext ------------------------------------------------------------------

botvinaParser::MoveContext::MoveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::MoveContext::MOVE_KEYWORD() {
  return getToken(botvinaParser::MOVE_KEYWORD, 0);
}

botvinaParser::IdentifierContext* botvinaParser::MoveContext::identifier() {
  return getRuleContext<botvinaParser::IdentifierContext>(0);
}

botvinaParser::PositionContext* botvinaParser::MoveContext::position() {
  return getRuleContext<botvinaParser::PositionContext>(0);
}

tree::TerminalNode* botvinaParser::MoveContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}


size_t botvinaParser::MoveContext::getRuleIndex() const {
  return botvinaParser::RuleMove;
}

void botvinaParser::MoveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMove(this);
}

void botvinaParser::MoveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMove(this);
}

botvinaParser::MoveContext* botvinaParser::move() {
  MoveContext *_localctx = _tracker.createInstance<MoveContext>(_ctx, getState());
  enterRule(_localctx, 48, botvinaParser::RuleMove);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(botvinaParser::MOVE_KEYWORD);
    setState(195);
    identifier();
    setState(196);
    position();
    setState(197);
    match(botvinaParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SizeContext ------------------------------------------------------------------

botvinaParser::SizeContext::SizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::IntegerContext* botvinaParser::SizeContext::integer() {
  return getRuleContext<botvinaParser::IntegerContext>(0);
}


size_t botvinaParser::SizeContext::getRuleIndex() const {
  return botvinaParser::RuleSize;
}

void botvinaParser::SizeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSize(this);
}

void botvinaParser::SizeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSize(this);
}

botvinaParser::SizeContext* botvinaParser::size() {
  SizeContext *_localctx = _tracker.createInstance<SizeContext>(_ctx, getState());
  enterRule(_localctx, 50, botvinaParser::RuleSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    integer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColorContext ------------------------------------------------------------------

botvinaParser::ColorContext::ColorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::ColorContext::BLACK_KEYWORD() {
  return getToken(botvinaParser::BLACK_KEYWORD, 0);
}

tree::TerminalNode* botvinaParser::ColorContext::RED_KEYWORD() {
  return getToken(botvinaParser::RED_KEYWORD, 0);
}

tree::TerminalNode* botvinaParser::ColorContext::BLUE_KEYWORD() {
  return getToken(botvinaParser::BLUE_KEYWORD, 0);
}

tree::TerminalNode* botvinaParser::ColorContext::GREEN_KEYWORD() {
  return getToken(botvinaParser::GREEN_KEYWORD, 0);
}


size_t botvinaParser::ColorContext::getRuleIndex() const {
  return botvinaParser::RuleColor;
}

void botvinaParser::ColorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColor(this);
}

void botvinaParser::ColorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColor(this);
}

botvinaParser::ColorContext* botvinaParser::color() {
  ColorContext *_localctx = _tracker.createInstance<ColorContext>(_ctx, getState());
  enterRule(_localctx, 52, botvinaParser::RuleColor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::BLACK_KEYWORD)
      | (1ULL << botvinaParser::RED_KEYWORD)
      | (1ULL << botvinaParser::BLUE_KEYWORD)
      | (1ULL << botvinaParser::GREEN_KEYWORD))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

botvinaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

botvinaParser::Math_exprContext* botvinaParser::ExprContext::math_expr() {
  return getRuleContext<botvinaParser::Math_exprContext>(0);
}

botvinaParser::Logic_exprContext* botvinaParser::ExprContext::logic_expr() {
  return getRuleContext<botvinaParser::Logic_exprContext>(0);
}


size_t botvinaParser::ExprContext::getRuleIndex() const {
  return botvinaParser::RuleExpr;
}

void botvinaParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void botvinaParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

botvinaParser::ExprContext* botvinaParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 54, botvinaParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(203);
      math_expr();
      break;
    }

    case 2: {
      setState(204);
      logic_expr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Math_exprContext ------------------------------------------------------------------

botvinaParser::Math_exprContext::Math_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::AtomContext *> botvinaParser::Math_exprContext::atom() {
  return getRuleContexts<botvinaParser::AtomContext>();
}

botvinaParser::AtomContext* botvinaParser::Math_exprContext::atom(size_t i) {
  return getRuleContext<botvinaParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Math_exprContext::MUL_OPERATOR() {
  return getTokens(botvinaParser::MUL_OPERATOR);
}

tree::TerminalNode* botvinaParser::Math_exprContext::MUL_OPERATOR(size_t i) {
  return getToken(botvinaParser::MUL_OPERATOR, i);
}

std::vector<tree::TerminalNode *> botvinaParser::Math_exprContext::ADD_OPERATOR() {
  return getTokens(botvinaParser::ADD_OPERATOR);
}

tree::TerminalNode* botvinaParser::Math_exprContext::ADD_OPERATOR(size_t i) {
  return getToken(botvinaParser::ADD_OPERATOR, i);
}


size_t botvinaParser::Math_exprContext::getRuleIndex() const {
  return botvinaParser::RuleMath_expr;
}

void botvinaParser::Math_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMath_expr(this);
}

void botvinaParser::Math_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMath_expr(this);
}

botvinaParser::Math_exprContext* botvinaParser::math_expr() {
  Math_exprContext *_localctx = _tracker.createInstance<Math_exprContext>(_ctx, getState());
  enterRule(_localctx, 56, botvinaParser::RuleMath_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    atom();
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::MUL_OPERATOR

    || _la == botvinaParser::ADD_OPERATOR) {
      setState(208);
      _la = _input->LA(1);
      if (!(_la == botvinaParser::MUL_OPERATOR

      || _la == botvinaParser::ADD_OPERATOR)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(209);
      atom();
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logic_exprContext ------------------------------------------------------------------

botvinaParser::Logic_exprContext::Logic_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::AtomContext *> botvinaParser::Logic_exprContext::atom() {
  return getRuleContexts<botvinaParser::AtomContext>();
}

botvinaParser::AtomContext* botvinaParser::Logic_exprContext::atom(size_t i) {
  return getRuleContext<botvinaParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Logic_exprContext::RELATION_OPERATOR() {
  return getTokens(botvinaParser::RELATION_OPERATOR);
}

tree::TerminalNode* botvinaParser::Logic_exprContext::RELATION_OPERATOR(size_t i) {
  return getToken(botvinaParser::RELATION_OPERATOR, i);
}

std::vector<tree::TerminalNode *> botvinaParser::Logic_exprContext::EQ_OPERATOR() {
  return getTokens(botvinaParser::EQ_OPERATOR);
}

tree::TerminalNode* botvinaParser::Logic_exprContext::EQ_OPERATOR(size_t i) {
  return getToken(botvinaParser::EQ_OPERATOR, i);
}

std::vector<tree::TerminalNode *> botvinaParser::Logic_exprContext::OR_OPERATOR() {
  return getTokens(botvinaParser::OR_OPERATOR);
}

tree::TerminalNode* botvinaParser::Logic_exprContext::OR_OPERATOR(size_t i) {
  return getToken(botvinaParser::OR_OPERATOR, i);
}

std::vector<tree::TerminalNode *> botvinaParser::Logic_exprContext::AND_OPERATOR() {
  return getTokens(botvinaParser::AND_OPERATOR);
}

tree::TerminalNode* botvinaParser::Logic_exprContext::AND_OPERATOR(size_t i) {
  return getToken(botvinaParser::AND_OPERATOR, i);
}


size_t botvinaParser::Logic_exprContext::getRuleIndex() const {
  return botvinaParser::RuleLogic_expr;
}

void botvinaParser::Logic_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogic_expr(this);
}

void botvinaParser::Logic_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogic_expr(this);
}

botvinaParser::Logic_exprContext* botvinaParser::logic_expr() {
  Logic_exprContext *_localctx = _tracker.createInstance<Logic_exprContext>(_ctx, getState());
  enterRule(_localctx, 58, botvinaParser::RuleLogic_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    atom();
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::RELATION_OPERATOR)
      | (1ULL << botvinaParser::EQ_OPERATOR)
      | (1ULL << botvinaParser::AND_OPERATOR)
      | (1ULL << botvinaParser::OR_OPERATOR))) != 0)) {
      setState(216);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << botvinaParser::RELATION_OPERATOR)
        | (1ULL << botvinaParser::EQ_OPERATOR)
        | (1ULL << botvinaParser::AND_OPERATOR)
        | (1ULL << botvinaParser::OR_OPERATOR))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(217);
      atom();
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

botvinaParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::ExprContext *> botvinaParser::Parameter_listContext::expr() {
  return getRuleContexts<botvinaParser::ExprContext>();
}

botvinaParser::ExprContext* botvinaParser::Parameter_listContext::expr(size_t i) {
  return getRuleContext<botvinaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Parameter_listContext::CMM() {
  return getTokens(botvinaParser::CMM);
}

tree::TerminalNode* botvinaParser::Parameter_listContext::CMM(size_t i) {
  return getToken(botvinaParser::CMM, i);
}


size_t botvinaParser::Parameter_listContext::getRuleIndex() const {
  return botvinaParser::RuleParameter_list;
}

void botvinaParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void botvinaParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}

botvinaParser::Parameter_listContext* botvinaParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 60, botvinaParser::RuleParameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::INTEGER)
      | (1ULL << botvinaParser::FUNCTION_KEYWORD)
      | (1ULL << botvinaParser::TRUE_KEYWORD)
      | (1ULL << botvinaParser::FALSE_KEYWORD)
      | (1ULL << botvinaParser::IDENTIFIER))) != 0)) {
      setState(223);
      expr();
      setState(228);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == botvinaParser::CMM) {
        setState(224);
        match(botvinaParser::CMM);
        setState(225);
        expr();
        setState(230);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> botvinaParser::_decisionToDFA;
atn::PredictionContextCache botvinaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN botvinaParser::_atn;
std::vector<uint16_t> botvinaParser::_serializedATN;

std::vector<std::string> botvinaParser::_ruleNames = {
  "input_text", "statement", "assign_statement", "if_statement", "loop_statement", 
  "operand", "function_literal", "function_apply", "clear_statement", "exit_statement", 
  "return_statement", "block", "boolean", "integer", "identifier", "condition", 
  "position", "atom", "predefined_figure", "circle", "quadrangle", "point", 
  "line", "draw", "move", "size", "color", "expr", "math_expr", "logic_expr", 
  "parameter_list"
};

std::vector<std::string> botvinaParser::_literalNames = {
  "", "", "','", "'('", "')'", "'{'", "'}'", "';'", "'='", "'if'", "'func'", 
  "'clear'", "'exit'", "'return'", "'True'", "'False'", "'circle'", "'quadrangle'", 
  "'point'", "'line'", "'draw'", "'move'", "'black'", "'red'", "'blue'", 
  "'green'", "'when'", "", "", "", "", "'&&'", "'||'"
};

std::vector<std::string> botvinaParser::_symbolicNames = {
  "", "INTEGER", "CMM", "RND_BRACKET_OP", "RND_BRACKET_CL", "SET_BRACKET_OP", 
  "SET_BRACKET_CL", "SEMICOLON", "EQ", "IF_KEYWORD", "FUNCTION_KEYWORD", 
  "CLEAR_KEYWORD", "EXIT_KEYWORD", "RETURN_KEYWORD", "TRUE_KEYWORD", "FALSE_KEYWORD", 
  "CIRCLE_KEYWORD", "QUADRANGLE_KEYWORD", "POINT_KEYWORD", "LINE_KEYWORD", 
  "DRAW_KEYWORD", "MOVE_KEYWORD", "BLACK_KEYWORD", "RED_KEYWORD", "BLUE_KEYWORD", 
  "GREEN_KEYWORD", "WHEN_KEYWORD", "MUL_OPERATOR", "ADD_OPERATOR", "RELATION_OPERATOR", 
  "EQ_OPERATOR", "AND_OPERATOR", "OR_OPERATOR", "IDENTIFIER", "WS"
};

dfa::Vocabulary botvinaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> botvinaParser::_tokenNames;

botvinaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x24, 0xec, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 
    0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x7, 0x2, 0x42, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x45, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x52, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x63, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x7e, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x81, 0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 0x84, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x9f, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xa5, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x6, 0x18, 0xbb, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0xbc, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0xd0, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0xd5, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0xd8, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0xdd, 0xa, 
    0x1f, 0xc, 0x1f, 0xe, 0x1f, 0xe0, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x7, 0x20, 0xe5, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0xe8, 0xb, 0x20, 
    0x5, 0x20, 0xea, 0xa, 0x20, 0x3, 0x20, 0x2, 0x2, 0x21, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x2, 0x6, 0x3, 0x2, 0x10, 0x11, 0x3, 0x2, 0x18, 
    0x1b, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1f, 0x22, 0x2, 0xe5, 0x2, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x51, 0x3, 0x2, 0x2, 0x2, 0x6, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x58, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x62, 0x3, 0x2, 0x2, 0x2, 0xe, 0x64, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x71, 0x3, 0x2, 0x2, 0x2, 0x14, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x77, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x20, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x93, 0x3, 0x2, 0x2, 0x2, 0x24, 0x9e, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x32, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x36, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xe9, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x42, 0x5, 0x4, 0x3, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x2, 0x2, 0x3, 0x47, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x52, 0x5, 0x6, 0x4, 0x2, 0x49, 0x52, 0x5, 0xa, 0x6, 
    0x2, 0x4a, 0x52, 0x5, 0x8, 0x5, 0x2, 0x4b, 0x52, 0x5, 0xe, 0x8, 0x2, 
    0x4c, 0x52, 0x5, 0x10, 0x9, 0x2, 0x4d, 0x52, 0x5, 0xc, 0x7, 0x2, 0x4e, 
    0x52, 0x5, 0x12, 0xa, 0x2, 0x4f, 0x52, 0x5, 0x14, 0xb, 0x2, 0x50, 0x52, 
    0x5, 0x16, 0xc, 0x2, 0x51, 0x48, 0x3, 0x2, 0x2, 0x2, 0x51, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x51, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x5, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x54, 0x5, 0x1e, 0x10, 0x2, 0x54, 0x55, 0x7, 0xa, 0x2, 0x2, 0x55, 0x56, 
    0x5, 0x3a, 0x1e, 0x2, 0x56, 0x57, 0x7, 0x9, 0x2, 0x2, 0x57, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0xb, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x20, 
    0x11, 0x2, 0x5a, 0x5b, 0x5, 0x18, 0xd, 0x2, 0x5b, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5d, 0x7, 0x1c, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x20, 0x11, 0x2, 
    0x5e, 0x5f, 0x5, 0x18, 0xd, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x63, 0x5, 0x30, 0x19, 0x2, 0x61, 0x63, 0x5, 0x32, 0x1a, 0x2, 0x62, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0xc, 0x2, 0x2, 0x65, 0x66, 0x5, 
    0x1e, 0x10, 0x2, 0x66, 0x67, 0x7, 0x5, 0x2, 0x2, 0x67, 0x68, 0x5, 0x3e, 
    0x20, 0x2, 0x68, 0x69, 0x7, 0x6, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x18, 0xd, 
    0x2, 0x6a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x1e, 0x10, 0x2, 
    0x6c, 0x6d, 0x7, 0x5, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x3e, 0x20, 0x2, 0x6e, 
    0x6f, 0x7, 0x6, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x9, 0x2, 0x2, 0x70, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0xd, 0x2, 0x2, 0x72, 0x73, 0x7, 
    0x9, 0x2, 0x2, 0x73, 0x13, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0xe, 
    0x2, 0x2, 0x75, 0x76, 0x7, 0x9, 0x2, 0x2, 0x76, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x78, 0x7, 0xf, 0x2, 0x2, 0x78, 0x79, 0x5, 0x38, 0x1d, 0x2, 
    0x79, 0x7a, 0x7, 0x9, 0x2, 0x2, 0x7a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7f, 0x7, 0x7, 0x2, 0x2, 0x7c, 0x7e, 0x5, 0x4, 0x3, 0x2, 0x7d, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 0x5, 0x16, 0xc, 
    0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x8, 0x2, 0x2, 0x86, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x9, 0x2, 0x2, 0x2, 0x88, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x3, 0x2, 0x2, 0x8a, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x23, 0x2, 0x2, 0x8c, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x7, 0x5, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x38, 0x1d, 
    0x2, 0x8f, 0x90, 0x5, 0x3c, 0x1f, 0x2, 0x90, 0x91, 0x5, 0x38, 0x1d, 
    0x2, 0x91, 0x92, 0x7, 0x6, 0x2, 0x2, 0x92, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x5, 0x2, 0x2, 0x94, 0x95, 0x5, 0x3a, 0x1e, 0x2, 0x95, 
    0x96, 0x7, 0x4, 0x2, 0x2, 0x96, 0x97, 0x5, 0x3a, 0x1e, 0x2, 0x97, 0x98, 
    0x7, 0x6, 0x2, 0x2, 0x98, 0x23, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9f, 0x5, 
    0x1c, 0xf, 0x2, 0x9a, 0x9f, 0x5, 0x1a, 0xe, 0x2, 0x9b, 0x9f, 0x5, 0x10, 
    0x9, 0x2, 0x9c, 0x9f, 0x5, 0xe, 0x8, 0x2, 0x9d, 0x9f, 0x5, 0x1e, 0x10, 
    0x2, 0x9e, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa5, 
    0x5, 0x2a, 0x16, 0x2, 0xa1, 0xa5, 0x5, 0x2c, 0x17, 0x2, 0xa2, 0xa5, 
    0x5, 0x28, 0x15, 0x2, 0xa3, 0xa5, 0x5, 0x2e, 0x18, 0x2, 0xa4, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa7, 0x7, 0x12, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x1e, 0x10, 
    0x2, 0xa8, 0xa9, 0x5, 0x22, 0x12, 0x2, 0xa9, 0xaa, 0x5, 0x34, 0x1b, 
    0x2, 0xaa, 0xab, 0x5, 0x36, 0x1c, 0x2, 0xab, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xad, 0x7, 0x13, 0x2, 0x2, 0xad, 0xae, 0x5, 0x1e, 0x10, 0x2, 0xae, 
    0xaf, 0x5, 0x22, 0x12, 0x2, 0xaf, 0xb0, 0x5, 0x34, 0x1b, 0x2, 0xb0, 
    0xb1, 0x5, 0x36, 0x1c, 0x2, 0xb1, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
    0x7, 0x14, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0x1e, 0x10, 0x2, 0xb4, 0xb5, 0x5, 
    0x22, 0x12, 0x2, 0xb5, 0xb6, 0x5, 0x36, 0x1c, 0x2, 0xb6, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x15, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x1e, 
    0x10, 0x2, 0xb9, 0xbb, 0x5, 0x22, 0x12, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbf, 0x5, 0x36, 0x1c, 0x2, 0xbf, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x7, 0x16, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x26, 0x14, 0x2, 0xc2, 0xc3, 0x7, 
    0x9, 0x2, 0x2, 0xc3, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x17, 
    0x2, 0x2, 0xc5, 0xc6, 0x5, 0x1e, 0x10, 0x2, 0xc6, 0xc7, 0x5, 0x22, 0x12, 
    0x2, 0xc7, 0xc8, 0x7, 0x9, 0x2, 0x2, 0xc8, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xca, 0x5, 0x1c, 0xf, 0x2, 0xca, 0x35, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x9, 0x3, 0x2, 0x2, 0xcc, 0x37, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 
    0x5, 0x3a, 0x1e, 0x2, 0xce, 0xd0, 0x5, 0x3c, 0x1f, 0x2, 0xcf, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xd6, 0x5, 0x24, 0x13, 0x2, 0xd2, 0xd3, 0x9, 0x4, 
    0x2, 0x2, 0xd3, 0xd5, 0x5, 0x24, 0x13, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xde, 0x5, 0x24, 0x13, 0x2, 0xda, 0xdb, 
    0x9, 0x5, 0x2, 0x2, 0xdb, 0xdd, 0x5, 0x24, 0x13, 0x2, 0xdc, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe6, 0x5, 0x38, 0x1d, 0x2, 
    0xe2, 0xe3, 0x7, 0x4, 0x2, 0x2, 0xe3, 0xe5, 0x5, 0x38, 0x1d, 0x2, 0xe4, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0x43, 0x51, 0x62, 0x7f, 0x83, 0x9e, 0xa4, 0xbc, 0xcf, 0xd6, 
    0xde, 0xe6, 0xe9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

botvinaParser::Initializer botvinaParser::_init;
