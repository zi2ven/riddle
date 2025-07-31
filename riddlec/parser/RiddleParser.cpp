
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
      "program", "terminator", "statementEnd", "statement", "returnStmt", 
      "funcParam", "funcDecl", "varDecl", "classDecl", "declBlock", "expression", 
      "block"
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
  	4,1,90,154,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,4,0,26,8,0,11,0,12,0,27,
  	1,0,1,0,1,1,1,1,1,1,3,1,35,8,1,1,2,1,2,1,2,1,2,3,2,41,8,2,1,3,1,3,1,3,
  	1,3,1,3,3,3,48,8,3,1,4,1,4,3,4,52,8,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,
  	1,6,1,6,5,6,64,8,6,10,6,12,6,67,9,6,3,6,69,8,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,7,1,7,1,7,1,7,3,7,81,8,7,1,7,1,7,3,7,85,8,7,1,7,1,7,1,7,1,7,3,7,91,
  	8,7,1,7,1,7,3,7,95,8,7,3,7,97,8,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,5,9,
  	107,8,9,10,9,12,9,110,9,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,3,10,125,8,10,1,10,1,10,1,10,1,10,1,10,5,10,132,8,
  	10,10,10,12,10,135,9,10,3,10,137,8,10,1,10,5,10,140,8,10,10,10,12,10,
  	143,9,10,1,11,1,11,5,11,147,8,11,10,11,12,11,150,9,11,1,11,1,11,1,11,
  	0,1,20,12,0,2,4,6,8,10,12,14,16,18,20,22,0,1,1,0,14,15,170,0,25,1,0,0,
  	0,2,34,1,0,0,0,4,40,1,0,0,0,6,47,1,0,0,0,8,49,1,0,0,0,10,53,1,0,0,0,12,
  	57,1,0,0,0,14,96,1,0,0,0,16,98,1,0,0,0,18,102,1,0,0,0,20,124,1,0,0,0,
  	22,144,1,0,0,0,24,26,3,4,2,0,25,24,1,0,0,0,26,27,1,0,0,0,27,25,1,0,0,
  	0,27,28,1,0,0,0,28,29,1,0,0,0,29,30,5,0,0,1,30,1,1,0,0,0,31,35,5,30,0,
  	0,32,35,5,0,0,1,33,35,4,1,0,0,34,31,1,0,0,0,34,32,1,0,0,0,34,33,1,0,0,
  	0,35,3,1,0,0,0,36,37,3,6,3,0,37,38,3,2,1,0,38,41,1,0,0,0,39,41,5,31,0,
  	0,40,36,1,0,0,0,40,39,1,0,0,0,41,5,1,0,0,0,42,48,3,20,10,0,43,48,3,14,
  	7,0,44,48,3,12,6,0,45,48,3,16,8,0,46,48,3,8,4,0,47,42,1,0,0,0,47,43,1,
  	0,0,0,47,44,1,0,0,0,47,45,1,0,0,0,47,46,1,0,0,0,48,7,1,0,0,0,49,51,5,
  	10,0,0,50,52,3,20,10,0,51,50,1,0,0,0,51,52,1,0,0,0,52,9,1,0,0,0,53,54,
  	5,75,0,0,54,55,5,38,0,0,55,56,3,20,10,0,56,11,1,0,0,0,57,58,5,9,0,0,58,
  	59,5,75,0,0,59,68,5,32,0,0,60,65,3,10,5,0,61,62,5,39,0,0,62,64,3,10,5,
  	0,63,61,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,69,1,0,0,
  	0,67,65,1,0,0,0,68,60,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,71,5,33,
  	0,0,71,72,5,51,0,0,72,73,5,43,0,0,73,74,3,20,10,0,74,75,3,22,11,0,75,
  	13,1,0,0,0,76,77,5,1,0,0,77,80,5,75,0,0,78,79,5,38,0,0,79,81,3,20,10,
  	0,80,78,1,0,0,0,80,81,1,0,0,0,81,84,1,0,0,0,82,83,5,42,0,0,83,85,3,20,
  	10,0,84,82,1,0,0,0,84,85,1,0,0,0,85,97,1,0,0,0,86,87,5,2,0,0,87,90,5,
  	75,0,0,88,89,5,38,0,0,89,91,3,20,10,0,90,88,1,0,0,0,90,91,1,0,0,0,91,
  	94,1,0,0,0,92,93,5,42,0,0,93,95,3,20,10,0,94,92,1,0,0,0,94,95,1,0,0,0,
  	95,97,1,0,0,0,96,76,1,0,0,0,96,86,1,0,0,0,97,15,1,0,0,0,98,99,5,13,0,
  	0,99,100,5,75,0,0,100,101,3,18,9,0,101,17,1,0,0,0,102,108,5,36,0,0,103,
  	107,3,12,6,0,104,107,3,14,7,0,105,107,3,16,8,0,106,103,1,0,0,0,106,104,
  	1,0,0,0,106,105,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,
  	0,109,111,1,0,0,0,110,108,1,0,0,0,111,112,5,37,0,0,112,19,1,0,0,0,113,
  	114,6,10,-1,0,114,125,5,75,0,0,115,125,3,22,11,0,116,125,5,77,0,0,117,
  	125,5,80,0,0,118,125,5,87,0,0,119,125,7,0,0,0,120,121,5,32,0,0,121,122,
  	3,20,10,0,122,123,5,33,0,0,123,125,1,0,0,0,124,113,1,0,0,0,124,115,1,
  	0,0,0,124,116,1,0,0,0,124,117,1,0,0,0,124,118,1,0,0,0,124,119,1,0,0,0,
  	124,120,1,0,0,0,125,141,1,0,0,0,126,127,10,8,0,0,127,136,5,32,0,0,128,
  	133,3,20,10,0,129,130,5,39,0,0,130,132,3,20,10,0,131,129,1,0,0,0,132,
  	135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,137,1,0,0,0,135,133,1,
  	0,0,0,136,128,1,0,0,0,136,137,1,0,0,0,137,138,1,0,0,0,138,140,5,33,0,
  	0,139,126,1,0,0,0,140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,
  	21,1,0,0,0,143,141,1,0,0,0,144,148,5,36,0,0,145,147,3,4,2,0,146,145,1,
  	0,0,0,147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,151,1,0,0,0,
  	150,148,1,0,0,0,151,152,5,37,0,0,152,23,1,0,0,0,19,27,34,40,47,51,65,
  	68,80,84,90,94,96,106,108,124,133,136,141,148
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
    setState(25); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(24);
      statementEnd();
      setState(27); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75161986566) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 4133) != 0));
    setState(29);
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
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(31);
      match(RiddleParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(32);
      match(RiddleParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(33);

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
    setState(40);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Var:
      case RiddleParser::Val:
      case RiddleParser::Fun:
      case RiddleParser::Return:
      case RiddleParser::Class:
      case RiddleParser::True:
      case RiddleParser::False:
      case RiddleParser::LeftParen:
      case RiddleParser::LeftCurly:
      case RiddleParser::Identifier:
      case RiddleParser::Decimal:
      case RiddleParser::Float:
      case RiddleParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(36);
        statement();
        setState(37);
        terminator();
        break;
      }

      case RiddleParser::Endl: {
        enterOuterAlt(_localctx, 2);
        setState(39);
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

RiddleParser::ClassDeclContext* RiddleParser::StatementContext::classDecl() {
  return getRuleContext<RiddleParser::ClassDeclContext>(0);
}

RiddleParser::ReturnStmtContext* RiddleParser::StatementContext::returnStmt() {
  return getRuleContext<RiddleParser::ReturnStmtContext>(0);
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
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::True:
      case RiddleParser::False:
      case RiddleParser::LeftParen:
      case RiddleParser::LeftCurly:
      case RiddleParser::Identifier:
      case RiddleParser::Decimal:
      case RiddleParser::Float:
      case RiddleParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        expression(0);
        break;
      }

      case RiddleParser::Var:
      case RiddleParser::Val: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        varDecl();
        break;
      }

      case RiddleParser::Fun: {
        enterOuterAlt(_localctx, 3);
        setState(44);
        funcDecl();
        break;
      }

      case RiddleParser::Class: {
        enterOuterAlt(_localctx, 4);
        setState(45);
        classDecl();
        break;
      }

      case RiddleParser::Return: {
        enterOuterAlt(_localctx, 5);
        setState(46);
        returnStmt();
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

//----------------- ReturnStmtContext ------------------------------------------------------------------

RiddleParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ReturnStmtContext::Return() {
  return getToken(RiddleParser::Return, 0);
}

RiddleParser::ExpressionContext* RiddleParser::ReturnStmtContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}


size_t RiddleParser::ReturnStmtContext::getRuleIndex() const {
  return RiddleParser::RuleReturnStmt;
}

void RiddleParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void RiddleParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}


