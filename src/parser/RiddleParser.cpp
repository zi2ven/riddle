
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

  std::vector<dfa::DFA> decisionToDFA;
  atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const dfa::Vocabulary vocabulary;
  atn::SerializedATNView serializedATN;
  std::unique_ptr<atn::ATN> atn;
};

internal::OnceFlag riddleparserParserOnceFlag;
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
      "program", "expressionEnd", "expression", "statement", "packStmt", 
      "varDecl", "block", "initList", "declArgs", "modifier", "funcDecl", 
      "ifStmt", "whileStmt", "forStmt", "returnStmt", "classDecl", "id"
    },
    std::vector<std::string>{
      "", "'var'", "'val'", "'for'", "'while'", "'continue'", "'break'", 
      "'if'", "'else'", "'fun'", "'return'", "'import'", "'package'", "'class'", 
      "'true'", "'false'", "'null'", "'try'", "'catch'", "'override'", "'static'", 
      "'const'", "'public'", "'protected'", "'private'", "'virtual'", "'operator'", 
      "'('", "')'", "'['", "']'", "'{'", "'}'", "':'", "';'", "','", "'=='", 
      "'!='", "'='", "'>'", "'>='", "'<'", "'<='", "'<<'", "'>>'", "'+'", 
      "'-'", "'*'", "'/'", "'%'", "'!'", "'&'", "'|'", "'^'", "'.'", "'\"'", 
      "'''", "'~'", "'+='", "'-='", "'*='", "'/='", "'%='", "'<<='", "'>>='", 
      "'&='", "'|='", "'^='", "'\\n'"
    },
    std::vector<std::string>{
      "", "Var", "Val", "For", "While", "Continue", "Break", "If", "Else", 
      "Func", "Return", "Import", "Package", "Class", "True", "False", "Null", 
      "Try", "Catch", "Override", "Static", "Const", "Public", "Protected", 
      "Private", "Virtual", "Operator", "LeftBracket", "RightBracket", "LeftSquare", 
      "RightSquare", "LeftCurly", "RightCurly", "Colon", "Semi", "Comma", 
      "Equal", "NotEqual", "Assign", "Greater", "GreaterEqual", "Less", 
      "LessEqual", "LeftShift", "RightShift", "Add", "Sub", "Star", "Div", 
      "Mod", "Not", "And", "Or", "Xor", "Dot", "DoubleQuotes", "Quotes", 
      "Tilde", "AddAssign", "SubAssign", "MulAssign", "DivAssign", "ModAssign", 
      "LeftShiftAssign", "RightShiftAssign", "AndAssign", "OrAssign", "XorAssign", 
      "Endl", "Identifier", "Hexadecimal", "Decimal", "Octal", "Binary", 
      "Float", "IntegerSequence", "HEX_DIGIT", "OCTAL_DIGIT", "BINARY_DIGIT", 
      "DIGIT", "STRING", "CHAR", "LINE_COMMENT", "BLOCK_COMMENT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,84,325,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,0,1,0,1,1,1,
  	1,1,1,3,1,46,8,1,1,1,1,1,3,1,50,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,3,2,66,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,5,2,115,8,2,10,2,12,2,118,9,2,3,2,120,8,2,1,2,1,2,1,2,5,2,
  	125,8,2,10,2,12,2,128,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,
  	140,8,3,1,4,1,4,1,4,1,4,5,4,146,8,4,10,4,12,4,149,9,4,1,5,5,5,152,8,5,
  	10,5,12,5,155,9,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,165,8,5,10,5,12,
  	5,168,9,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,176,8,5,10,5,12,5,179,9,5,1,5,1,
  	5,1,5,1,5,1,5,3,5,186,8,5,1,6,1,6,5,6,190,8,6,10,6,12,6,193,9,6,1,6,1,
  	6,1,7,1,7,1,7,1,7,5,7,201,8,7,10,7,12,7,204,9,7,3,7,206,8,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,5,8,215,8,8,10,8,12,8,218,9,8,1,8,1,8,1,8,1,8,3,8,224,
  	8,8,1,8,1,8,1,8,1,8,1,8,1,8,4,8,232,8,8,11,8,12,8,233,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,3,8,245,8,8,1,9,1,9,1,10,5,10,250,8,10,10,10,12,10,
  	253,9,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,263,8,10,1,10,1,
  	10,1,10,5,10,268,8,10,10,10,12,10,271,9,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,3,10,282,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,
  	11,291,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,3,13,302,8,13,
  	1,13,1,13,3,13,306,8,13,1,13,1,13,3,13,310,8,13,1,13,1,13,1,13,1,14,1,
  	14,3,14,317,8,14,1,15,1,15,1,15,1,15,1,16,1,16,1,16,0,1,4,17,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,0,10,3,0,45,46,50,50,57,57,1,0,
  	14,15,1,0,47,49,1,0,45,46,1,0,43,44,1,0,39,42,1,0,36,37,2,0,38,38,58,
  	67,1,0,1,2,2,0,19,20,22,24,367,0,37,1,0,0,0,2,49,1,0,0,0,4,65,1,0,0,0,
  	6,139,1,0,0,0,8,141,1,0,0,0,10,185,1,0,0,0,12,187,1,0,0,0,14,196,1,0,
  	0,0,16,244,1,0,0,0,18,246,1,0,0,0,20,281,1,0,0,0,22,283,1,0,0,0,24,292,
  	1,0,0,0,26,298,1,0,0,0,28,314,1,0,0,0,30,318,1,0,0,0,32,322,1,0,0,0,34,
  	36,3,2,1,0,35,34,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,
  	40,1,0,0,0,39,37,1,0,0,0,40,41,5,0,0,1,41,1,1,0,0,0,42,43,3,4,2,0,43,
  	45,5,34,0,0,44,46,5,68,0,0,45,44,1,0,0,0,45,46,1,0,0,0,46,50,1,0,0,0,
  	47,50,5,68,0,0,48,50,5,34,0,0,49,42,1,0,0,0,49,47,1,0,0,0,49,48,1,0,0,
  	0,50,3,1,0,0,0,51,52,6,2,-1,0,52,66,3,6,3,0,53,54,5,47,0,0,54,66,3,4,
  	2,18,55,56,7,0,0,0,56,66,3,4,2,17,57,66,5,71,0,0,58,66,5,74,0,0,59,66,
  	7,1,0,0,60,66,3,32,16,0,61,62,5,27,0,0,62,63,3,4,2,0,63,64,5,28,0,0,64,
  	66,1,0,0,0,65,51,1,0,0,0,65,53,1,0,0,0,65,55,1,0,0,0,65,57,1,0,0,0,65,
  	58,1,0,0,0,65,59,1,0,0,0,65,60,1,0,0,0,65,61,1,0,0,0,66,126,1,0,0,0,67,
  	68,10,22,0,0,68,69,5,33,0,0,69,70,5,33,0,0,70,125,3,4,2,23,71,72,10,21,
  	0,0,72,73,5,54,0,0,73,125,3,4,2,22,74,75,10,16,0,0,75,76,7,2,0,0,76,125,
  	3,4,2,17,77,78,10,15,0,0,78,79,7,3,0,0,79,125,3,4,2,16,80,81,10,14,0,
  	0,81,82,7,4,0,0,82,125,3,4,2,15,83,84,10,13,0,0,84,85,7,5,0,0,85,125,
  	3,4,2,14,86,87,10,12,0,0,87,88,7,6,0,0,88,125,3,4,2,13,89,90,10,11,0,
  	0,90,91,5,51,0,0,91,125,3,4,2,12,92,93,10,10,0,0,93,94,5,53,0,0,94,125,
  	3,4,2,11,95,96,10,9,0,0,96,97,5,52,0,0,97,125,3,4,2,10,98,99,10,8,0,0,
  	99,100,5,51,0,0,100,101,5,51,0,0,101,125,3,4,2,9,102,103,10,7,0,0,103,
  	104,5,52,0,0,104,105,5,52,0,0,105,125,3,4,2,8,106,107,10,6,0,0,107,108,
  	7,7,0,0,108,125,3,4,2,7,109,110,10,20,0,0,110,119,5,27,0,0,111,116,3,
  	4,2,0,112,113,5,35,0,0,113,115,3,4,2,0,114,112,1,0,0,0,115,118,1,0,0,
  	0,116,114,1,0,0,0,116,117,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,119,
  	111,1,0,0,0,119,120,1,0,0,0,120,121,1,0,0,0,121,125,5,28,0,0,122,123,
  	10,19,0,0,123,125,5,47,0,0,124,67,1,0,0,0,124,71,1,0,0,0,124,74,1,0,0,
  	0,124,77,1,0,0,0,124,80,1,0,0,0,124,83,1,0,0,0,124,86,1,0,0,0,124,89,
  	1,0,0,0,124,92,1,0,0,0,124,95,1,0,0,0,124,98,1,0,0,0,124,102,1,0,0,0,
  	124,106,1,0,0,0,124,109,1,0,0,0,124,122,1,0,0,0,125,128,1,0,0,0,126,124,
  	1,0,0,0,126,127,1,0,0,0,127,5,1,0,0,0,128,126,1,0,0,0,129,140,3,10,5,
  	0,130,140,3,20,10,0,131,140,3,30,15,0,132,140,3,14,7,0,133,140,3,12,6,
  	0,134,140,3,28,14,0,135,140,3,8,4,0,136,140,3,22,11,0,137,140,3,24,12,
  	0,138,140,3,26,13,0,139,129,1,0,0,0,139,130,1,0,0,0,139,131,1,0,0,0,139,
  	132,1,0,0,0,139,133,1,0,0,0,139,134,1,0,0,0,139,135,1,0,0,0,139,136,1,
  	0,0,0,139,137,1,0,0,0,139,138,1,0,0,0,140,7,1,0,0,0,141,142,5,12,0,0,
  	142,147,3,32,16,0,143,144,5,54,0,0,144,146,3,32,16,0,145,143,1,0,0,0,
  	146,149,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,9,1,0,0,0,149,147,
  	1,0,0,0,150,152,3,18,9,0,151,150,1,0,0,0,152,155,1,0,0,0,153,151,1,0,
  	0,0,153,154,1,0,0,0,154,156,1,0,0,0,155,153,1,0,0,0,156,157,7,8,0,0,157,
  	158,3,32,16,0,158,159,5,33,0,0,159,160,3,4,2,0,160,161,5,38,0,0,161,162,
  	3,4,2,0,162,186,1,0,0,0,163,165,3,18,9,0,164,163,1,0,0,0,165,168,1,0,
  	0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,169,1,0,0,0,168,166,1,0,0,0,169,
  	170,7,8,0,0,170,171,3,32,16,0,171,172,5,38,0,0,172,173,3,4,2,0,173,186,
  	1,0,0,0,174,176,3,18,9,0,175,174,1,0,0,0,176,179,1,0,0,0,177,175,1,0,
  	0,0,177,178,1,0,0,0,178,180,1,0,0,0,179,177,1,0,0,0,180,181,7,8,0,0,181,
  	182,3,32,16,0,182,183,5,33,0,0,183,184,3,4,2,0,184,186,1,0,0,0,185,153,
  	1,0,0,0,185,166,1,0,0,0,185,177,1,0,0,0,186,11,1,0,0,0,187,191,5,31,0,
  	0,188,190,3,2,1,0,189,188,1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,
  	192,1,0,0,0,192,194,1,0,0,0,193,191,1,0,0,0,194,195,5,32,0,0,195,13,1,
  	0,0,0,196,205,5,31,0,0,197,202,3,4,2,0,198,199,5,35,0,0,199,201,3,4,2,
  	0,200,198,1,0,0,0,201,204,1,0,0,0,202,200,1,0,0,0,202,203,1,0,0,0,203,
  	206,1,0,0,0,204,202,1,0,0,0,205,197,1,0,0,0,205,206,1,0,0,0,206,207,1,
  	0,0,0,207,208,5,32,0,0,208,15,1,0,0,0,209,210,3,32,16,0,210,211,5,33,
  	0,0,211,212,3,4,2,0,212,213,5,35,0,0,213,215,1,0,0,0,214,209,1,0,0,0,
  	215,218,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,0,217,223,1,0,0,0,218,216,
  	1,0,0,0,219,220,3,32,16,0,220,221,5,33,0,0,221,222,3,4,2,0,222,224,1,
  	0,0,0,223,219,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,225,245,6,8,-1,
  	0,226,227,3,32,16,0,227,228,5,33,0,0,228,229,3,4,2,0,229,230,5,35,0,0,
  	230,232,1,0,0,0,231,226,1,0,0,0,232,233,1,0,0,0,233,231,1,0,0,0,233,234,
  	1,0,0,0,234,235,1,0,0,0,235,236,5,54,0,0,236,237,5,54,0,0,237,238,5,54,
  	0,0,238,239,6,8,-1,0,239,245,1,0,0,0,240,241,5,54,0,0,241,242,5,54,0,
  	0,242,243,5,54,0,0,243,245,6,8,-1,0,244,216,1,0,0,0,244,231,1,0,0,0,244,
  	240,1,0,0,0,245,17,1,0,0,0,246,247,7,9,0,0,247,19,1,0,0,0,248,250,3,18,
  	9,0,249,248,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,
  	254,1,0,0,0,253,251,1,0,0,0,254,255,5,9,0,0,255,256,3,32,16,0,256,257,
  	5,27,0,0,257,258,3,16,8,0,258,262,5,28,0,0,259,260,5,46,0,0,260,261,5,
  	39,0,0,261,263,3,4,2,0,262,259,1,0,0,0,262,263,1,0,0,0,263,264,1,0,0,
  	0,264,265,3,12,6,0,265,282,1,0,0,0,266,268,3,18,9,0,267,266,1,0,0,0,268,
  	271,1,0,0,0,269,267,1,0,0,0,269,270,1,0,0,0,270,272,1,0,0,0,271,269,1,
  	0,0,0,272,273,5,9,0,0,273,274,3,32,16,0,274,275,5,27,0,0,275,276,3,16,
  	8,0,276,277,5,28,0,0,277,278,5,46,0,0,278,279,5,39,0,0,279,280,3,4,2,
  	0,280,282,1,0,0,0,281,251,1,0,0,0,281,269,1,0,0,0,282,21,1,0,0,0,283,
  	284,5,7,0,0,284,285,5,27,0,0,285,286,3,4,2,0,286,287,5,28,0,0,287,290,
  	3,12,6,0,288,289,5,8,0,0,289,291,3,12,6,0,290,288,1,0,0,0,290,291,1,0,
  	0,0,291,23,1,0,0,0,292,293,5,4,0,0,293,294,5,27,0,0,294,295,3,4,2,0,295,
  	296,5,28,0,0,296,297,3,12,6,0,297,25,1,0,0,0,298,299,5,3,0,0,299,301,
  	5,27,0,0,300,302,3,4,2,0,301,300,1,0,0,0,301,302,1,0,0,0,302,303,1,0,
  	0,0,303,305,5,34,0,0,304,306,3,4,2,0,305,304,1,0,0,0,305,306,1,0,0,0,
  	306,307,1,0,0,0,307,309,5,34,0,0,308,310,3,4,2,0,309,308,1,0,0,0,309,
  	310,1,0,0,0,310,311,1,0,0,0,311,312,5,28,0,0,312,313,3,12,6,0,313,27,
  	1,0,0,0,314,316,5,10,0,0,315,317,3,4,2,0,316,315,1,0,0,0,316,317,1,0,
  	0,0,317,29,1,0,0,0,318,319,5,13,0,0,319,320,3,32,16,0,320,321,3,12,6,
  	0,321,31,1,0,0,0,322,323,5,69,0,0,323,33,1,0,0,0,30,37,45,49,65,116,119,
  	124,126,139,147,153,166,177,185,191,202,205,216,223,233,244,251,262,269,
  	281,290,301,305,309,316
  };
  staticData->serializedATN = atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  riddleparserParserStaticData = std::move(staticData);
}

}

