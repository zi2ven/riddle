
#include "RiddleLexer.h"


// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2


#include "RiddleParserListener.h"
#include "RiddleParserVisitor.h"

#include "RiddleParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct RiddleParserStaticData final {
  RiddleParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  RiddleParserStaticData(const RiddleParserStaticData&) = delete;
  RiddleParserStaticData(RiddleParserStaticData&&) = delete;
  RiddleParserStaticData& operator=(const RiddleParserStaticData&) = delete;
  RiddleParserStaticData& operator=(RiddleParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag riddleparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<RiddleParserStaticData> riddleparserParserStaticData = nullptr;

void riddleparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (riddleparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(riddleparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<RiddleParserStaticData>(
    std::vector<std::string>{
      "program", "terminator", "statementEnd", "statement", "funcDecl", 
      "varDecl", "expression", "block", "object", "literal"
    },
    std::vector<std::string>{
      "", "'var'", "'val'", "'for'", "'while'", "'continue'", "'break'", 
      "'if'", "'else'", "'fun'", "'return'", "'import'", "'package'", "'class'", 
      "'true'", "'false'", "'null'", "'try'", "'catch'", "'extern'", "'override'", 
      "'static'", "'const'", "'public'", "'protected'", "'private'", "'virtual'", 
      "'operator'", "'enum'", "'union'", "';'", "", "'('", "')'", "'['", 
      "']'", "'{'", "'}'", "':'", "','", "'=='", "'!='", "'='", "'>'", "'>='", 
      "'<'", "'<='", "'<<'", "'>>'", "'@'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'!'", "'&'", "'&&'", "'|'", "'||'", "'^'", "'.'", "'\"'", 
      "'''", "'~'", "'+='", "'-='", "'*='", "'/='", "'%='", "'<<='", "'>>='", 
      "'&='", "'|='", "'^='"
    },
    std::vector<std::string>{
      "", "Var", "Val", "For", "While", "Continue", "Break", "If", "Else", 
      "Fun", "Return", "Import", "Package", "Class", "True", "False", "Null", 
      "Try", "Catch", "Extern", "Override", "Static", "Const", "Public", 
      "Protected", "Private", "Virtual", "Operator", "Enum", "Union", "Semi", 
      "Endl", "LeftParen", "RightParen", "LeftBracket", "RightBracket", 
      "LeftCurly", "RightCurly", "Colon", "Comma", "Equal", "NotEqual", 
      "Assign", "Greater", "GreaterEqual", "Less", "LessEqual", "LeftShift", 
      "RightShift", "At", "Add", "Sub", "Star", "Div", "Mod", "Not", "And", 
      "AndAnd", "Or", "OrOr", "Xor", "Dot", "DoubleQuotes", "Quotes", "Tilde", 
      "AddAssign", "SubAssign", "MulAssign", "DivAssign", "ModAssign", "LeftShiftAssign", 
      "RightShiftAssign", "AndAssign", "OrAssign", "XorAssign", "Identifier", 
      "Hexadecimal", "Decimal", "Octal", "Binary", "Float", "IntegerSequence", 
      "HEX_DIGIT", "OCTAL_DIGIT", "BINARY_DIGIT", "DIGIT", "STRING", "CHAR", 
      "LINE_COMMENT", "BLOCK_COMMENT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,90,96,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,2,8,7,8,2,9,7,9,1,0,4,0,22,8,0,11,0,12,0,23,1,0,1,0,1,1,1,1,1,1,3,
  	1,31,8,1,1,2,1,2,1,2,1,2,3,2,37,8,2,1,3,1,3,1,3,3,3,42,8,3,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,3,5,57,8,5,1,5,1,5,3,5,61,8,
  	5,1,5,1,5,1,5,1,5,3,5,67,8,5,1,5,1,5,3,5,71,8,5,3,5,73,8,5,1,6,1,6,1,
  	6,3,6,78,8,6,1,7,1,7,5,7,82,8,7,10,7,12,7,85,9,7,1,7,1,7,1,8,1,8,1,9,
  	1,9,1,9,3,9,94,8,9,1,9,0,0,10,0,2,4,6,8,10,12,14,16,18,0,0,101,0,21,1,
  	0,0,0,2,30,1,0,0,0,4,36,1,0,0,0,6,41,1,0,0,0,8,43,1,0,0,0,10,72,1,0,0,
  	0,12,77,1,0,0,0,14,79,1,0,0,0,16,88,1,0,0,0,18,93,1,0,0,0,20,22,3,4,2,
  	0,21,20,1,0,0,0,22,23,1,0,0,0,23,21,1,0,0,0,23,24,1,0,0,0,24,25,1,0,0,
  	0,25,26,5,0,0,1,26,1,1,0,0,0,27,31,5,30,0,0,28,31,5,0,0,1,29,31,4,1,0,
  	0,30,27,1,0,0,0,30,28,1,0,0,0,30,29,1,0,0,0,31,3,1,0,0,0,32,33,3,6,3,
  	0,33,34,3,2,1,0,34,37,1,0,0,0,35,37,5,31,0,0,36,32,1,0,0,0,36,35,1,0,
  	0,0,37,5,1,0,0,0,38,42,3,12,6,0,39,42,3,10,5,0,40,42,3,8,4,0,41,38,1,
  	0,0,0,41,39,1,0,0,0,41,40,1,0,0,0,42,7,1,0,0,0,43,44,5,9,0,0,44,45,5,
  	75,0,0,45,46,5,32,0,0,46,47,5,33,0,0,47,48,5,51,0,0,48,49,5,43,0,0,49,
  	50,3,12,6,0,50,51,3,14,7,0,51,9,1,0,0,0,52,53,5,1,0,0,53,56,5,75,0,0,
  	54,55,5,38,0,0,55,57,3,12,6,0,56,54,1,0,0,0,56,57,1,0,0,0,57,60,1,0,0,
  	0,58,59,5,42,0,0,59,61,3,12,6,0,60,58,1,0,0,0,60,61,1,0,0,0,61,73,1,0,
  	0,0,62,63,5,2,0,0,63,66,5,75,0,0,64,65,5,38,0,0,65,67,3,12,6,0,66,64,
  	1,0,0,0,66,67,1,0,0,0,67,70,1,0,0,0,68,69,5,42,0,0,69,71,3,12,6,0,70,
  	68,1,0,0,0,70,71,1,0,0,0,71,73,1,0,0,0,72,52,1,0,0,0,72,62,1,0,0,0,73,
  	11,1,0,0,0,74,78,3,18,9,0,75,78,3,16,8,0,76,78,3,14,7,0,77,74,1,0,0,0,
  	77,75,1,0,0,0,77,76,1,0,0,0,78,13,1,0,0,0,79,83,5,36,0,0,80,82,3,4,2,
  	0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,86,1,0,0,
  	0,85,83,1,0,0,0,86,87,5,37,0,0,87,15,1,0,0,0,88,89,5,75,0,0,89,17,1,0,
  	0,0,90,94,5,77,0,0,91,94,5,80,0,0,92,94,5,87,0,0,93,90,1,0,0,0,93,91,
  	1,0,0,0,93,92,1,0,0,0,94,19,1,0,0,0,12,23,30,36,41,56,60,66,70,72,77,
  	83,93
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  riddleparserParserStaticData = std::move(staticData);
}

}

RiddleParser::RiddleParser(TokenStream *input) : RiddleParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

RiddleParser::RiddleParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  RiddleParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *riddleparserParserStaticData->atn, riddleparserParserStaticData->decisionToDFA, riddleparserParserStaticData->sharedContextCache, options);
}

RiddleParser::~RiddleParser() {
  delete _interpreter;
}

const atn::ATN& RiddleParser::getATN() const {
  return *riddleparserParserStaticData->atn;
}

std::string RiddleParser::getGrammarFileName() const {
  return "RiddleParser.g4";
}

const std::vector<std::string>& RiddleParser::getRuleNames() const {
  return riddleparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& RiddleParser::getVocabulary() const {
  return riddleparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView RiddleParser::getSerializedATN() const {
  return riddleparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

RiddleParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ProgramContext::EOF() {
  return getToken(RiddleParser::EOF, 0);
}

std::vector<RiddleParser::StatementEndContext *> RiddleParser::ProgramContext::statementEnd() {
  return getRuleContexts<RiddleParser::StatementEndContext>();
}

RiddleParser::StatementEndContext* RiddleParser::ProgramContext::statementEnd(size_t i) {
  return getRuleContext<RiddleParser::StatementEndContext>(i);
}


size_t RiddleParser::ProgramContext::getRuleIndex() const {
  return RiddleParser::RuleProgram;
}

void RiddleParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void RiddleParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any RiddleParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ProgramContext* RiddleParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, RiddleParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      statementEnd();
      setState(23); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 70866960902) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 4133) != 0));
    setState(25);
    match(RiddleParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminatorContext ------------------------------------------------------------------

RiddleParser::TerminatorContext::TerminatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::TerminatorContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
}