std::any RiddleParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ReturnStmtContext* RiddleParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, RiddleParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(RiddleParser::Return);
    setState(51);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(50);
      expression(0);
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

//----------------- FuncParamContext ------------------------------------------------------------------

RiddleParser::FuncParamContext::FuncParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::FuncParamContext::Colon() {
  return getToken(RiddleParser::Colon, 0);
}

tree::TerminalNode* RiddleParser::FuncParamContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

RiddleParser::ExpressionContext* RiddleParser::FuncParamContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}


size_t RiddleParser::FuncParamContext::getRuleIndex() const {
  return RiddleParser::RuleFuncParam;
}

void RiddleParser::FuncParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncParam(this);
}

void RiddleParser::FuncParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncParam(this);
}


std::any RiddleParser::FuncParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFuncParam(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::FuncParamContext* RiddleParser::funcParam() {
  FuncParamContext *_localctx = _tracker.createInstance<FuncParamContext>(_ctx, getState());
  enterRule(_localctx, 10, RiddleParser::RuleFuncParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    antlrcpp::downCast<FuncParamContext *>(_localctx)->name = match(RiddleParser::Identifier);
    setState(54);
    match(RiddleParser::Colon);
    setState(55);
    antlrcpp::downCast<FuncParamContext *>(_localctx)->type = expression(0);
   
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

std::vector<RiddleParser::FuncParamContext *> RiddleParser::FuncDeclContext::funcParam() {
  return getRuleContexts<RiddleParser::FuncParamContext>();
}

RiddleParser::FuncParamContext* RiddleParser::FuncDeclContext::funcParam(size_t i) {
  return getRuleContext<RiddleParser::FuncParamContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::FuncDeclContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
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
  enterRule(_localctx, 12, RiddleParser::RuleFuncDecl);
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
    setState(57);
    match(RiddleParser::Fun);
    setState(58);
    antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
    setState(59);
    match(RiddleParser::LeftParen);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::Identifier) {
      setState(60);
      funcParam();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(61);
        match(RiddleParser::Comma);
        setState(62);
        funcParam();
        setState(67);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(70);
    match(RiddleParser::RightParen);
    setState(71);
    match(RiddleParser::Sub);
    setState(72);
    match(RiddleParser::Greater);
    setState(73);
    antlrcpp::downCast<FuncDeclContext *>(_localctx)->returnType = expression(0);
    setState(74);
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
  enterRule(_localctx, 14, RiddleParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Var: {
        enterOuterAlt(_localctx, 1);
        setState(76);
        match(RiddleParser::Var);
        setState(77);
        antlrcpp::downCast<VarDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
        setState(80);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(78);
          match(RiddleParser::Colon);
          setState(79);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
          break;
        }

        default:
          break;
        }
        setState(84);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(82);
          match(RiddleParser::Assign);
          setState(83);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
          break;
        }

        default:
          break;
        }
        break;
      }

      case RiddleParser::Val: {
        enterOuterAlt(_localctx, 2);
        setState(86);
        match(RiddleParser::Val);
        setState(87);
        antlrcpp::downCast<VarDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
        setState(90);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(88);
          match(RiddleParser::Colon);
          setState(89);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
          break;
        }

        default:
          break;
        }
        setState(94);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          setState(92);
          match(RiddleParser::Assign);
          setState(93);
          antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
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