RiddleParser::RiddleParser(TokenStream *input) : RiddleParser(input, atn::ParserATNSimulatorOptions()) {}

RiddleParser::RiddleParser(TokenStream *input, const atn::ParserATNSimulatorOptions &options) : Parser(input) {
  initialize();
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

atn::SerializedATNView RiddleParser::getSerializedATN() const {
  return riddleparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

RiddleParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ProgramContext::EOF() {
  return getToken(RiddleParser::EOF, 0);
}

std::vector<RiddleParser::ExpressionEndContext *> RiddleParser::ProgramContext::expressionEnd() {
  return getRuleContexts<ExpressionEndContext>();
}

RiddleParser::ExpressionEndContext* RiddleParser::ProgramContext::expressionEnd(size_t i) {
  return getRuleContext<ExpressionEndContext>(i);
}


size_t RiddleParser::ProgramContext::getRuleIndex() const {
  return RuleProgram;
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
  enterRule(_localctx, 0, RuleProgram);
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
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 145487398079887006) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 75) != 0)) {
      setState(34);
      expressionEnd();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionEndContext ------------------------------------------------------------------

RiddleParser::ExpressionEndContext::ExpressionEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::ExpressionContext* RiddleParser::ExpressionEndContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}

tree::TerminalNode* RiddleParser::ExpressionEndContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
}

