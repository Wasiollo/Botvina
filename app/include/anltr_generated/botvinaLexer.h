
// Generated from botvina.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  botvinaLexer : public antlr4::Lexer {
public:
  enum {
    INTEGER = 1, CMM = 2, RND_BRACKET_OP = 3, RND_BRACKET_CL = 4, SET_BRACKET_OP = 5, 
    SET_BRACKET_CL = 6, SEMICOLON = 7, EQ = 8, IF_KEYWORD = 9, FUNCTION_KEYWORD = 10, 
    CLEAR_KEYWORD = 11, EXIT_KEYWORD = 12, RETURN_KEYWORD = 13, TRUE_KEYWORD = 14, 
    FALSE_KEYWORD = 15, CIRCLE_KEYWORD = 16, QUADRANGLE_KEYWORD = 17, POINT_KEYWORD = 18, 
    LINE_KEYWORD = 19, DRAW_KEYWORD = 20, MOVE_KEYWORD = 21, BLACK_KEYWORD = 22, 
    RED_KEYWORD = 23, BLUE_KEYWORD = 24, GREEN_KEYWORD = 25, MUL_OPERATOR = 26, 
    ADD_OPERATOR = 27, RELATION_OPERATOR = 28, EQ_OPERATOR = 29, AND_OPERATOR = 30, 
    OR_OPERATOR = 31, IDENTIFIER = 32, WS = 33
  };

  botvinaLexer(antlr4::CharStream *input);
  ~botvinaLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

