
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
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::IF_KEYWORD)
      | (1ULL << botvinaParser::FUNCTION_KEYWORD)
      | (1ULL << botvinaParser::CLEAR_KEYWORD)
      | (1ULL << botvinaParser::EXIT_KEYWORD)
      | (1ULL << botvinaParser::DRAW_KEYWORD)
      | (1ULL << botvinaParser::WHEN_KEYWORD)
      | (1ULL << botvinaParser::IDENTIFIER))) != 0)) {
      setState(68);
      statement();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(74);
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

botvinaParser::DrawContext* botvinaParser::StatementContext::draw() {
  return getRuleContext<botvinaParser::DrawContext>(0);
}

botvinaParser::Clear_statementContext* botvinaParser::StatementContext::clear_statement() {
  return getRuleContext<botvinaParser::Clear_statementContext>(0);
}

botvinaParser::Exit_statementContext* botvinaParser::StatementContext::exit_statement() {
  return getRuleContext<botvinaParser::Exit_statementContext>(0);
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
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(76);
      assign_statement();
      break;
    }

    case 2: {
      setState(77);
      loop_statement();
      break;
    }

    case 3: {
      setState(78);
      if_statement();
      break;
    }

    case 4: {
      setState(79);
      function_literal();
      break;
    }

    case 5: {
      setState(80);
      function_apply();
      break;
    }

    case 6: {
      setState(81);
      draw();
      break;
    }

    case 7: {
      setState(82);
      clear_statement();
      break;
    }

    case 8: {
      setState(83);
      exit_statement();
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

botvinaParser::Add_exprContext* botvinaParser::Assign_statementContext::add_expr() {
  return getRuleContext<botvinaParser::Add_exprContext>(0);
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
    setState(86);
    identifier();
    setState(87);
    match(botvinaParser::EQ);
    setState(88);
    add_expr();
    setState(89);
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

botvinaParser::Operation_blockContext* botvinaParser::If_statementContext::operation_block() {
  return getRuleContext<botvinaParser::Operation_blockContext>(0);
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
    setState(91);
    match(botvinaParser::IF_KEYWORD);
    setState(92);
    condition();
    setState(93);
    operation_block();
   
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

botvinaParser::Operation_blockContext* botvinaParser::Loop_statementContext::operation_block() {
  return getRuleContext<botvinaParser::Operation_blockContext>(0);
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
    setState(95);
    match(botvinaParser::WHEN_KEYWORD);
    setState(96);
    condition();
    setState(97);
    operation_block();
   
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

tree::TerminalNode* botvinaParser::Function_literalContext::RND_BRACKET_CL() {
  return getToken(botvinaParser::RND_BRACKET_CL, 0);
}

botvinaParser::BlockContext* botvinaParser::Function_literalContext::block() {
  return getRuleContext<botvinaParser::BlockContext>(0);
}

botvinaParser::Identifier_listContext* botvinaParser::Function_literalContext::identifier_list() {
  return getRuleContext<botvinaParser::Identifier_listContext>(0);
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
  enterRule(_localctx, 10, botvinaParser::RuleFunction_literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(botvinaParser::FUNCTION_KEYWORD);
    setState(100);
    identifier();
    setState(101);
    match(botvinaParser::RND_BRACKET_OP);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == botvinaParser::IDENTIFIER) {
      setState(102);
      identifier_list();
    }
    setState(105);
    match(botvinaParser::RND_BRACKET_CL);
    setState(106);
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

tree::TerminalNode* botvinaParser::Function_applyContext::RND_BRACKET_CL() {
  return getToken(botvinaParser::RND_BRACKET_CL, 0);
}

tree::TerminalNode* botvinaParser::Function_applyContext::SEMICOLON() {
  return getToken(botvinaParser::SEMICOLON, 0);
}

botvinaParser::Parameter_listContext* botvinaParser::Function_applyContext::parameter_list() {
  return getRuleContext<botvinaParser::Parameter_listContext>(0);
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
  enterRule(_localctx, 12, botvinaParser::RuleFunction_apply);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    identifier();
    setState(109);
    match(botvinaParser::RND_BRACKET_OP);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::INTEGER)
      | (1ULL << botvinaParser::FUNCTION_KEYWORD)
      | (1ULL << botvinaParser::IDENTIFIER))) != 0)) {
      setState(110);
      parameter_list();
    }
    setState(113);
    match(botvinaParser::RND_BRACKET_CL);
    setState(114);
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
  enterRule(_localctx, 14, botvinaParser::RuleClear_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(botvinaParser::CLEAR_KEYWORD);
    setState(117);
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
  enterRule(_localctx, 16, botvinaParser::RuleExit_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(botvinaParser::EXIT_KEYWORD);
    setState(120);
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
  enterRule(_localctx, 18, botvinaParser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(botvinaParser::RETURN_KEYWORD);
    setState(123);
    expr();
    setState(124);
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
  enterRule(_localctx, 20, botvinaParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(botvinaParser::SET_BRACKET_OP);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::IF_KEYWORD)
      | (1ULL << botvinaParser::FUNCTION_KEYWORD)
      | (1ULL << botvinaParser::CLEAR_KEYWORD)
      | (1ULL << botvinaParser::EXIT_KEYWORD)
      | (1ULL << botvinaParser::DRAW_KEYWORD)
      | (1ULL << botvinaParser::WHEN_KEYWORD)
      | (1ULL << botvinaParser::IDENTIFIER))) != 0)) {
      setState(127);
      statement();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == botvinaParser::RETURN_KEYWORD) {
      setState(133);
      return_statement();
    }
    setState(136);
    match(botvinaParser::SET_BRACKET_CL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operation_blockContext ------------------------------------------------------------------

botvinaParser::Operation_blockContext::Operation_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* botvinaParser::Operation_blockContext::SET_BRACKET_OP() {
  return getToken(botvinaParser::SET_BRACKET_OP, 0);
}

tree::TerminalNode* botvinaParser::Operation_blockContext::SET_BRACKET_CL() {
  return getToken(botvinaParser::SET_BRACKET_CL, 0);
}

std::vector<botvinaParser::StatementContext *> botvinaParser::Operation_blockContext::statement() {
  return getRuleContexts<botvinaParser::StatementContext>();
}

botvinaParser::StatementContext* botvinaParser::Operation_blockContext::statement(size_t i) {
  return getRuleContext<botvinaParser::StatementContext>(i);
}


size_t botvinaParser::Operation_blockContext::getRuleIndex() const {
  return botvinaParser::RuleOperation_block;
}

void botvinaParser::Operation_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_block(this);
}

void botvinaParser::Operation_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_block(this);
}