tree::TerminalNode* RiddleParser::ExpressionEndContext::Endl() {
  return getToken(RiddleParser::Endl, 0);
}


size_t RiddleParser::ExpressionEndContext::getRuleIndex() const {
  return RuleExpressionEnd;
}

void RiddleParser::ExpressionEndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionEnd(this);
}

void RiddleParser::ExpressionEndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionEnd(this);
}


std::any RiddleParser::ExpressionEndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitExpressionEnd(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ExpressionEndContext* RiddleParser::expressionEnd() {
  ExpressionEndContext *_localctx = _tracker.createInstance<ExpressionEndContext>(_ctx, getState());
  enterRule(_localctx, 2, RuleExpressionEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Var:
      case Val:
      case For:
      case While:
      case If:
      case Func:
      case Return:
      case Package:
      case Class:
      case True:
      case False:
      case Override:
      case Static:
      case Public:
      case Protected:
      case Private:
      case LeftBracket:
      case LeftCurly:
      case Add:
      case Sub:
      case Star:
      case Not:
      case Tilde:
      case Identifier:
      case Decimal:
      case Float: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        expression(0);
        setState(43);
        match(Semi);
        setState(45);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(44);
          match(Endl);
          break;
        }

        default:
          break;
        }
        break;
      }

      case Endl: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        match(Endl);
        break;
      }

      case Semi: {
        enterOuterAlt(_localctx, 3);
        setState(48);
        match(Semi);
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


size_t RiddleParser::ExpressionContext::getRuleIndex() const {
  return RuleExpression;
}

void RiddleParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LoadExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::LoadExprContext::Star() {
  return getToken(RiddleParser::Star, 0);
}

RiddleParser::ExpressionContext* RiddleParser::LoadExprContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}