//----------------- ClassDeclContext ------------------------------------------------------------------

RiddleParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ClassDeclContext::Class() {
  return getToken(RiddleParser::Class, 0);
}

RiddleParser::DeclBlockContext* RiddleParser::ClassDeclContext::declBlock() {
  return getRuleContext<RiddleParser::DeclBlockContext>(0);
}

tree::TerminalNode* RiddleParser::ClassDeclContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}


size_t RiddleParser::ClassDeclContext::getRuleIndex() const {
  return RiddleParser::RuleClassDecl;
}

void RiddleParser::ClassDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDecl(this);
}

void RiddleParser::ClassDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDecl(this);
}


std::any RiddleParser::ClassDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitClassDecl(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ClassDeclContext* RiddleParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 16, RiddleParser::RuleClassDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(RiddleParser::Class);
    setState(99);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->name = match(RiddleParser::Identifier);
    setState(100);
    declBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclBlockContext ------------------------------------------------------------------

RiddleParser::DeclBlockContext::DeclBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::DeclBlockContext::LeftCurly() {
  return getToken(RiddleParser::LeftCurly, 0);
}

tree::TerminalNode* RiddleParser::DeclBlockContext::RightCurly() {
  return getToken(RiddleParser::RightCurly, 0);
}

std::vector<RiddleParser::FuncDeclContext *> RiddleParser::DeclBlockContext::funcDecl() {
  return getRuleContexts<RiddleParser::FuncDeclContext>();
}

RiddleParser::FuncDeclContext* RiddleParser::DeclBlockContext::funcDecl(size_t i) {
  return getRuleContext<RiddleParser::FuncDeclContext>(i);
}

std::vector<RiddleParser::VarDeclContext *> RiddleParser::DeclBlockContext::varDecl() {
  return getRuleContexts<RiddleParser::VarDeclContext>();
}

RiddleParser::VarDeclContext* RiddleParser::DeclBlockContext::varDecl(size_t i) {
  return getRuleContext<RiddleParser::VarDeclContext>(i);
}

std::vector<RiddleParser::ClassDeclContext *> RiddleParser::DeclBlockContext::classDecl() {
  return getRuleContexts<RiddleParser::ClassDeclContext>();
}

RiddleParser::ClassDeclContext* RiddleParser::DeclBlockContext::classDecl(size_t i) {
  return getRuleContext<RiddleParser::ClassDeclContext>(i);
}


size_t RiddleParser::DeclBlockContext::getRuleIndex() const {
  return RiddleParser::RuleDeclBlock;
}

void RiddleParser::DeclBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclBlock(this);
}