tree::TerminalNode* RiddleParser::TerminatorContext::EOF() {
  return getToken(RiddleParser::EOF, 0);
}


size_t RiddleParser::TerminatorContext::getRuleIndex() const {
  return RiddleParser::RuleTerminator;
}

void RiddleParser::TerminatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminator(this);
}

void RiddleParser::TerminatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminator(this);
}


std::any RiddleParser::TerminatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitTerminator(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::TerminatorContext* RiddleParser::terminator() {
  TerminatorContext *_localctx = _tracker.createInstance<TerminatorContext>(_ctx, getState());
  enterRule(_localctx, 2, RiddleParser::RuleTerminator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(30);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(27);
      match(RiddleParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(28);
      match(RiddleParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(29);

      if (!( lineTerminatorAhead() )) throw FailedPredicateException(this, " lineTerminatorAhead() ");
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementEndContext ------------------------------------------------------------------

RiddleParser::StatementEndContext::StatementEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::StatementContext* RiddleParser::StatementEndContext::statement() {
  return getRuleContext<RiddleParser::StatementContext>(0);
}

RiddleParser::TerminatorContext* RiddleParser::StatementEndContext::terminator() {
  return getRuleContext<RiddleParser::TerminatorContext>(0);
}

tree::TerminalNode* RiddleParser::StatementEndContext::Endl() {
  return getToken(RiddleParser::Endl, 0);
}


size_t RiddleParser::StatementEndContext::getRuleIndex() const {
  return RiddleParser::RuleStatementEnd;
}

void RiddleParser::StatementEndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementEnd(this);
}

void RiddleParser::StatementEndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementEnd(this);
}


std::any RiddleParser::StatementEndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitStatementEnd(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::StatementEndContext* RiddleParser::statementEnd() {
  StatementEndContext *_localctx = _tracker.createInstance<StatementEndContext>(_ctx, getState());
  enterRule(_localctx, 4, RiddleParser::RuleStatementEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Var:
      case RiddleParser::Val:
      case RiddleParser::Fun:
      case RiddleParser::LeftCurly:
      case RiddleParser::Identifier:
      case RiddleParser::Decimal:
      case RiddleParser::Float:
      case RiddleParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(32);
        statement();
        setState(33);
        terminator();
        break;
      }

      case RiddleParser::Endl: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        match(RiddleParser::Endl);
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

//----------------- StatementContext ------------------------------------------------------------------

RiddleParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::ExpressionContext* RiddleParser::StatementContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::VarDeclContext* RiddleParser::StatementContext::varDecl() {
  return getRuleContext<RiddleParser::VarDeclContext>(0);
}

RiddleParser::FuncDeclContext* RiddleParser::StatementContext::funcDecl() {
  return getRuleContext<RiddleParser::FuncDeclContext>(0);
}


size_t RiddleParser::StatementContext::getRuleIndex() const {
  return RiddleParser::RuleStatement;
}

void RiddleParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void RiddleParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any RiddleParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::StatementContext* RiddleParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, RiddleParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::LeftCurly:
      case RiddleParser::Identifier:
      case RiddleParser::Decimal:
      case RiddleParser::Float:
      case RiddleParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(38);
        expression();
        break;
      }

      case RiddleParser::Var:
      case RiddleParser::Val: {
        enterOuterAlt(_localctx, 2);
        setState(39);
        varDecl();
        break;
      }

      case RiddleParser::Fun: {
        enterOuterAlt(_localctx, 3);
        setState(40);
        funcDecl();
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

//----------------- FuncDeclContext ------------------------------------------------------------------

RiddleParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Fun() {
  return getToken(RiddleParser::Fun, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Sub() {
  return getToken(RiddleParser::Sub, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Greater() {
  return getToken(RiddleParser::Greater, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

RiddleParser::ExpressionContext* RiddleParser::FuncDeclContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::BlockContext* RiddleParser::FuncDeclContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}


size_t RiddleParser::FuncDeclContext::getRuleIndex() const {
  return RiddleParser::RuleFuncDecl;
}

void RiddleParser::FuncDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDecl(this);
}

void RiddleParser::FuncDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDecl(this);
}


std::any RiddleParser::FuncDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFuncDecl(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FuncDeclContext* RiddleParser::funcDecl() {
  FuncDeclContext *_localctx = _tracker.createInstance<FuncDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, RiddleParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(RiddleParser::Fun);
    setState(44);
    antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
    setState(45);
    match(RiddleParser::LeftParen);
    setState(46);
    match(RiddleParser::RightParen);
    setState(47);
    match(RiddleParser::Sub);
    setState(48);
    match(RiddleParser::Greater);
    setState(49);
    antlrcpp::downCast<FuncDeclContext *>(_localctx)->returnType = expression();
    setState(50);
    antlrcpp::downCast<FuncDeclContext *>(_localctx)->body = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

RiddleParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::VarDeclContext::Var() {
  return getToken(RiddleParser::Var, 0);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Colon() {
  return getToken(RiddleParser::Colon, 0);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Assign() {
  return getToken(RiddleParser::Assign, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::VarDeclContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::VarDeclContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Val() {
  return getToken(RiddleParser::Val, 0);
}


size_t RiddleParser::VarDeclContext::getRuleIndex() const {
  return RiddleParser::RuleVarDecl;
}

void RiddleParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void RiddleParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any RiddleParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::VarDeclContext* RiddleParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, RiddleParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Var: {
        enterOuterAlt(_localctx, 1);
        setState(52);
        match(RiddleParser::Var);
        setState(53);
        antlrcpp::downCast<VarDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
        setState(56);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(54);
          match(RiddleParser::Colon);
          setState(55);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression();
          break;
        }

        default:
          break;
        }
        setState(60);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(58);
          match(RiddleParser::Assign);
          setState(59);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression();
          break;
        }

        default:
          break;
        }
        break;
      }

      case RiddleParser::Val: {
        enterOuterAlt(_localctx, 2);
        setState(62);
        match(RiddleParser::Val);
        setState(63);
        antlrcpp::downCast<VarDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
        setState(66);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          setState(64);
          match(RiddleParser::Colon);
          setState(65);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression();
          break;
        }

        default:
          break;
        }
        setState(70);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(68);
          match(RiddleParser::Assign);
          setState(69);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression();
          break;
        }

        default:
          break;
        }
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

//----------------- ExpressionContext ------------------------------------------------------------------

RiddleParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::LiteralContext* RiddleParser::ExpressionContext::literal() {
  return getRuleContext<RiddleParser::LiteralContext>(0);
}

RiddleParser::ObjectContext* RiddleParser::ExpressionContext::object() {
  return getRuleContext<RiddleParser::ObjectContext>(0);
}

RiddleParser::BlockContext* RiddleParser::ExpressionContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}


size_t RiddleParser::ExpressionContext::getRuleIndex() const {
  return RiddleParser::RuleExpression;
}

void RiddleParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void RiddleParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any RiddleParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ExpressionContext* RiddleParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, RiddleParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Decimal:
      case RiddleParser::Float:
      case RiddleParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        literal();
        break;
      }

      case RiddleParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(75);
        object();
        break;
      }

      case RiddleParser::LeftCurly: {
        enterOuterAlt(_localctx, 3);
        setState(76);
        block();
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

//----------------- BlockContext ------------------------------------------------------------------

RiddleParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::BlockContext::LeftCurly() {
  return getToken(RiddleParser::LeftCurly, 0);
}

tree::TerminalNode* RiddleParser::BlockContext::RightCurly() {
  return getToken(RiddleParser::RightCurly, 0);
}

std::vector<RiddleParser::StatementEndContext *> RiddleParser::BlockContext::statementEnd() {
  return getRuleContexts<RiddleParser::StatementEndContext>();
}

RiddleParser::StatementEndContext* RiddleParser::BlockContext::statementEnd(size_t i) {
  return getRuleContext<RiddleParser::StatementEndContext>(i);
}


size_t RiddleParser::BlockContext::getRuleIndex() const {
  return RiddleParser::RuleBlock;
}

void RiddleParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void RiddleParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any RiddleParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::BlockContext* RiddleParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 14, RiddleParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(RiddleParser::LeftCurly);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 70866960902) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 4133) != 0)) {
      setState(80);
      statementEnd();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(RiddleParser::RightCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

RiddleParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ObjectContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}


size_t RiddleParser::ObjectContext::getRuleIndex() const {
  return RiddleParser::RuleObject;
}

void RiddleParser::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void RiddleParser::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}


std::any RiddleParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ObjectContext* RiddleParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 16, RiddleParser::RuleObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(RiddleParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

RiddleParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t RiddleParser::LiteralContext::getRuleIndex() const {
  return RiddleParser::RuleLiteral;
}

void RiddleParser::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::FloatLitContext::Float() {
  return getToken(RiddleParser::Float, 0);
}

RiddleParser::FloatLitContext::FloatLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void RiddleParser::FloatLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLit(this);
}
void RiddleParser::FloatLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLit(this);
}