RiddleParser::LoadExprContext::LoadExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::LoadExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadExpr(this);
}
void RiddleParser::LoadExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadExpr(this);
}

std::any RiddleParser::LoadExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitLoadExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberAccessContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::MemberAccessContext::Dot() {
  return getToken(RiddleParser::Dot, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::MemberAccessContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::MemberAccessContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::MemberAccessContext::MemberAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::MemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccess(this);
}
void RiddleParser::MemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccess(this);
}

std::any RiddleParser::MemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitMemberAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::EqOpContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::EqOpContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::EqOpContext::Equal() {
  return getToken(RiddleParser::Equal, 0);
}

tree::TerminalNode* RiddleParser::EqOpContext::NotEqual() {
  return getToken(RiddleParser::NotEqual, 0);
}

RiddleParser::EqOpContext::EqOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::EqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqOp(this);
}
void RiddleParser::EqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqOp(this);
}

std::any RiddleParser::EqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitEqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BracketExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BracketExprContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

tree::TerminalNode* RiddleParser::BracketExprContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::ExpressionContext* RiddleParser::BracketExprContext::expression() {
  return getRuleContext<ExpressionContext>(0);
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
//----------------- BitOrContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BitOrContext::Or() {
  return getToken(RiddleParser::Or, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::BitOrContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::BitOrContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::BitOrContext::BitOrContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BitOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOr(this);
}
void RiddleParser::BitOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOr(this);
}

std::any RiddleParser::BitOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicOrContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> RiddleParser::LogicOrContext::Or() {
  return getTokens(RiddleParser::Or);
}

tree::TerminalNode* RiddleParser::LogicOrContext::Or(size_t i) {
  return getToken(RiddleParser::Or, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LogicOrContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::LogicOrContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::LogicOrContext::LogicOrContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::LogicOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicOr(this);
}
void RiddleParser::LogicOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicOr(this);
}

std::any RiddleParser::LogicOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitLogicOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AddOpContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::AddOpContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::AddOpContext::Add() {
  return getToken(RiddleParser::Add, 0);
}

tree::TerminalNode* RiddleParser::AddOpContext::Sub() {
  return getToken(RiddleParser::Sub, 0);
}

RiddleParser::AddOpContext::AddOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::AddOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOp(this);
}
void RiddleParser::AddOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOp(this);
}

std::any RiddleParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompoundAssignOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::CompoundAssignOpContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::CompoundAssignOpContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::Assign() {
  return getToken(RiddleParser::Assign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::AddAssign() {
  return getToken(RiddleParser::AddAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::SubAssign() {
  return getToken(RiddleParser::SubAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::MulAssign() {
  return getToken(RiddleParser::MulAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::DivAssign() {
  return getToken(RiddleParser::DivAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::ModAssign() {
  return getToken(RiddleParser::ModAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::LeftShiftAssign() {
  return getToken(RiddleParser::LeftShiftAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::RightShiftAssign() {
  return getToken(RiddleParser::RightShiftAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::AndAssign() {
  return getToken(RiddleParser::AndAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::XorAssign() {
  return getToken(RiddleParser::XorAssign, 0);
}

tree::TerminalNode* RiddleParser::CompoundAssignOpContext::OrAssign() {
  return getToken(RiddleParser::OrAssign, 0);
}

RiddleParser::CompoundAssignOpContext::CompoundAssignOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::CompoundAssignOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundAssignOp(this);
}
void RiddleParser::CompoundAssignOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundAssignOp(this);
}

std::any RiddleParser::CompoundAssignOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitCompoundAssignOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryOpContext ------------------------------------------------------------------

RiddleParser::ExpressionContext* RiddleParser::UnaryOpContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}

tree::TerminalNode* RiddleParser::UnaryOpContext::Not() {
  return getToken(RiddleParser::Not, 0);
}

tree::TerminalNode* RiddleParser::UnaryOpContext::Add() {
  return getToken(RiddleParser::Add, 0);
}

tree::TerminalNode* RiddleParser::UnaryOpContext::Sub() {
  return getToken(RiddleParser::Sub, 0);
}

tree::TerminalNode* RiddleParser::UnaryOpContext::Tilde() {
  return getToken(RiddleParser::Tilde, 0);
}

RiddleParser::UnaryOpContext::UnaryOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::UnaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOp(this);
}
void RiddleParser::UnaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOp(this);
}

std::any RiddleParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::IntegerContext::Decimal() {
  return getToken(RiddleParser::Decimal, 0);
}

RiddleParser::IntegerContext::IntegerContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::IntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger(this);
}
void RiddleParser::IntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger(this);
}

std::any RiddleParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::FloatContext::Float() {
  return getToken(RiddleParser::Float, 0);
}

RiddleParser::FloatContext::FloatContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::FloatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat(this);
}
void RiddleParser::FloatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat(this);
}

std::any RiddleParser::FloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ScopeAccessContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> RiddleParser::ScopeAccessContext::Colon() {
  return getTokens(RiddleParser::Colon);
}

tree::TerminalNode* RiddleParser::ScopeAccessContext::Colon(size_t i) {
  return getToken(RiddleParser::Colon, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ScopeAccessContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::ScopeAccessContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::ScopeAccessContext::ScopeAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::ScopeAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopeAccess(this);
}
void RiddleParser::ScopeAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopeAccess(this);
}

std::any RiddleParser::ScopeAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitScopeAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::RelOpContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::RelOpContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::RelOpContext::Less() {
  return getToken(RiddleParser::Less, 0);
}

tree::TerminalNode* RiddleParser::RelOpContext::LessEqual() {
  return getToken(RiddleParser::LessEqual, 0);
}

tree::TerminalNode* RiddleParser::RelOpContext::Greater() {
  return getToken(RiddleParser::Greater, 0);
}

tree::TerminalNode* RiddleParser::RelOpContext::GreaterEqual() {
  return getToken(RiddleParser::GreaterEqual, 0);
}

RiddleParser::RelOpContext::RelOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::RelOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelOp(this);
}
void RiddleParser::RelOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelOp(this);
}

std::any RiddleParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PointerToContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::PointerToContext::Star() {
  return getToken(RiddleParser::Star, 0);
}

RiddleParser::ExpressionContext* RiddleParser::PointerToContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}

RiddleParser::PointerToContext::PointerToContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::PointerToContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerTo(this);
}
void RiddleParser::PointerToContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerTo(this);
}

std::any RiddleParser::PointerToContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitPointerTo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitAndContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BitAndContext::And() {
  return getToken(RiddleParser::And, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::BitAndContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::BitAndContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::BitAndContext::BitAndContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BitAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAnd(this);
}
void RiddleParser::BitAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAnd(this);
}

std::any RiddleParser::BitAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicAndContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> RiddleParser::LogicAndContext::And() {
  return getTokens(RiddleParser::And);
}

tree::TerminalNode* RiddleParser::LogicAndContext::And(size_t i) {
  return getToken(RiddleParser::And, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LogicAndContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::LogicAndContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::LogicAndContext::LogicAndContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::LogicAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicAnd(this);
}
void RiddleParser::LogicAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicAnd(this);
}

std::any RiddleParser::LogicAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitLogicAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BooleanContext::True() {
  return getToken(RiddleParser::True, 0);
}

tree::TerminalNode* RiddleParser::BooleanContext::False() {
  return getToken(RiddleParser::False, 0);
}

RiddleParser::BooleanContext::BooleanContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BooleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean(this);
}
void RiddleParser::BooleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean(this);
}

std::any RiddleParser::BooleanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBoolean(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::MulOpContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::MulOpContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::MulOpContext::Star() {
  return getToken(RiddleParser::Star, 0);
}

tree::TerminalNode* RiddleParser::MulOpContext::Div() {
  return getToken(RiddleParser::Div, 0);
}

tree::TerminalNode* RiddleParser::MulOpContext::Mod() {
  return getToken(RiddleParser::Mod, 0);
}

RiddleParser::MulOpContext::MulOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::MulOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulOp(this);
}
void RiddleParser::MulOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulOp(this);
}

std::any RiddleParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitXorContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::BitXorContext::Xor() {
  return getToken(RiddleParser::Xor, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::BitXorContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::BitXorContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

RiddleParser::BitXorContext::BitXorContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::BitXorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXor(this);
}
void RiddleParser::BitXorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXor(this);
}

std::any RiddleParser::BitXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitBitXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementExprContext ------------------------------------------------------------------

RiddleParser::StatementContext* RiddleParser::StatementExprContext::statement() {
  return getRuleContext<StatementContext>(0);
}

RiddleParser::StatementExprContext::StatementExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::StatementExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementExpr(this);
}
void RiddleParser::StatementExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementExpr(this);
}