void RiddleParser::DeclBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclBlock(this);
}


std::any RiddleParser::DeclBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitDeclBlock(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::DeclBlockContext* RiddleParser::declBlock() {
  DeclBlockContext *_localctx = _tracker.createInstance<DeclBlockContext>(_ctx, getState());
  enterRule(_localctx, 18, RiddleParser::RuleDeclBlock);
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
    setState(102);
    match(RiddleParser::LeftCurly);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8710) != 0)) {
      setState(106);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case RiddleParser::Fun: {
          setState(103);
          funcDecl();
          break;
        }

        case RiddleParser::Var:
        case RiddleParser::Val: {
          setState(104);
          varDecl();
          break;
        }

        case RiddleParser::Class: {
          setState(105);
          classDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
    match(RiddleParser::RightCurly);
   
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


size_t RiddleParser::ExpressionContext::getRuleIndex() const {
  return RiddleParser::RuleExpression;
}

void RiddleParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::FloatLitContext::Float() {
  return getToken(RiddleParser::Float, 0);
}

RiddleParser::FloatLitContext::FloatLitContext(ExpressionContext *ctx) { copyFrom(ctx); }

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
//----------------- BoolLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BoolLitContext::True() {
  return getToken(RiddleParser::True, 0);
}

tree::TerminalNode* RiddleParser::BoolLitContext::False() {
  return getToken(RiddleParser::False, 0);
}

RiddleParser::BoolLitContext::BoolLitContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BoolLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLit(this);
}
void RiddleParser::BoolLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLit(this);
}