botvinaParser::Operation_blockContext* botvinaParser::operation_block() {
  Operation_blockContext *_localctx = _tracker.createInstance<Operation_blockContext>(_ctx, getState());
  enterRule(_localctx, 22, botvinaParser::RuleOperation_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(botvinaParser::SET_BRACKET_OP);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << botvinaParser::IF_KEYWORD)
      | (1ULL << botvinaParser::FUNCTION_KEYWORD)
      | (1ULL << botvinaParser::CLEAR_KEYWORD)
      | (1ULL << botvinaParser::EXIT_KEYWORD)
      | (1ULL << botvinaParser::DRAW_KEYWORD)
      | (1ULL << botvinaParser::WHEN_KEYWORD)
      | (1ULL << botvinaParser::IDENTIFIER))) != 0)) {
      setState(139);
      statement();
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(145);
    match(botvinaParser::SET_BRACKET_CL);
   
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
  enterRule(_localctx, 24, botvinaParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
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
  enterRule(_localctx, 26, botvinaParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
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

botvinaParser::Or_exprContext* botvinaParser::ConditionContext::or_expr() {
  return getRuleContext<botvinaParser::Or_exprContext>(0);
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
  enterRule(_localctx, 28, botvinaParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(botvinaParser::RND_BRACKET_OP);
    setState(152);
    or_expr();
    setState(153);
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

std::vector<botvinaParser::Add_exprContext *> botvinaParser::PositionContext::add_expr() {
  return getRuleContexts<botvinaParser::Add_exprContext>();
}

botvinaParser::Add_exprContext* botvinaParser::PositionContext::add_expr(size_t i) {
  return getRuleContext<botvinaParser::Add_exprContext>(i);
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
  enterRule(_localctx, 30, botvinaParser::RulePosition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(botvinaParser::RND_BRACKET_OP);
    setState(156);
    add_expr();
    setState(157);
    match(botvinaParser::CMM);
    setState(158);
    add_expr();
    setState(159);
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
  enterRule(_localctx, 32, botvinaParser::RuleAtom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(161);
      integer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(162);
      function_apply();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(163);
      function_literal();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(164);
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
  enterRule(_localctx, 34, botvinaParser::RulePredefined_figure);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case botvinaParser::QUADRANGLE_KEYWORD: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        quadrangle();
        break;
      }

      case botvinaParser::POINT_KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(168);
        point();
        break;
      }

      case botvinaParser::CIRCLE_KEYWORD: {
        enterOuterAlt(_localctx, 3);
        setState(169);
        circle();
        break;
      }

      case botvinaParser::LINE_KEYWORD: {
        enterOuterAlt(_localctx, 4);
        setState(170);
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
  enterRule(_localctx, 36, botvinaParser::RuleCircle);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(botvinaParser::CIRCLE_KEYWORD);
    setState(174);
    position();
    setState(175);
    size();
    setState(176);
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
  enterRule(_localctx, 38, botvinaParser::RuleQuadrangle);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(botvinaParser::QUADRANGLE_KEYWORD);
    setState(179);
    position();
    setState(180);
    size();
    setState(181);
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
  enterRule(_localctx, 40, botvinaParser::RulePoint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(botvinaParser::POINT_KEYWORD);
    setState(184);
    position();
    setState(185);
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

std::vector<botvinaParser::PositionContext *> botvinaParser::LineContext::position() {
  return getRuleContexts<botvinaParser::PositionContext>();
}

botvinaParser::PositionContext* botvinaParser::LineContext::position(size_t i) {
  return getRuleContext<botvinaParser::PositionContext>(i);
}

botvinaParser::ColorContext* botvinaParser::LineContext::color() {
  return getRuleContext<botvinaParser::ColorContext>(0);
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
  enterRule(_localctx, 42, botvinaParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(botvinaParser::LINE_KEYWORD);
    setState(188);
    position();
    setState(189);
    position();
    setState(190);
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
  enterRule(_localctx, 44, botvinaParser::RuleDraw);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(botvinaParser::DRAW_KEYWORD);
    setState(193);
    predefined_figure();
    setState(194);
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
  enterRule(_localctx, 46, botvinaParser::RuleSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
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
  enterRule(_localctx, 48, botvinaParser::RuleColor);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
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

botvinaParser::Add_exprContext* botvinaParser::ExprContext::add_expr() {
  return getRuleContext<botvinaParser::Add_exprContext>(0);
}

botvinaParser::Or_exprContext* botvinaParser::ExprContext::or_expr() {
  return getRuleContext<botvinaParser::Or_exprContext>(0);
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
  enterRule(_localctx, 50, botvinaParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(200);
      add_expr();
      break;
    }

    case 2: {
      setState(201);
      or_expr();
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

//----------------- Add_exprContext ------------------------------------------------------------------

botvinaParser::Add_exprContext::Add_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::Mul_exprContext *> botvinaParser::Add_exprContext::mul_expr() {
  return getRuleContexts<botvinaParser::Mul_exprContext>();
}

botvinaParser::Mul_exprContext* botvinaParser::Add_exprContext::mul_expr(size_t i) {
  return getRuleContext<botvinaParser::Mul_exprContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Add_exprContext::ADD_OPERATOR() {
  return getTokens(botvinaParser::ADD_OPERATOR);
}

tree::TerminalNode* botvinaParser::Add_exprContext::ADD_OPERATOR(size_t i) {
  return getToken(botvinaParser::ADD_OPERATOR, i);
}


size_t botvinaParser::Add_exprContext::getRuleIndex() const {
  return botvinaParser::RuleAdd_expr;
}

void botvinaParser::Add_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_expr(this);
}

void botvinaParser::Add_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_expr(this);
}

botvinaParser::Add_exprContext* botvinaParser::add_expr() {
  Add_exprContext *_localctx = _tracker.createInstance<Add_exprContext>(_ctx, getState());
  enterRule(_localctx, 52, botvinaParser::RuleAdd_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    mul_expr();
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::ADD_OPERATOR) {
      setState(205);
      match(botvinaParser::ADD_OPERATOR);
      setState(206);
      mul_expr();
      setState(211);
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

//----------------- Mul_exprContext ------------------------------------------------------------------

botvinaParser::Mul_exprContext::Mul_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::AtomContext *> botvinaParser::Mul_exprContext::atom() {
  return getRuleContexts<botvinaParser::AtomContext>();
}

botvinaParser::AtomContext* botvinaParser::Mul_exprContext::atom(size_t i) {
  return getRuleContext<botvinaParser::AtomContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Mul_exprContext::MUL_OPERATOR() {
  return getTokens(botvinaParser::MUL_OPERATOR);
}

tree::TerminalNode* botvinaParser::Mul_exprContext::MUL_OPERATOR(size_t i) {
  return getToken(botvinaParser::MUL_OPERATOR, i);
}


size_t botvinaParser::Mul_exprContext::getRuleIndex() const {
  return botvinaParser::RuleMul_expr;
}

void botvinaParser::Mul_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_expr(this);
}

void botvinaParser::Mul_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_expr(this);
}

botvinaParser::Mul_exprContext* botvinaParser::mul_expr() {
  Mul_exprContext *_localctx = _tracker.createInstance<Mul_exprContext>(_ctx, getState());
  enterRule(_localctx, 54, botvinaParser::RuleMul_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    atom();
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::MUL_OPERATOR) {
      setState(213);
      match(botvinaParser::MUL_OPERATOR);
      setState(214);
      atom();
      setState(219);
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

//----------------- Or_exprContext ------------------------------------------------------------------

botvinaParser::Or_exprContext::Or_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::And_exprContext *> botvinaParser::Or_exprContext::and_expr() {
  return getRuleContexts<botvinaParser::And_exprContext>();
}

botvinaParser::And_exprContext* botvinaParser::Or_exprContext::and_expr(size_t i) {
  return getRuleContext<botvinaParser::And_exprContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Or_exprContext::OR_OPERATOR() {
  return getTokens(botvinaParser::OR_OPERATOR);
}

tree::TerminalNode* botvinaParser::Or_exprContext::OR_OPERATOR(size_t i) {
  return getToken(botvinaParser::OR_OPERATOR, i);
}


size_t botvinaParser::Or_exprContext::getRuleIndex() const {
  return botvinaParser::RuleOr_expr;
}

void botvinaParser::Or_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_expr(this);
}

void botvinaParser::Or_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_expr(this);
}

botvinaParser::Or_exprContext* botvinaParser::or_expr() {
  Or_exprContext *_localctx = _tracker.createInstance<Or_exprContext>(_ctx, getState());
  enterRule(_localctx, 56, botvinaParser::RuleOr_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    and_expr();
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::OR_OPERATOR) {
      setState(221);
      match(botvinaParser::OR_OPERATOR);
      setState(222);
      and_expr();
      setState(227);
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

//----------------- And_exprContext ------------------------------------------------------------------

botvinaParser::And_exprContext::And_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::Eq_exprContext *> botvinaParser::And_exprContext::eq_expr() {
  return getRuleContexts<botvinaParser::Eq_exprContext>();
}

botvinaParser::Eq_exprContext* botvinaParser::And_exprContext::eq_expr(size_t i) {
  return getRuleContext<botvinaParser::Eq_exprContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::And_exprContext::AND_OPERATOR() {
  return getTokens(botvinaParser::AND_OPERATOR);
}

tree::TerminalNode* botvinaParser::And_exprContext::AND_OPERATOR(size_t i) {
  return getToken(botvinaParser::AND_OPERATOR, i);
}


size_t botvinaParser::And_exprContext::getRuleIndex() const {
  return botvinaParser::RuleAnd_expr;
}

void botvinaParser::And_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expr(this);
}

void botvinaParser::And_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expr(this);
}

botvinaParser::And_exprContext* botvinaParser::and_expr() {
  And_exprContext *_localctx = _tracker.createInstance<And_exprContext>(_ctx, getState());
  enterRule(_localctx, 58, botvinaParser::RuleAnd_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    eq_expr();
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::AND_OPERATOR) {
      setState(229);
      match(botvinaParser::AND_OPERATOR);
      setState(230);
      eq_expr();
      setState(235);
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

//----------------- Eq_exprContext ------------------------------------------------------------------

botvinaParser::Eq_exprContext::Eq_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::Rel_exprContext *> botvinaParser::Eq_exprContext::rel_expr() {
  return getRuleContexts<botvinaParser::Rel_exprContext>();
}

botvinaParser::Rel_exprContext* botvinaParser::Eq_exprContext::rel_expr(size_t i) {
  return getRuleContext<botvinaParser::Rel_exprContext>(i);
}

tree::TerminalNode* botvinaParser::Eq_exprContext::EQ_OPERATOR() {
  return getToken(botvinaParser::EQ_OPERATOR, 0);
}


size_t botvinaParser::Eq_exprContext::getRuleIndex() const {
  return botvinaParser::RuleEq_expr;
}

void botvinaParser::Eq_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEq_expr(this);
}

void botvinaParser::Eq_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEq_expr(this);
}

botvinaParser::Eq_exprContext* botvinaParser::eq_expr() {
  Eq_exprContext *_localctx = _tracker.createInstance<Eq_exprContext>(_ctx, getState());
  enterRule(_localctx, 60, botvinaParser::RuleEq_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    rel_expr();
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == botvinaParser::EQ_OPERATOR) {
      setState(237);
      match(botvinaParser::EQ_OPERATOR);
      setState(238);
      rel_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_exprContext ------------------------------------------------------------------

botvinaParser::Rel_exprContext::Rel_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::AtomContext *> botvinaParser::Rel_exprContext::atom() {
  return getRuleContexts<botvinaParser::AtomContext>();
}

botvinaParser::AtomContext* botvinaParser::Rel_exprContext::atom(size_t i) {
  return getRuleContext<botvinaParser::AtomContext>(i);
}

tree::TerminalNode* botvinaParser::Rel_exprContext::RELATION_OPERATOR() {
  return getToken(botvinaParser::RELATION_OPERATOR, 0);
}


size_t botvinaParser::Rel_exprContext::getRuleIndex() const {
  return botvinaParser::RuleRel_expr;
}

void botvinaParser::Rel_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_expr(this);
}

void botvinaParser::Rel_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_expr(this);
}

botvinaParser::Rel_exprContext* botvinaParser::rel_expr() {
  Rel_exprContext *_localctx = _tracker.createInstance<Rel_exprContext>(_ctx, getState());
  enterRule(_localctx, 62, botvinaParser::RuleRel_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    atom();
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == botvinaParser::RELATION_OPERATOR) {
      setState(242);
      match(botvinaParser::RELATION_OPERATOR);
      setState(243);
      atom();
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
  enterRule(_localctx, 64, botvinaParser::RuleParameter_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    expr();
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::CMM) {
      setState(247);
      match(botvinaParser::CMM);
      setState(248);
      expr();
      setState(253);
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

//----------------- Identifier_listContext ------------------------------------------------------------------

botvinaParser::Identifier_listContext::Identifier_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<botvinaParser::IdentifierContext *> botvinaParser::Identifier_listContext::identifier() {
  return getRuleContexts<botvinaParser::IdentifierContext>();
}

botvinaParser::IdentifierContext* botvinaParser::Identifier_listContext::identifier(size_t i) {
  return getRuleContext<botvinaParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> botvinaParser::Identifier_listContext::CMM() {
  return getTokens(botvinaParser::CMM);
}

tree::TerminalNode* botvinaParser::Identifier_listContext::CMM(size_t i) {
  return getToken(botvinaParser::CMM, i);
}


size_t botvinaParser::Identifier_listContext::getRuleIndex() const {
  return botvinaParser::RuleIdentifier_list;
}

void botvinaParser::Identifier_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier_list(this);
}

void botvinaParser::Identifier_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<botvinaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier_list(this);
}

botvinaParser::Identifier_listContext* botvinaParser::identifier_list() {
  Identifier_listContext *_localctx = _tracker.createInstance<Identifier_listContext>(_ctx, getState());
  enterRule(_localctx, 66, botvinaParser::RuleIdentifier_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    identifier();
    setState(259);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == botvinaParser::CMM) {
      setState(255);
      match(botvinaParser::CMM);
      setState(256);
      identifier();
      setState(261);
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

// Static vars and initialization.
std::vector<dfa::DFA> botvinaParser::_decisionToDFA;
atn::PredictionContextCache botvinaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN botvinaParser::_atn;
std::vector<uint16_t> botvinaParser::_serializedATN;

std::vector<std::string> botvinaParser::_ruleNames = {
  "input_text", "statement", "assign_statement", "if_statement", "loop_statement", 
  "function_literal", "function_apply", "clear_statement", "exit_statement", 
  "return_statement", "block", "operation_block", "integer", "identifier", 
  "condition", "position", "atom", "predefined_figure", "circle", "quadrangle", 
  "point", "line", "draw", "size", "color", "expr", "add_expr", "mul_expr", 
  "or_expr", "and_expr", "eq_expr", "rel_expr", "parameter_list", "identifier_list"
};

std::vector<std::string> botvinaParser::_literalNames = {
  "", "", "','", "'('", "')'", "'{'", "'}'", "';'", "'='", "'if'", "'func'", 
  "'clear'", "'exit'", "'return'", "'circle'", "'quadrangle'", "'point'", 
  "'line'", "'draw'", "'move'", "'black'", "'red'", "'blue'", "'green'", 
  "'when'", "", "", "", "", "'&&'", "'||'"
};

std::vector<std::string> botvinaParser::_symbolicNames = {
  "", "INTEGER", "CMM", "RND_BRACKET_OP", "RND_BRACKET_CL", "SET_BRACKET_OP", 
  "SET_BRACKET_CL", "SEMICOLON", "EQ", "IF_KEYWORD", "FUNCTION_KEYWORD", 
  "CLEAR_KEYWORD", "EXIT_KEYWORD", "RETURN_KEYWORD", "CIRCLE_KEYWORD", "QUADRANGLE_KEYWORD", 
  "POINT_KEYWORD", "LINE_KEYWORD", "DRAW_KEYWORD", "MOVE_KEYWORD", "BLACK_KEYWORD", 
  "RED_KEYWORD", "BLUE_KEYWORD", "GREEN_KEYWORD", "WHEN_KEYWORD", "MUL_OPERATOR", 
  "ADD_OPERATOR", "RELATION_OPERATOR", "EQ_OPERATOR", "AND_OPERATOR", "OR_OPERATOR", 
  "IDENTIFIER", "WS"
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
    0x3, 0x22, 0x109, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x3, 0x2, 0x7, 0x2, 0x48, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x4b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x57, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x6a, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x72, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x83, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x86, 0xb, 0xc, 0x3, 0xc, 0x5, 0xc, 0x89, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x8f, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x92, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x5, 0x12, 0xa8, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x5, 0x13, 0xae, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x5, 0x1b, 0xcd, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 
    0x1c, 0xd2, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0xd5, 0xb, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0xda, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0xdd, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0xe2, 0xa, 
    0x1e, 0xc, 0x1e, 0xe, 0x1e, 0xe5, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x7, 0x1f, 0xea, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0xed, 0xb, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0xf2, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0xf7, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0xfc, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0xff, 0xb, 
    0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x104, 0xa, 0x23, 
    0xc, 0x23, 0xe, 0x23, 0x107, 0xb, 0x23, 0x3, 0x23, 0x2, 0x2, 0x24, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x2, 0x3, 0x3, 0x2, 
    0x16, 0x19, 0x2, 0x102, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x58, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x61, 0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x76, 0x3, 0x2, 0x2, 0x2, 0x12, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xad, 0x3, 0x2, 0x2, 0x2, 0x26, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x30, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x34, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0xce, 0x3, 0x2, 0x2, 0x2, 0x38, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0xde, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0xee, 0x3, 0x2, 0x2, 0x2, 0x40, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x44, 0x100, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 
    0x5, 0x4, 0x3, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4d, 0x7, 0x2, 0x2, 0x3, 0x4d, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x57, 0x5, 0x6, 0x4, 0x2, 0x4f, 0x57, 0x5, 0xa, 0x6, 0x2, 0x50, 
    0x57, 0x5, 0x8, 0x5, 0x2, 0x51, 0x57, 0x5, 0xc, 0x7, 0x2, 0x52, 0x57, 
    0x5, 0xe, 0x8, 0x2, 0x53, 0x57, 0x5, 0x2e, 0x18, 0x2, 0x54, 0x57, 0x5, 
    0x10, 0x9, 0x2, 0x55, 0x57, 0x5, 0x12, 0xa, 0x2, 0x56, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x51, 0x3, 0x2, 0x2, 0x2, 0x56, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 
    0x5, 0x1c, 0xf, 0x2, 0x59, 0x5a, 0x7, 0xa, 0x2, 0x2, 0x5a, 0x5b, 0x5, 
    0x36, 0x1c, 0x2, 0x5b, 0x5c, 0x7, 0x9, 0x2, 0x2, 0x5c, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x7, 0xb, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x1e, 0x10, 
    0x2, 0x5f, 0x60, 0x5, 0x18, 0xd, 0x2, 0x60, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x7, 0x1a, 0x2, 0x2, 0x62, 0x63, 0x5, 0x1e, 0x10, 0x2, 0x63, 
    0x64, 0x5, 0x18, 0xd, 0x2, 0x64, 0xb, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 
    0x7, 0xc, 0x2, 0x2, 0x66, 0x67, 0x5, 0x1c, 0xf, 0x2, 0x67, 0x69, 0x7, 
    0x5, 0x2, 0x2, 0x68, 0x6a, 0x5, 0x44, 0x23, 0x2, 0x69, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x7, 0x6, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x16, 0xc, 0x2, 
    0x6d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x1c, 0xf, 0x2, 0x6f, 
    0x71, 0x7, 0x5, 0x2, 0x2, 0x70, 0x72, 0x5, 0x42, 0x22, 0x2, 0x71, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x6, 0x2, 0x2, 0x74, 0x75, 0x7, 0x9, 
    0x2, 0x2, 0x75, 0xf, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0xd, 0x2, 
    0x2, 0x77, 0x78, 0x7, 0x9, 0x2, 0x2, 0x78, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x79, 0x7a, 0x7, 0xe, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x9, 0x2, 0x2, 0x7b, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0xf, 0x2, 0x2, 0x7d, 0x7e, 
    0x5, 0x34, 0x1b, 0x2, 0x7e, 0x7f, 0x7, 0x9, 0x2, 0x2, 0x7f, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x84, 0x7, 0x7, 0x2, 0x2, 0x81, 0x83, 0x5, 0x4, 
    0x3, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x89, 0x5, 0x14, 0xb, 0x2, 0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
    0x8, 0x2, 0x2, 0x8b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x90, 0x7, 0x7, 
    0x2, 0x2, 0x8d, 0x8f, 0x5, 0x4, 0x3, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x8, 0x2, 0x2, 0x94, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 0x3, 0x2, 0x2, 0x96, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x21, 0x2, 0x2, 0x98, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x7, 0x5, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x3a, 0x1e, 
    0x2, 0x9b, 0x9c, 0x7, 0x6, 0x2, 0x2, 0x9c, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9e, 0x7, 0x5, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x36, 0x1c, 0x2, 0x9f, 
    0xa0, 0x7, 0x4, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x36, 0x1c, 0x2, 0xa1, 0xa2, 
    0x7, 0x6, 0x2, 0x2, 0xa2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa8, 0x5, 
    0x1a, 0xe, 0x2, 0xa4, 0xa8, 0x5, 0xe, 0x8, 0x2, 0xa5, 0xa8, 0x5, 0xc, 
    0x7, 0x2, 0xa6, 0xa8, 0x5, 0x1c, 0xf, 0x2, 0xa7, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xae, 0x5, 0x28, 0x15, 0x2, 0xaa, 0xae, 0x5, 0x2a, 0x16, 0x2, 0xab, 
    0xae, 0x5, 0x26, 0x14, 0x2, 0xac, 0xae, 0x5, 0x2c, 0x17, 0x2, 0xad, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xad, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x10, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x20, 
    0x11, 0x2, 0xb1, 0xb2, 0x5, 0x30, 0x19, 0x2, 0xb2, 0xb3, 0x5, 0x32, 
    0x1a, 0x2, 0xb3, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x11, 0x2, 
    0x2, 0xb5, 0xb6, 0x5, 0x20, 0x11, 0x2, 0xb6, 0xb7, 0x5, 0x30, 0x19, 
    0x2, 0xb7, 0xb8, 0x5, 0x32, 0x1a, 0x2, 0xb8, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xba, 0x7, 0x12, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x20, 0x11, 0x2, 0xbb, 
    0xbc, 0x5, 0x32, 0x1a, 0x2, 0xbc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 
    0x7, 0x13, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x20, 0x11, 0x2, 0xbf, 0xc0, 0x5, 
    0x20, 0x11, 0x2, 0xc0, 0xc1, 0x5, 0x32, 0x1a, 0x2, 0xc1, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x14, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x24, 
    0x13, 0x2, 0xc4, 0xc5, 0x7, 0x9, 0x2, 0x2, 0xc5, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc7, 0x5, 0x1a, 0xe, 0x2, 0xc7, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc9, 0x9, 0x2, 0x2, 0x2, 0xc9, 0x33, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xcd, 0x5, 0x36, 0x1c, 0x2, 0xcb, 0xcd, 0x5, 0x3a, 0x1e, 0x2, 0xcc, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xd3, 0x5, 0x38, 0x1d, 0x2, 0xcf, 0xd0, 0x7, 
    0x1c, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x38, 0x1d, 0x2, 0xd1, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xdb, 0x5, 0x22, 0x12, 0x2, 0xd7, 
    0xd8, 0x7, 0x1b, 0x2, 0x2, 0xd8, 0xda, 0x5, 0x22, 0x12, 0x2, 0xd9, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe3, 0x5, 0x3c, 0x1f, 
    0x2, 0xdf, 0xe0, 0x7, 0x20, 0x2, 0x2, 0xe0, 0xe2, 0x5, 0x3c, 0x1f, 0x2, 
    0xe1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xeb, 0x5, 
    0x3e, 0x20, 0x2, 0xe7, 0xe8, 0x7, 0x1f, 0x2, 0x2, 0xe8, 0xea, 0x5, 0x3e, 
    0x20, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 
    0xf1, 0x5, 0x40, 0x21, 0x2, 0xef, 0xf0, 0x7, 0x1e, 0x2, 0x2, 0xf0, 0xf2, 
    0x5, 0x40, 0x21, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf6, 0x5, 0x22, 
    0x12, 0x2, 0xf4, 0xf5, 0x7, 0x1d, 0x2, 0x2, 0xf5, 0xf7, 0x5, 0x22, 0x12, 
    0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0x41, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfd, 0x5, 0x34, 0x1b, 0x2, 0xf9, 
    0xfa, 0x7, 0x4, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x34, 0x1b, 0x2, 0xfb, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x105, 0x5, 0x1c, 0xf, 
    0x2, 0x101, 0x102, 0x7, 0x4, 0x2, 0x2, 0x102, 0x104, 0x5, 0x1c, 0xf, 
    0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x107, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x45, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x49, 0x56, 0x69, 0x71, 0x84, 0x88, 0x90, 0xa7, 0xad, 0xcc, 0xd3, 
    0xdb, 0xe3, 0xeb, 0xf1, 0xf6, 0xfd, 0x105, 
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