std::any RiddleParser::StatementExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitStatementExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CallExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::CallExprContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

tree::TerminalNode* RiddleParser::CallExprContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::CallExprContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::CallExprContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
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
//----------------- ObjectContext ------------------------------------------------------------------

RiddleParser::IdContext* RiddleParser::ObjectContext::id() {
  return getRuleContext<IdContext>(0);
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
//----------------- ShiftOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ShiftOpContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::ShiftOpContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::ShiftOpContext::LeftShift() {
  return getToken(RiddleParser::LeftShift, 0);
}

tree::TerminalNode* RiddleParser::ShiftOpContext::RightShift() {
  return getToken(RiddleParser::RightShift, 0);
}

RiddleParser::ShiftOpContext::ShiftOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::ShiftOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftOp(this);
}
void RiddleParser::ShiftOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftOp(this);
}

std::any RiddleParser::ShiftOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitShiftOp(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ExpressionContext* RiddleParser::expression() {
   return expression(0);
}

RiddleParser::ExpressionContext* RiddleParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, RuleExpression, precedence);

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
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Var:
      case Val:
      case For:
      case While:
      case If:
      case Func:
      case Return:
      case Package:
      case Class:
      case Override:
      case Static:
      case Public:
      case Protected:
      case Private:
      case LeftCurly: {
        _localctx = _tracker.createInstance<StatementExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(52);
        statement();
        break;
      }

      case Star: {
        _localctx = _tracker.createInstance<LoadExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(53);
        match(Star);
        setState(54);
        antlrcpp::downCast<LoadExprContext *>(_localctx)->obj = expression(18);
        break;
      }

      case Add:
      case Sub:
      case Not:
      case Tilde: {
        _localctx = _tracker.createInstance<UnaryOpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(55);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 145346641098964992) != 0))) {
          antlrcpp::downCast<UnaryOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(56);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->value = expression(17);
        break;
      }

      case Decimal: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(Decimal);
        break;
      }

      case Float: {
        _localctx = _tracker.createInstance<FloatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(58);
        match(Float);
        break;
      }

      case True:
      case False: {
        _localctx = _tracker.createInstance<BooleanContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(59);
        _la = _input->LA(1);
        if (!(_la == True

        || _la == False)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Identifier: {
        _localctx = _tracker.createInstance<ObjectContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(60);
        id();
        break;
      }

      case LeftBracket: {
        _localctx = _tracker.createInstance<BracketExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(61);
        match(LeftBracket);
        setState(62);
        antlrcpp::downCast<BracketExprContext *>(_localctx)->value = expression(0);
        setState(63);
        match(RightBracket);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(126);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(124);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ScopeAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(67);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(68);
          match(Colon);
          setState(69);
          match(Colon);
          setState(70);
          antlrcpp::downCast<ScopeAccessContext *>(_localctx)->right = expression(23);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MemberAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(71);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(72);
          match(Dot);
          setState(73);
          antlrcpp::downCast<MemberAccessContext *>(_localctx)->right = expression(22);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(74);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(75);
          antlrcpp::downCast<MulOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 985162418487296) != 0))) {
            antlrcpp::downCast<MulOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(76);
          antlrcpp::downCast<MulOpContext *>(_localctx)->right = expression(17);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(77);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(78);
          antlrcpp::downCast<AddOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == Add

          || _la == Sub)) {
            antlrcpp::downCast<AddOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(79);
          antlrcpp::downCast<AddOpContext *>(_localctx)->right = expression(16);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ShiftOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(80);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(81);
          antlrcpp::downCast<ShiftOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == LeftShift

          || _la == RightShift)) {
            antlrcpp::downCast<ShiftOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(82);
          antlrcpp::downCast<ShiftOpContext *>(_localctx)->right = expression(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<RelOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(83);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(84);
          antlrcpp::downCast<RelOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8246337208320) != 0))) {
            antlrcpp::downCast<RelOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(85);
          antlrcpp::downCast<RelOpContext *>(_localctx)->right = expression(14);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(86);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(87);
          antlrcpp::downCast<EqOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == Equal

          || _la == NotEqual)) {
            antlrcpp::downCast<EqOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(88);
          antlrcpp::downCast<EqOpContext *>(_localctx)->right = expression(13);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(89);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(90);
          match(And);
          setState(91);
          antlrcpp::downCast<BitAndContext *>(_localctx)->right = expression(12);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(92);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(93);
          match(Xor);
          setState(94);
          antlrcpp::downCast<BitXorContext *>(_localctx)->right = expression(11);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(95);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(96);
          match(Or);
          setState(97);
          antlrcpp::downCast<BitOrContext *>(_localctx)->right = expression(10);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(98);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(99);
          match(And);
          setState(100);
          match(And);
          setState(101);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->right = expression(9);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(102);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(103);
          match(Or);
          setState(104);
          match(Or);
          setState(105);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->right = expression(8);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CompoundAssignOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(106);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(107);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 38) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 38)) & 1072693249) != 0))) {
            antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(108);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->right = expression(7);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<CallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(109);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(110);
          match(LeftBracket);
          setState(119);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 145487380900017822) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 69)) & 37) != 0)) {
            setState(111);
            expression(0);
            setState(116);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == Comma) {
              setState(112);
              match(Comma);
              setState(113);
              expression(0);
              setState(118);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(121);
          match(RightBracket);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<PointerToContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(122);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(123);
          match(Star);
          break;
        }

        default:
          break;
        } 
      }
      setState(128);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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