std::any RiddleParser::FloatLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFloatLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::IntLitContext::Decimal() {
  return getToken(RiddleParser::Decimal, 0);
}

RiddleParser::IntLitContext::IntLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void RiddleParser::IntLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLit(this);
}
void RiddleParser::IntLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLit(this);
}

std::any RiddleParser::IntLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitIntLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::CharLitContext::CHAR() {
  return getToken(RiddleParser::CHAR, 0);
}

RiddleParser::CharLitContext::CharLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void RiddleParser::CharLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLit(this);
}
void RiddleParser::CharLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLit(this);
}

std::any RiddleParser::CharLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitCharLit(this);
  else
    return visitor->visitChildren(this);
}
RiddleParser::LiteralContext* RiddleParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 18, RiddleParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Decimal: {
        _localctx = _tracker.createInstance<RiddleParser::IntLitContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(90);
        match(RiddleParser::Decimal);
        break;
      }

      case RiddleParser::Float: {
        _localctx = _tracker.createInstance<RiddleParser::FloatLitContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(91);
        match(RiddleParser::Float);
        break;
      }

      case RiddleParser::CHAR: {
        _localctx = _tracker.createInstance<RiddleParser::CharLitContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(92);
        match(RiddleParser::CHAR);
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

bool RiddleParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return terminatorSempred(antlrcpp::downCast<TerminatorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RiddleParser::terminatorSempred(TerminatorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return  lineTerminatorAhead() ;

  default:
    break;
  }
  return true;
}

void RiddleParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  riddleparserParserInitialize();
#else
  ::antlr4::internal::call_once(riddleparserParserOnceFlag, riddleparserParserInitialize);
#endif
}