std::any RiddleParser::BoolLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBoolLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BracketExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BracketExprContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

RiddleParser::ExpressionContext* RiddleParser::BracketExprContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode* RiddleParser::BracketExprContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::BracketExprContext::BracketExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BracketExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracketExpr(this);
}
void RiddleParser::BracketExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracketExpr(this);
}

std::any RiddleParser::BracketExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBracketExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::IntLitContext::Decimal() {
  return getToken(RiddleParser::Decimal, 0);
}

RiddleParser::IntLitContext::IntLitContext(ExpressionContext *ctx) { copyFrom(ctx); }

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
//----------------- BlockExprContext ------------------------------------------------------------------

RiddleParser::BlockContext* RiddleParser::BlockExprContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}

RiddleParser::BlockExprContext::BlockExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BlockExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockExpr(this);
}
void RiddleParser::BlockExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockExpr(this);
}

std::any RiddleParser::BlockExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBlockExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::CallExprContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::CallExprContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::CallExprContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::CallExprContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::CallExprContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::CallExprContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}

RiddleParser::CallExprContext::CallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::CallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallExpr(this);
}
void RiddleParser::CallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallExpr(this);
}

std::any RiddleParser::CallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharLitContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::CharLitContext::CHAR() {
  return getToken(RiddleParser::CHAR, 0);
}

RiddleParser::CharLitContext::CharLitContext(ExpressionContext *ctx) { copyFrom(ctx); }

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
//----------------- ObjectContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::ObjectContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}

RiddleParser::ObjectContext::ObjectContext(ExpressionContext *ctx) { copyFrom(ctx); }

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

RiddleParser::ExpressionContext* RiddleParser::expression() {
   return expression(0);
}

RiddleParser::ExpressionContext* RiddleParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  RiddleParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  RiddleParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, RiddleParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Identifier: {
        _localctx = _tracker.createInstance<ObjectContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(114);
        match(RiddleParser::Identifier);
        break;
      }

      case RiddleParser::LeftCurly: {
        _localctx = _tracker.createInstance<BlockExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(115);
        block();
        break;
      }

      case RiddleParser::Decimal: {
        _localctx = _tracker.createInstance<IntLitContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(116);
        match(RiddleParser::Decimal);
        break;
      }

      case RiddleParser::Float: {
        _localctx = _tracker.createInstance<FloatLitContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(117);
        match(RiddleParser::Float);
        break;
      }

      case RiddleParser::CHAR: {
        _localctx = _tracker.createInstance<CharLitContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(118);
        match(RiddleParser::CHAR);
        break;
      }

      case RiddleParser::True:
      case RiddleParser::False: {
        _localctx = _tracker.createInstance<BoolLitContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(119);
        _la = _input->LA(1);
        if (!(_la == RiddleParser::True

        || _la == RiddleParser::False)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case RiddleParser::LeftParen: {
        _localctx = _tracker.createInstance<BracketExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(120);
        match(RiddleParser::LeftParen);
        setState(121);
        expression(0);
        setState(122);
        match(RiddleParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(141);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<CallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->func = previousContext;
        pushNewRecursionContext(newContext, startState, RuleExpression);
        setState(126);

        if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
        setState(127);
        match(RiddleParser::LeftParen);
        setState(136);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 73014493184) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 75)) & 4133) != 0)) {
          setState(128);
          expression(0);
          setState(133);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == RiddleParser::Comma) {
            setState(129);
            match(RiddleParser::Comma);
            setState(130);
            expression(0);
            setState(135);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(138);
        match(RiddleParser::RightParen); 
      }
      setState(143);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
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
  enterRule(_localctx, 22, RiddleParser::RuleBlock);
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
    setState(144);
    match(RiddleParser::LeftCurly);
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 75161986566) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 4133) != 0)) {
      setState(145);
      statementEnd();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
    match(RiddleParser::RightCurly);
   
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
    case 10: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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

bool RiddleParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 8);

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