RiddleParser::VarDeclContext* RiddleParser::StatementContext::varDecl() {
  return getRuleContext<VarDeclContext>(0);
}

RiddleParser::FuncDeclContext* RiddleParser::StatementContext::funcDecl() {
  return getRuleContext<FuncDeclContext>(0);
}

RiddleParser::ClassDeclContext* RiddleParser::StatementContext::classDecl() {
  return getRuleContext<ClassDeclContext>(0);
}

RiddleParser::InitListContext* RiddleParser::StatementContext::initList() {
  return getRuleContext<InitListContext>(0);
}

RiddleParser::BlockContext* RiddleParser::StatementContext::block() {
  return getRuleContext<BlockContext>(0);
}

RiddleParser::ReturnStmtContext* RiddleParser::StatementContext::returnStmt() {
  return getRuleContext<ReturnStmtContext>(0);
}

RiddleParser::PackStmtContext* RiddleParser::StatementContext::packStmt() {
  return getRuleContext<PackStmtContext>(0);
}

RiddleParser::IfStmtContext* RiddleParser::StatementContext::ifStmt() {
  return getRuleContext<IfStmtContext>(0);
}

RiddleParser::WhileStmtContext* RiddleParser::StatementContext::whileStmt() {
  return getRuleContext<WhileStmtContext>(0);
}

RiddleParser::ForStmtContext* RiddleParser::StatementContext::forStmt() {
  return getRuleContext<ForStmtContext>(0);
}


size_t RiddleParser::StatementContext::getRuleIndex() const {
  return RuleStatement;
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
  enterRule(_localctx, 6, RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(139);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(129);
      varDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(130);
      funcDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(131);
      classDecl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(132);
      initList();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(133);
      block();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(134);
      returnStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(135);
      packStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(136);
      ifStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(137);
      whileStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(138);
      forStmt();
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

//----------------- PackStmtContext ------------------------------------------------------------------

RiddleParser::PackStmtContext::PackStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::PackStmtContext::Package() {
  return getToken(RiddleParser::Package, 0);
}

std::vector<RiddleParser::IdContext *> RiddleParser::PackStmtContext::id() {
  return getRuleContexts<IdContext>();
}

RiddleParser::IdContext* RiddleParser::PackStmtContext::id(size_t i) {
  return getRuleContext<IdContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::PackStmtContext::Dot() {
  return getTokens(RiddleParser::Dot);
}

tree::TerminalNode* RiddleParser::PackStmtContext::Dot(size_t i) {
  return getToken(RiddleParser::Dot, i);
}


size_t RiddleParser::PackStmtContext::getRuleIndex() const {
  return RulePackStmt;
}

void RiddleParser::PackStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackStmt(this);
}

void RiddleParser::PackStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackStmt(this);
}


std::any RiddleParser::PackStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitPackStmt(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::PackStmtContext* RiddleParser::packStmt() {
  PackStmtContext *_localctx = _tracker.createInstance<PackStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, RulePackStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(Package);
    setState(142);
    id();
    setState(147);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(143);
        match(Dot);
        setState(144);
        id(); 
      }
      setState(149);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
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

tree::TerminalNode* RiddleParser::VarDeclContext::Colon() {
  return getToken(RiddleParser::Colon, 0);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Assign() {
  return getToken(RiddleParser::Assign, 0);
}

RiddleParser::IdContext* RiddleParser::VarDeclContext::id() {
  return getRuleContext<IdContext>(0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::VarDeclContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::VarDeclContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Var() {
  return getToken(RiddleParser::Var, 0);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Val() {
  return getToken(RiddleParser::Val, 0);
}

std::vector<RiddleParser::ModifierContext *> RiddleParser::VarDeclContext::modifier() {
  return getRuleContexts<ModifierContext>();
}

RiddleParser::ModifierContext* RiddleParser::VarDeclContext::modifier(size_t i) {
  return getRuleContext<ModifierContext>(i);
}


size_t RiddleParser::VarDeclContext::getRuleIndex() const {
  return RuleVarDecl;
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
  enterRule(_localctx, 10, RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30932992) != 0)) {
        setState(150);
        modifier();
        setState(155);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(156);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == Var

      || _la == Val)) {
        antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(157);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(158);
      match(Colon);
      setState(159);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
      setState(160);
      match(Assign);
      setState(161);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30932992) != 0)) {
        setState(163);
        modifier();
        setState(168);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(169);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == Var

      || _la == Val)) {
        antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(170);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(171);
      match(Assign);
      setState(172);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30932992) != 0)) {
        setState(174);
        modifier();
        setState(179);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(180);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == Var

      || _la == Val)) {
        antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(181);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(182);
      match(Colon);
      setState(183);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
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

std::vector<RiddleParser::ExpressionEndContext *> RiddleParser::BlockContext::expressionEnd() {
  return getRuleContexts<ExpressionEndContext>();
}

RiddleParser::ExpressionEndContext* RiddleParser::BlockContext::expressionEnd(size_t i) {
  return getRuleContext<ExpressionEndContext>(i);
}


size_t RiddleParser::BlockContext::getRuleIndex() const {
  return RuleBlock;
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
  enterRule(_localctx, 12, RuleBlock);
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
    setState(187);
    match(LeftCurly);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 145487398079887006) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 75) != 0)) {
      setState(188);
      expressionEnd();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(RightCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitListContext ------------------------------------------------------------------

RiddleParser::InitListContext::InitListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::InitListContext::LeftCurly() {
  return getToken(RiddleParser::LeftCurly, 0);
}

tree::TerminalNode* RiddleParser::InitListContext::RightCurly() {
  return getToken(RiddleParser::RightCurly, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::InitListContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::InitListContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::InitListContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::InitListContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::InitListContext::getRuleIndex() const {
  return RuleInitList;
}

void RiddleParser::InitListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitList(this);
}

void RiddleParser::InitListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitList(this);
}


std::any RiddleParser::InitListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitInitList(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::InitListContext* RiddleParser::initList() {
  InitListContext *_localctx = _tracker.createInstance<InitListContext>(_ctx, getState());
  enterRule(_localctx, 14, RuleInitList);
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
    setState(196);
    match(LeftCurly);
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 145487380900017822) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 37) != 0)) {
      setState(197);
      expression(0);
      setState(202);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Comma) {
        setState(198);
        match(Comma);
        setState(199);
        expression(0);
        setState(204);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(207);
    match(RightCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclArgsContext ------------------------------------------------------------------

RiddleParser::DeclArgsContext::DeclArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RiddleParser::IdContext *> RiddleParser::DeclArgsContext::id() {
  return getRuleContexts<IdContext>();
}

RiddleParser::IdContext* RiddleParser::DeclArgsContext::id(size_t i) {
  return getRuleContext<IdContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::DeclArgsContext::Colon() {
  return getTokens(RiddleParser::Colon);
}

tree::TerminalNode* RiddleParser::DeclArgsContext::Colon(size_t i) {
  return getToken(RiddleParser::Colon, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::DeclArgsContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::DeclArgsContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::DeclArgsContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::DeclArgsContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}

std::vector<tree::TerminalNode *> RiddleParser::DeclArgsContext::Dot() {
  return getTokens(RiddleParser::Dot);
}

tree::TerminalNode* RiddleParser::DeclArgsContext::Dot(size_t i) {
  return getToken(RiddleParser::Dot, i);
}


size_t RiddleParser::DeclArgsContext::getRuleIndex() const {
  return RuleDeclArgs;
}

void RiddleParser::DeclArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclArgs(this);
}

void RiddleParser::DeclArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclArgs(this);
}


std::any RiddleParser::DeclArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitDeclArgs(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::DeclArgsContext* RiddleParser::declArgs() {
  DeclArgsContext *_localctx = _tracker.createInstance<DeclArgsContext>(_ctx, getState());
  enterRule(_localctx, 16, RuleDeclArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(216);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(209);
          id();
          setState(210);
          match(Colon);
          setState(211);
          expression(0);
          setState(212);
          match(Comma); 
        }
        setState(218);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
      }
      setState(223);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Identifier) {
        setState(219);
        id();
        setState(220);
        match(Colon);
        setState(221);
        expression(0);
      }
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = false;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(231); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(226);
        id();
        setState(227);
        match(Colon);
        setState(228);
        expression(0);
        setState(229);
        match(Comma);
        setState(233); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == Identifier);
      setState(235);
      match(Dot);
      setState(236);
      match(Dot);
      setState(237);
      match(Dot);
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = true;
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(240);
      match(Dot);
      setState(241);
      match(Dot);
      setState(242);
      match(Dot);
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = true;
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

//----------------- ModifierContext ------------------------------------------------------------------

RiddleParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ModifierContext::Static() {
  return getToken(RiddleParser::Static, 0);
}

tree::TerminalNode* RiddleParser::ModifierContext::Public() {
  return getToken(RiddleParser::Public, 0);
}

tree::TerminalNode* RiddleParser::ModifierContext::Protected() {
  return getToken(RiddleParser::Protected, 0);
}

tree::TerminalNode* RiddleParser::ModifierContext::Private() {
  return getToken(RiddleParser::Private, 0);
}

tree::TerminalNode* RiddleParser::ModifierContext::Override() {
  return getToken(RiddleParser::Override, 0);
}


size_t RiddleParser::ModifierContext::getRuleIndex() const {
  return RuleModifier;
}

void RiddleParser::ModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifier(this);
}

void RiddleParser::ModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifier(this);
}


std::any RiddleParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ModifierContext* RiddleParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 18, RuleModifier);
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
    setState(246);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30932992) != 0))) {
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

//----------------- FuncDeclContext ------------------------------------------------------------------

RiddleParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Func() {
  return getToken(RiddleParser::Func, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

RiddleParser::DeclArgsContext* RiddleParser::FuncDeclContext::declArgs() {
  return getRuleContext<DeclArgsContext>(0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::IdContext* RiddleParser::FuncDeclContext::id() {
  return getRuleContext<IdContext>(0);
}

RiddleParser::BlockContext* RiddleParser::FuncDeclContext::block() {
  return getRuleContext<BlockContext>(0);
}

std::vector<RiddleParser::ModifierContext *> RiddleParser::FuncDeclContext::modifier() {
  return getRuleContexts<ModifierContext>();
}

RiddleParser::ModifierContext* RiddleParser::FuncDeclContext::modifier(size_t i) {
  return getRuleContext<ModifierContext>(i);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Sub() {
  return getToken(RiddleParser::Sub, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Greater() {
  return getToken(RiddleParser::Greater, 0);
}

RiddleParser::ExpressionContext* RiddleParser::FuncDeclContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}


size_t RiddleParser::FuncDeclContext::getRuleIndex() const {
  return RuleFuncDecl;
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
  enterRule(_localctx, 20, RuleFuncDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(281);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(251);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30932992) != 0)) {
        setState(248);
        modifier();
        setState(253);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(254);
      match(Func);
      setState(255);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(256);
      match(LeftBracket);
      setState(257);
      declArgs();
      setState(258);
      match(RightBracket);
      setState(262);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == Sub) {
        setState(259);
        match(Sub);
        setState(260);
        match(Greater);
        setState(261);
        antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      }
      setState(264);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->body = block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 30932992) != 0)) {
        setState(266);
        modifier();
        setState(271);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(272);
      match(Func);
      setState(273);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(274);
      match(LeftBracket);
      setState(275);
      declArgs();
      setState(276);
      match(RightBracket);
      setState(277);
      match(Sub);
      setState(278);
      match(Greater);
      setState(279);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
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

//----------------- IfStmtContext ------------------------------------------------------------------

RiddleParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::IfStmtContext::If() {
  return getToken(RiddleParser::If, 0);
}

tree::TerminalNode* RiddleParser::IfStmtContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

tree::TerminalNode* RiddleParser::IfStmtContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::ExpressionContext* RiddleParser::IfStmtContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}

std::vector<RiddleParser::BlockContext *> RiddleParser::IfStmtContext::block() {
  return getRuleContexts<BlockContext>();
}

RiddleParser::BlockContext* RiddleParser::IfStmtContext::block(size_t i) {
  return getRuleContext<BlockContext>(i);
}

tree::TerminalNode* RiddleParser::IfStmtContext::Else() {
  return getToken(RiddleParser::Else, 0);
}


size_t RiddleParser::IfStmtContext::getRuleIndex() const {
  return RuleIfStmt;
}

void RiddleParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void RiddleParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}


std::any RiddleParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IfStmtContext* RiddleParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(If);
    setState(284);
    match(LeftBracket);
    setState(285);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->cond = expression(0);
    setState(286);
    match(RightBracket);
    setState(287);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->then = block();
    setState(290);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(288);
      match(Else);
      setState(289);
      antlrcpp::downCast<IfStmtContext *>(_localctx)->else_ = block();
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

//----------------- WhileStmtContext ------------------------------------------------------------------

RiddleParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::WhileStmtContext::While() {
  return getToken(RiddleParser::While, 0);
}

tree::TerminalNode* RiddleParser::WhileStmtContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

tree::TerminalNode* RiddleParser::WhileStmtContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::ExpressionContext* RiddleParser::WhileStmtContext::expression() {
  return getRuleContext<ExpressionContext>(0);
}

RiddleParser::BlockContext* RiddleParser::WhileStmtContext::block() {
  return getRuleContext<BlockContext>(0);
}


size_t RiddleParser::WhileStmtContext::getRuleIndex() const {
  return RuleWhileStmt;
}

void RiddleParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void RiddleParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}


std::any RiddleParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::WhileStmtContext* RiddleParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 24, RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(While);
    setState(293);
    match(LeftBracket);
    setState(294);
    antlrcpp::downCast<WhileStmtContext *>(_localctx)->cond = expression(0);
    setState(295);
    match(RightBracket);
    setState(296);
    antlrcpp::downCast<WhileStmtContext *>(_localctx)->body = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

RiddleParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ForStmtContext::For() {
  return getToken(RiddleParser::For, 0);
}

tree::TerminalNode* RiddleParser::ForStmtContext::LeftBracket() {
  return getToken(RiddleParser::LeftBracket, 0);
}

std::vector<tree::TerminalNode *> RiddleParser::ForStmtContext::Semi() {
  return getTokens(RiddleParser::Semi);
}

tree::TerminalNode* RiddleParser::ForStmtContext::Semi(size_t i) {
  return getToken(RiddleParser::Semi, i);
}

tree::TerminalNode* RiddleParser::ForStmtContext::RightBracket() {
  return getToken(RiddleParser::RightBracket, 0);
}

RiddleParser::BlockContext* RiddleParser::ForStmtContext::block() {
  return getRuleContext<BlockContext>(0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ForStmtContext::expression() {
  return getRuleContexts<ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::ForStmtContext::expression(size_t i) {
  return getRuleContext<ExpressionContext>(i);
}


size_t RiddleParser::ForStmtContext::getRuleIndex() const {
  return RuleForStmt;
}

void RiddleParser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void RiddleParser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}


std::any RiddleParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ForStmtContext* RiddleParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, RuleForStmt);
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
    setState(298);
    match(For);
    setState(299);
    match(LeftBracket);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 145487380900017822) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 37) != 0)) {
      setState(300);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->init = expression(0);
    }
    setState(303);
    match(Semi);
    setState(305);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 145487380900017822) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 37) != 0)) {
      setState(304);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->cond = expression(0);
    }
    setState(307);
    match(Semi);
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 145487380900017822) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & 37) != 0)) {
      setState(308);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->change = expression(0);
    }
    setState(311);
    match(RightBracket);
    setState(312);
    antlrcpp::downCast<ForStmtContext *>(_localctx)->body = block();
   
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
  return getRuleContext<ExpressionContext>(0);
}


size_t RiddleParser::ReturnStmtContext::getRuleIndex() const {
  return RuleReturnStmt;
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
  enterRule(_localctx, 28, RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(Return);
    setState(316);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(315);
      antlrcpp::downCast<ReturnStmtContext *>(_localctx)->result = expression(0);
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

//----------------- ClassDeclContext ------------------------------------------------------------------

RiddleParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::ClassDeclContext::Class() {
  return getToken(RiddleParser::Class, 0);
}

RiddleParser::IdContext* RiddleParser::ClassDeclContext::id() {
  return getRuleContext<IdContext>(0);
}

RiddleParser::BlockContext* RiddleParser::ClassDeclContext::block() {
  return getRuleContext<BlockContext>(0);
}


size_t RiddleParser::ClassDeclContext::getRuleIndex() const {
  return RuleClassDecl;
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
  enterRule(_localctx, 30, RuleClassDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(Class);
    setState(319);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->name = id();
    setState(320);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->body = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

RiddleParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::IdContext::Identifier() {
  return getToken(RiddleParser::Identifier, 0);
}


size_t RiddleParser::IdContext::getRuleIndex() const {
  return RuleId;
}

void RiddleParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}

void RiddleParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}


std::any RiddleParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::IdContext* RiddleParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 32, RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    match(Identifier);
   
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
    case 2: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool RiddleParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 22);
    case 1: return precpred(_ctx, 21);
    case 2: return precpred(_ctx, 16);
    case 3: return precpred(_ctx, 15);
    case 4: return precpred(_ctx, 14);
    case 5: return precpred(_ctx, 13);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);
    case 12: return precpred(_ctx, 6);
    case 13: return precpred(_ctx, 20);
    case 14: return precpred(_ctx, 19);

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
