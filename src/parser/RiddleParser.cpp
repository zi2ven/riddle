
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
      "program", "expressionEnd", "expression", "statement", "annotation", 
      "packStmt", "varDecl", "block", "initList", "declArgs", "modifier", 
      "funcDecl", "ifStmt", "whileStmt", "forStmt", "returnStmt", "classDecl", 
      "id"
    },
    std::vector<std::string>{
      "", "'var'", "'val'", "'for'", "'while'", "'continue'", "'break'", 
      "'if'", "'else'", "'fun'", "'return'", "'import'", "'package'", "'class'", 
      "'true'", "'false'", "'null'", "'try'", "'catch'", "'extern'", "'override'", 
      "'static'", "'const'", "'public'", "'protected'", "'private'", "'virtual'", 
      "'operator'", "", "'('", "')'", "'['", "']'", "'{'", "'}'", "':'", 
      "','", "'=='", "'!='", "'='", "'>'", "'>='", "'<'", "'<='", "'<<'", 
      "'>>'", "'@'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'&'", "'&&'", 
      "'|'", "'||'", "'^'", "'.'", "'\"'", "'''", "'~'", "'+='", "'-='", 
      "'*='", "'/='", "'%='", "'<<='", "'>>='", "'&='", "'|='", "'^='"
    },
    std::vector<std::string>{
      "", "Var", "Val", "For", "While", "Continue", "Break", "If", "Else", 
      "Func", "Return", "Import", "Package", "Class", "True", "False", "Null", 
      "Try", "Catch", "Extern", "Override", "Static", "Const", "Public", 
      "Protected", "Private", "Virtual", "Operator", "Semi", "LeftParen", 
      "RightParen", "LeftBracket", "RightBracket", "LeftCurly", "RightCurly", 
      "Colon", "Comma", "Equal", "NotEqual", "Assign", "Greater", "GreaterEqual", 
      "Less", "LessEqual", "LeftShift", "RightShift", "At", "Add", "Sub", 
      "Star", "Div", "Mod", "Not", "And", "AndAnd", "Or", "OrOr", "Xor", 
      "Dot", "DoubleQuotes", "Quotes", "Tilde", "AddAssign", "SubAssign", 
      "MulAssign", "DivAssign", "ModAssign", "LeftShiftAssign", "RightShiftAssign", 
      "AndAssign", "OrAssign", "XorAssign", "Endl", "Identifier", "Hexadecimal", 
      "Decimal", "Octal", "Binary", "Float", "IntegerSequence", "HEX_DIGIT", 
      "OCTAL_DIGIT", "BINARY_DIGIT", "DIGIT", "STRING", "CHAR", "LINE_COMMENT", 
      "BLOCK_COMMENT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,88,351,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,1,
  	1,1,1,1,1,1,3,1,47,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,65,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	5,2,112,8,2,10,2,12,2,115,9,2,3,2,117,8,2,1,2,1,2,1,2,5,2,122,8,2,10,
  	2,12,2,125,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,138,8,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,146,8,4,10,4,12,4,149,9,4,1,4,1,4,3,4,153,
  	8,4,1,4,3,4,156,8,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,164,8,5,10,5,12,5,167,
  	9,5,1,6,5,6,170,8,6,10,6,12,6,173,9,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	5,6,183,8,6,10,6,12,6,186,9,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,194,8,6,10,
  	6,12,6,197,9,6,1,6,1,6,1,6,1,6,1,6,3,6,204,8,6,1,7,1,7,5,7,208,8,7,10,
  	7,12,7,211,9,7,1,7,1,7,1,8,1,8,1,8,1,8,5,8,219,8,8,10,8,12,8,222,9,8,
  	3,8,224,8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,5,9,233,8,9,10,9,12,9,236,9,9,
  	1,9,1,9,1,9,1,9,3,9,242,8,9,1,9,1,9,1,9,1,9,1,9,1,9,4,9,250,8,9,11,9,
  	12,9,251,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,263,8,9,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,3,10,272,8,10,1,11,5,11,275,8,11,10,11,12,11,278,
  	9,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,288,8,11,1,11,1,11,
  	1,11,5,11,293,8,11,10,11,12,11,296,9,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,3,11,308,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	3,12,317,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,3,14,328,8,
  	14,1,14,1,14,3,14,332,8,14,1,14,1,14,3,14,336,8,14,1,14,1,14,1,14,1,15,
  	1,15,3,15,343,8,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,0,1,4,18,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,9,3,0,47,48,52,52,61,61,
  	1,0,14,15,1,0,49,51,1,0,47,48,1,0,44,45,1,0,40,43,1,0,37,38,2,0,39,39,
  	62,71,1,0,1,2,401,0,39,1,0,0,0,2,46,1,0,0,0,4,64,1,0,0,0,6,137,1,0,0,
  	0,8,139,1,0,0,0,10,159,1,0,0,0,12,203,1,0,0,0,14,205,1,0,0,0,16,214,1,
  	0,0,0,18,262,1,0,0,0,20,271,1,0,0,0,22,307,1,0,0,0,24,309,1,0,0,0,26,
  	318,1,0,0,0,28,324,1,0,0,0,30,340,1,0,0,0,32,344,1,0,0,0,34,348,1,0,0,
  	0,36,38,3,2,1,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,
  	0,40,1,1,0,0,0,41,39,1,0,0,0,42,43,3,4,2,0,43,44,5,28,0,0,44,47,1,0,0,
  	0,45,47,5,28,0,0,46,42,1,0,0,0,46,45,1,0,0,0,47,3,1,0,0,0,48,49,6,2,-1,
  	0,49,65,3,6,3,0,50,51,5,49,0,0,51,65,3,4,2,20,52,53,7,0,0,0,53,65,3,4,
  	2,19,54,65,5,75,0,0,55,65,5,78,0,0,56,65,7,1,0,0,57,65,5,84,0,0,58,65,
  	5,85,0,0,59,65,3,34,17,0,60,61,5,29,0,0,61,62,3,4,2,0,62,63,5,30,0,0,
  	63,65,1,0,0,0,64,48,1,0,0,0,64,50,1,0,0,0,64,52,1,0,0,0,64,54,1,0,0,0,
  	64,55,1,0,0,0,64,56,1,0,0,0,64,57,1,0,0,0,64,58,1,0,0,0,64,59,1,0,0,0,
  	64,60,1,0,0,0,65,123,1,0,0,0,66,67,10,24,0,0,67,68,5,35,0,0,68,69,5,35,
  	0,0,69,122,3,4,2,25,70,71,10,23,0,0,71,72,5,58,0,0,72,122,3,4,2,24,73,
  	74,10,18,0,0,74,75,7,2,0,0,75,122,3,4,2,19,76,77,10,17,0,0,77,78,7,3,
  	0,0,78,122,3,4,2,18,79,80,10,16,0,0,80,81,7,4,0,0,81,122,3,4,2,17,82,
  	83,10,15,0,0,83,84,7,5,0,0,84,122,3,4,2,16,85,86,10,14,0,0,86,87,7,6,
  	0,0,87,122,3,4,2,15,88,89,10,13,0,0,89,90,5,53,0,0,90,122,3,4,2,14,91,
  	92,10,12,0,0,92,93,5,57,0,0,93,122,3,4,2,13,94,95,10,11,0,0,95,96,5,55,
  	0,0,96,122,3,4,2,12,97,98,10,10,0,0,98,99,5,54,0,0,99,122,3,4,2,11,100,
  	101,10,9,0,0,101,102,5,56,0,0,102,122,3,4,2,10,103,104,10,8,0,0,104,105,
  	7,7,0,0,105,122,3,4,2,9,106,107,10,22,0,0,107,116,5,29,0,0,108,113,3,
  	4,2,0,109,110,5,36,0,0,110,112,3,4,2,0,111,109,1,0,0,0,112,115,1,0,0,
  	0,113,111,1,0,0,0,113,114,1,0,0,0,114,117,1,0,0,0,115,113,1,0,0,0,116,
  	108,1,0,0,0,116,117,1,0,0,0,117,118,1,0,0,0,118,122,5,30,0,0,119,120,
  	10,21,0,0,120,122,5,49,0,0,121,66,1,0,0,0,121,70,1,0,0,0,121,73,1,0,0,
  	0,121,76,1,0,0,0,121,79,1,0,0,0,121,82,1,0,0,0,121,85,1,0,0,0,121,88,
  	1,0,0,0,121,91,1,0,0,0,121,94,1,0,0,0,121,97,1,0,0,0,121,100,1,0,0,0,
  	121,103,1,0,0,0,121,106,1,0,0,0,121,119,1,0,0,0,122,125,1,0,0,0,123,121,
  	1,0,0,0,123,124,1,0,0,0,124,5,1,0,0,0,125,123,1,0,0,0,126,138,3,12,6,
  	0,127,138,3,22,11,0,128,138,3,32,16,0,129,138,3,16,8,0,130,138,3,14,7,
  	0,131,138,3,30,15,0,132,138,3,10,5,0,133,138,3,24,12,0,134,138,3,26,13,
  	0,135,138,3,28,14,0,136,138,3,8,4,0,137,126,1,0,0,0,137,127,1,0,0,0,137,
  	128,1,0,0,0,137,129,1,0,0,0,137,130,1,0,0,0,137,131,1,0,0,0,137,132,1,
  	0,0,0,137,133,1,0,0,0,137,134,1,0,0,0,137,135,1,0,0,0,137,136,1,0,0,0,
  	138,7,1,0,0,0,139,140,5,46,0,0,140,152,3,34,17,0,141,142,5,29,0,0,142,
  	147,3,4,2,0,143,144,5,36,0,0,144,146,3,4,2,0,145,143,1,0,0,0,146,149,
  	1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,150,1,0,0,0,149,147,1,0,0,
  	0,150,151,5,30,0,0,151,153,1,0,0,0,152,141,1,0,0,0,152,153,1,0,0,0,153,
  	155,1,0,0,0,154,156,5,28,0,0,155,154,1,0,0,0,155,156,1,0,0,0,156,157,
  	1,0,0,0,157,158,3,6,3,0,158,9,1,0,0,0,159,160,5,12,0,0,160,165,3,34,17,
  	0,161,162,5,58,0,0,162,164,3,34,17,0,163,161,1,0,0,0,164,167,1,0,0,0,
  	165,163,1,0,0,0,165,166,1,0,0,0,166,11,1,0,0,0,167,165,1,0,0,0,168,170,
  	3,20,10,0,169,168,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,
  	0,0,172,174,1,0,0,0,173,171,1,0,0,0,174,175,7,8,0,0,175,176,3,34,17,0,
  	176,177,5,35,0,0,177,178,3,4,2,0,178,179,5,39,0,0,179,180,3,4,2,0,180,
  	204,1,0,0,0,181,183,3,20,10,0,182,181,1,0,0,0,183,186,1,0,0,0,184,182,
  	1,0,0,0,184,185,1,0,0,0,185,187,1,0,0,0,186,184,1,0,0,0,187,188,7,8,0,
  	0,188,189,3,34,17,0,189,190,5,39,0,0,190,191,3,4,2,0,191,204,1,0,0,0,
  	192,194,3,20,10,0,193,192,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,
  	196,1,0,0,0,196,198,1,0,0,0,197,195,1,0,0,0,198,199,7,8,0,0,199,200,3,
  	34,17,0,200,201,5,35,0,0,201,202,3,4,2,0,202,204,1,0,0,0,203,171,1,0,
  	0,0,203,184,1,0,0,0,203,195,1,0,0,0,204,13,1,0,0,0,205,209,5,33,0,0,206,
  	208,3,2,1,0,207,206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,1,
  	0,0,0,210,212,1,0,0,0,211,209,1,0,0,0,212,213,5,34,0,0,213,15,1,0,0,0,
  	214,223,5,33,0,0,215,220,3,4,2,0,216,217,5,36,0,0,217,219,3,4,2,0,218,
  	216,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,224,1,
  	0,0,0,222,220,1,0,0,0,223,215,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,
  	225,226,5,34,0,0,226,17,1,0,0,0,227,228,3,34,17,0,228,229,5,35,0,0,229,
  	230,3,4,2,0,230,231,5,36,0,0,231,233,1,0,0,0,232,227,1,0,0,0,233,236,
  	1,0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,241,1,0,0,0,236,234,1,0,0,
  	0,237,238,3,34,17,0,238,239,5,35,0,0,239,240,3,4,2,0,240,242,1,0,0,0,
  	241,237,1,0,0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,263,6,9,-1,0,244,
  	245,3,34,17,0,245,246,5,35,0,0,246,247,3,4,2,0,247,248,5,36,0,0,248,250,
  	1,0,0,0,249,244,1,0,0,0,250,251,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,
  	0,252,253,1,0,0,0,253,254,5,58,0,0,254,255,5,58,0,0,255,256,5,58,0,0,
  	256,257,6,9,-1,0,257,263,1,0,0,0,258,259,5,58,0,0,259,260,5,58,0,0,260,
  	261,5,58,0,0,261,263,6,9,-1,0,262,234,1,0,0,0,262,249,1,0,0,0,262,258,
  	1,0,0,0,263,19,1,0,0,0,264,272,5,21,0,0,265,272,5,23,0,0,266,272,5,24,
  	0,0,267,272,5,25,0,0,268,272,5,20,0,0,269,270,5,19,0,0,270,272,5,84,0,
  	0,271,264,1,0,0,0,271,265,1,0,0,0,271,266,1,0,0,0,271,267,1,0,0,0,271,
  	268,1,0,0,0,271,269,1,0,0,0,272,21,1,0,0,0,273,275,3,20,10,0,274,273,
  	1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,277,1,0,0,0,277,279,1,0,0,
  	0,278,276,1,0,0,0,279,280,5,9,0,0,280,281,3,34,17,0,281,282,5,29,0,0,
  	282,283,3,18,9,0,283,287,5,30,0,0,284,285,5,48,0,0,285,286,5,40,0,0,286,
  	288,3,4,2,0,287,284,1,0,0,0,287,288,1,0,0,0,288,289,1,0,0,0,289,290,3,
  	14,7,0,290,308,1,0,0,0,291,293,3,20,10,0,292,291,1,0,0,0,293,296,1,0,
  	0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,297,1,0,0,0,296,294,1,0,0,0,297,
  	298,5,9,0,0,298,299,3,34,17,0,299,300,5,29,0,0,300,301,3,18,9,0,301,302,
  	5,30,0,0,302,303,5,48,0,0,303,304,5,40,0,0,304,305,3,4,2,0,305,306,5,
  	28,0,0,306,308,1,0,0,0,307,276,1,0,0,0,307,294,1,0,0,0,308,23,1,0,0,0,
  	309,310,5,7,0,0,310,311,5,29,0,0,311,312,3,4,2,0,312,313,5,30,0,0,313,
  	316,3,14,7,0,314,315,5,8,0,0,315,317,3,14,7,0,316,314,1,0,0,0,316,317,
  	1,0,0,0,317,25,1,0,0,0,318,319,5,4,0,0,319,320,5,29,0,0,320,321,3,4,2,
  	0,321,322,5,30,0,0,322,323,3,14,7,0,323,27,1,0,0,0,324,325,5,3,0,0,325,
  	327,5,29,0,0,326,328,3,4,2,0,327,326,1,0,0,0,327,328,1,0,0,0,328,329,
  	1,0,0,0,329,331,5,28,0,0,330,332,3,4,2,0,331,330,1,0,0,0,331,332,1,0,
  	0,0,332,333,1,0,0,0,333,335,5,28,0,0,334,336,3,4,2,0,335,334,1,0,0,0,
  	335,336,1,0,0,0,336,337,1,0,0,0,337,338,5,30,0,0,338,339,3,14,7,0,339,
  	29,1,0,0,0,340,342,5,10,0,0,341,343,3,4,2,0,342,341,1,0,0,0,342,343,1,
  	0,0,0,343,31,1,0,0,0,344,345,5,13,0,0,345,346,3,34,17,0,346,347,3,14,
  	7,0,347,33,1,0,0,0,348,349,5,73,0,0,349,35,1,0,0,0,33,39,46,64,113,116,
  	121,123,137,147,152,155,165,171,184,195,203,209,220,223,234,241,251,262,
  	271,276,287,294,307,316,327,331,335,342
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

std::vector<RiddleParser::ExpressionEndContext *> RiddleParser::ProgramContext::expressionEnd() {
  return getRuleContexts<RiddleParser::ExpressionEndContext>();
}

RiddleParser::ExpressionEndContext* RiddleParser::ProgramContext::expressionEnd(size_t i) {
  return getRuleContext<RiddleParser::ExpressionEndContext>(i);
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
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149461423774) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(36);
      expressionEnd();
      setState(41);
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

//----------------- ExpressionEndContext ------------------------------------------------------------------

RiddleParser::ExpressionEndContext::ExpressionEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::ExpressionContext* RiddleParser::ExpressionEndContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode* RiddleParser::ExpressionEndContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
}


size_t RiddleParser::ExpressionEndContext::getRuleIndex() const {
  return RiddleParser::RuleExpressionEnd;
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
  enterRule(_localctx, 2, RiddleParser::RuleExpressionEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Var:
      case RiddleParser::Val:
      case RiddleParser::For:
      case RiddleParser::While:
      case RiddleParser::If:
      case RiddleParser::Func:
      case RiddleParser::Return:
      case RiddleParser::Package:
      case RiddleParser::Class:
      case RiddleParser::True:
      case RiddleParser::False:
      case RiddleParser::Extern:
      case RiddleParser::Override:
      case RiddleParser::Static:
      case RiddleParser::Public:
      case RiddleParser::Protected:
      case RiddleParser::Private:
      case RiddleParser::LeftParen:
      case RiddleParser::LeftCurly:
      case RiddleParser::At:
      case RiddleParser::Add:
      case RiddleParser::Sub:
      case RiddleParser::Star:
      case RiddleParser::Not:
      case RiddleParser::Tilde:
      case RiddleParser::Identifier:
      case RiddleParser::Decimal:
      case RiddleParser::Float:
      case RiddleParser::STRING:
      case RiddleParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        expression(0);
        setState(43);
        match(RiddleParser::Semi);
        break;
      }

      case RiddleParser::Semi: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        match(RiddleParser::Semi);
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
  return RiddleParser::RuleExpression;
}

void RiddleParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LoadExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::LoadExprContext::Star() {
  return getToken(RiddleParser::Star, 0);
}

RiddleParser::ExpressionContext* RiddleParser::LoadExprContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
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
//----------------- EqOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::EqOpContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::EqOpContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::StringContext::STRING() {
  return getToken(RiddleParser::STRING, 0);
}

RiddleParser::StringContext::StringContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void RiddleParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

std::any RiddleParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::BitOrContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::BitOrContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::BitOrContext::Or() {
  return getToken(RiddleParser::Or, 0);
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

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LogicOrContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::LogicOrContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::LogicOrContext::OrOr() {
  return getToken(RiddleParser::OrOr, 0);
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
//----------------- CompoundAssignOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::CompoundAssignOpContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::CompoundAssignOpContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
  return getRuleContext<RiddleParser::ExpressionContext>(0);
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
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::ParenExprContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::ParenExprContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::ExpressionContext* RiddleParser::ParenExprContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void RiddleParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any RiddleParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PointerToContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::PointerToContext::Star() {
  return getToken(RiddleParser::Star, 0);
}

RiddleParser::ExpressionContext* RiddleParser::PointerToContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
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
//----------------- LogicAndContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::LogicAndContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::LogicAndContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::LogicAndContext::AndAnd() {
  return getToken(RiddleParser::AndAnd, 0);
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
//----------------- ShiftOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ShiftOpContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::ShiftOpContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
//----------------- MemberAccessContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::MemberAccessContext::Dot() {
  return getToken(RiddleParser::Dot, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::MemberAccessContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::MemberAccessContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
//----------------- AddOpContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AddOpContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::AddOpContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
//----------------- ScopeAccessContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> RiddleParser::ScopeAccessContext::Colon() {
  return getTokens(RiddleParser::Colon);
}

tree::TerminalNode* RiddleParser::ScopeAccessContext::Colon(size_t i) {
  return getToken(RiddleParser::Colon, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ScopeAccessContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::ScopeAccessContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::RelOpContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
//----------------- BitAndContext ------------------------------------------------------------------

std::vector<RiddleParser::ExpressionContext *> RiddleParser::BitAndContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::BitAndContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::BitAndContext::And() {
  return getToken(RiddleParser::And, 0);
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
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::MulOpContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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

std::vector<RiddleParser::ExpressionContext *> RiddleParser::BitXorContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::BitXorContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::BitXorContext::Xor() {
  return getToken(RiddleParser::Xor, 0);
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
//----------------- CharContext ------------------------------------------------------------------

tree::TerminalNode* RiddleParser::CharContext::CHAR() {
  return getToken(RiddleParser::CHAR, 0);
}

RiddleParser::CharContext::CharContext(ExpressionContext *ctx) { copyFrom(ctx); }

void RiddleParser::CharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChar(this);
}
void RiddleParser::CharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChar(this);
}

std::any RiddleParser::CharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StatementExprContext ------------------------------------------------------------------

RiddleParser::StatementContext* RiddleParser::StatementExprContext::statement() {
  return getRuleContext<RiddleParser::StatementContext>(0);
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
//----------------- ObjectContext ------------------------------------------------------------------

RiddleParser::IdContext* RiddleParser::ObjectContext::id() {
  return getRuleContext<RiddleParser::IdContext>(0);
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
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, RiddleParser::RuleExpression, precedence);

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
    setState(64);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Var:
      case RiddleParser::Val:
      case RiddleParser::For:
      case RiddleParser::While:
      case RiddleParser::If:
      case RiddleParser::Func:
      case RiddleParser::Return:
      case RiddleParser::Package:
      case RiddleParser::Class:
      case RiddleParser::Extern:
      case RiddleParser::Override:
      case RiddleParser::Static:
      case RiddleParser::Public:
      case RiddleParser::Protected:
      case RiddleParser::Private:
      case RiddleParser::LeftCurly:
      case RiddleParser::At: {
        _localctx = _tracker.createInstance<StatementExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(49);
        statement();
        break;
      }

      case RiddleParser::Star: {
        _localctx = _tracker.createInstance<LoadExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(50);
        match(RiddleParser::Star);
        setState(51);
        antlrcpp::downCast<LoadExprContext *>(_localctx)->obj = expression(20);
        break;
      }

      case RiddleParser::Add:
      case RiddleParser::Sub:
      case RiddleParser::Not:
      case RiddleParser::Tilde: {
        _localctx = _tracker.createInstance<UnaryOpContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(52);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 2310768821306130432) != 0))) {
          antlrcpp::downCast<UnaryOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(53);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->value = expression(19);
        break;
      }

      case RiddleParser::Decimal: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(54);
        match(RiddleParser::Decimal);
        break;
      }

      case RiddleParser::Float: {
        _localctx = _tracker.createInstance<FloatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(55);
        match(RiddleParser::Float);
        break;
      }

      case RiddleParser::True:
      case RiddleParser::False: {
        _localctx = _tracker.createInstance<BooleanContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(56);
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

      case RiddleParser::STRING: {
        _localctx = _tracker.createInstance<StringContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(RiddleParser::STRING);
        break;
      }

      case RiddleParser::CHAR: {
        _localctx = _tracker.createInstance<CharContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(58);
        match(RiddleParser::CHAR);
        break;
      }

      case RiddleParser::Identifier: {
        _localctx = _tracker.createInstance<ObjectContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(59);
        id();
        break;
      }

      case RiddleParser::LeftParen: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(60);
        match(RiddleParser::LeftParen);
        setState(61);
        antlrcpp::downCast<ParenExprContext *>(_localctx)->value = expression(0);
        setState(62);
        match(RiddleParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(121);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ScopeAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(66);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(67);
          match(RiddleParser::Colon);
          setState(68);
          match(RiddleParser::Colon);
          setState(69);
          antlrcpp::downCast<ScopeAccessContext *>(_localctx)->right = expression(25);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MemberAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(70);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(71);
          match(RiddleParser::Dot);
          setState(72);
          antlrcpp::downCast<MemberAccessContext *>(_localctx)->right = expression(24);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(73);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(74);
          antlrcpp::downCast<MulOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 3940649673949184) != 0))) {
            antlrcpp::downCast<MulOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(75);
          antlrcpp::downCast<MulOpContext *>(_localctx)->right = expression(19);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(76);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(77);
          antlrcpp::downCast<AddOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RiddleParser::Add

          || _la == RiddleParser::Sub)) {
            antlrcpp::downCast<AddOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(78);
          antlrcpp::downCast<AddOpContext *>(_localctx)->right = expression(18);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ShiftOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(79);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(80);
          antlrcpp::downCast<ShiftOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RiddleParser::LeftShift

          || _la == RiddleParser::RightShift)) {
            antlrcpp::downCast<ShiftOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(81);
          antlrcpp::downCast<ShiftOpContext *>(_localctx)->right = expression(17);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<RelOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(82);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(83);
          antlrcpp::downCast<RelOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 16492674416640) != 0))) {
            antlrcpp::downCast<RelOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(84);
          antlrcpp::downCast<RelOpContext *>(_localctx)->right = expression(16);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(85);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(86);
          antlrcpp::downCast<EqOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == RiddleParser::Equal

          || _la == RiddleParser::NotEqual)) {
            antlrcpp::downCast<EqOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          antlrcpp::downCast<EqOpContext *>(_localctx)->right = expression(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(88);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(89);
          antlrcpp::downCast<BitAndContext *>(_localctx)->op = match(RiddleParser::And);
          setState(90);
          antlrcpp::downCast<BitAndContext *>(_localctx)->right = expression(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(91);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(92);
          antlrcpp::downCast<BitXorContext *>(_localctx)->op = match(RiddleParser::Xor);
          setState(93);
          antlrcpp::downCast<BitXorContext *>(_localctx)->right = expression(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(94);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(95);
          antlrcpp::downCast<BitOrContext *>(_localctx)->op = match(RiddleParser::Or);
          setState(96);
          antlrcpp::downCast<BitOrContext *>(_localctx)->right = expression(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(97);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(98);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->op = match(RiddleParser::AndAnd);
          setState(99);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->right = expression(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(100);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(101);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->op = match(RiddleParser::OrOr);
          setState(102);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->right = expression(10);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CompoundAssignOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(103);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(104);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 39) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 39)) & 8581545985) != 0))) {
            antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(105);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->right = expression(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<CallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(106);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(107);
          match(RiddleParser::LeftParen);
          setState(116);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 73)) & 6181) != 0)) {
            setState(108);
            expression(0);
            setState(113);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == RiddleParser::Comma) {
              setState(109);
              match(RiddleParser::Comma);
              setState(110);
              expression(0);
              setState(115);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(118);
          match(RiddleParser::RightParen);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<PointerToContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(119);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(120);
          match(RiddleParser::Star);
          break;
        }

        default:
          break;
        } 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  return getRuleContext<RiddleParser::VarDeclContext>(0);
}

RiddleParser::FuncDeclContext* RiddleParser::StatementContext::funcDecl() {
  return getRuleContext<RiddleParser::FuncDeclContext>(0);
}

RiddleParser::ClassDeclContext* RiddleParser::StatementContext::classDecl() {
  return getRuleContext<RiddleParser::ClassDeclContext>(0);
}

RiddleParser::InitListContext* RiddleParser::StatementContext::initList() {
  return getRuleContext<RiddleParser::InitListContext>(0);
}

RiddleParser::BlockContext* RiddleParser::StatementContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}

RiddleParser::ReturnStmtContext* RiddleParser::StatementContext::returnStmt() {
  return getRuleContext<RiddleParser::ReturnStmtContext>(0);
}

RiddleParser::PackStmtContext* RiddleParser::StatementContext::packStmt() {
  return getRuleContext<RiddleParser::PackStmtContext>(0);
}

RiddleParser::IfStmtContext* RiddleParser::StatementContext::ifStmt() {
  return getRuleContext<RiddleParser::IfStmtContext>(0);
}

RiddleParser::WhileStmtContext* RiddleParser::StatementContext::whileStmt() {
  return getRuleContext<RiddleParser::WhileStmtContext>(0);
}

RiddleParser::ForStmtContext* RiddleParser::StatementContext::forStmt() {
  return getRuleContext<RiddleParser::ForStmtContext>(0);
}

RiddleParser::AnnotationContext* RiddleParser::StatementContext::annotation() {
  return getRuleContext<RiddleParser::AnnotationContext>(0);
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
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      varDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(127);
      funcDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(128);
      classDecl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(129);
      initList();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(130);
      block();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(131);
      returnStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(132);
      packStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(133);
      ifStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(134);
      whileStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(135);
      forStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(136);
      annotation();
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

//----------------- AnnotationContext ------------------------------------------------------------------

RiddleParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::AnnotationContext::At() {
  return getToken(RiddleParser::At, 0);
}

RiddleParser::IdContext* RiddleParser::AnnotationContext::id() {
  return getRuleContext<RiddleParser::IdContext>(0);
}

RiddleParser::StatementContext* RiddleParser::AnnotationContext::statement() {
  return getRuleContext<RiddleParser::StatementContext>(0);
}

tree::TerminalNode* RiddleParser::AnnotationContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::AnnotationContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::AnnotationContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::AnnotationContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

tree::TerminalNode* RiddleParser::AnnotationContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
}

std::vector<tree::TerminalNode *> RiddleParser::AnnotationContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::AnnotationContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::AnnotationContext::getRuleIndex() const {
  return RiddleParser::RuleAnnotation;
}

void RiddleParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void RiddleParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}


std::any RiddleParser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitAnnotation(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::AnnotationContext* RiddleParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 8, RiddleParser::RuleAnnotation);
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
    setState(139);
    match(RiddleParser::At);
    setState(140);
    id();
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::LeftParen) {
      setState(141);
      match(RiddleParser::LeftParen);
      setState(142);
      expression(0);
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(143);
        match(RiddleParser::Comma);
        setState(144);
        expression(0);
        setState(149);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(150);
      match(RiddleParser::RightParen);
    }
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::Semi) {
      setState(154);
      match(RiddleParser::Semi);
    }
    setState(157);
    antlrcpp::downCast<AnnotationContext *>(_localctx)->stmt = statement();
   
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
  return getRuleContexts<RiddleParser::IdContext>();
}

RiddleParser::IdContext* RiddleParser::PackStmtContext::id(size_t i) {
  return getRuleContext<RiddleParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::PackStmtContext::Dot() {
  return getTokens(RiddleParser::Dot);
}

tree::TerminalNode* RiddleParser::PackStmtContext::Dot(size_t i) {
  return getToken(RiddleParser::Dot, i);
}


size_t RiddleParser::PackStmtContext::getRuleIndex() const {
  return RiddleParser::RulePackStmt;
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
  enterRule(_localctx, 10, RiddleParser::RulePackStmt);

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
    setState(159);
    match(RiddleParser::Package);
    setState(160);
    id();
    setState(165);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(161);
        match(RiddleParser::Dot);
        setState(162);
        id(); 
      }
      setState(167);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
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
  return getRuleContext<RiddleParser::IdContext>(0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::VarDeclContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::VarDeclContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Var() {
  return getToken(RiddleParser::Var, 0);
}

tree::TerminalNode* RiddleParser::VarDeclContext::Val() {
  return getToken(RiddleParser::Val, 0);
}

std::vector<RiddleParser::ModifierContext *> RiddleParser::VarDeclContext::modifier() {
  return getRuleContexts<RiddleParser::ModifierContext>();
}

RiddleParser::ModifierContext* RiddleParser::VarDeclContext::modifier(size_t i) {
  return getRuleContext<RiddleParser::ModifierContext>(i);
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
  enterRule(_localctx, 12, RiddleParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(168);
        modifier();
        setState(173);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(174);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == RiddleParser::Var

      || _la == RiddleParser::Val)) {
        antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(175);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(176);
      match(RiddleParser::Colon);
      setState(177);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
      setState(178);
      match(RiddleParser::Assign);
      setState(179);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(181);
        modifier();
        setState(186);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(187);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == RiddleParser::Var

      || _la == RiddleParser::Val)) {
        antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(188);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(189);
      match(RiddleParser::Assign);
      setState(190);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(192);
        modifier();
        setState(197);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(198);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == RiddleParser::Var

      || _la == RiddleParser::Val)) {
        antlrcpp::downCast<VarDeclContext *>(_localctx)->varType = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(199);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(200);
      match(RiddleParser::Colon);
      setState(201);
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
  return getRuleContexts<RiddleParser::ExpressionEndContext>();
}

RiddleParser::ExpressionEndContext* RiddleParser::BlockContext::expressionEnd(size_t i) {
  return getRuleContext<RiddleParser::ExpressionEndContext>(i);
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
    setState(205);
    match(RiddleParser::LeftCurly);
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149461423774) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(206);
      expressionEnd();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(212);
    match(RiddleParser::RightCurly);
   
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
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::InitListContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::InitListContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::InitListContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::InitListContext::getRuleIndex() const {
  return RiddleParser::RuleInitList;
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
  enterRule(_localctx, 16, RiddleParser::RuleInitList);
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
    setState(214);
    match(RiddleParser::LeftCurly);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(215);
      expression(0);
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(216);
        match(RiddleParser::Comma);
        setState(217);
        expression(0);
        setState(222);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(225);
    match(RiddleParser::RightCurly);
   
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
  return getRuleContexts<RiddleParser::IdContext>();
}

RiddleParser::IdContext* RiddleParser::DeclArgsContext::id(size_t i) {
  return getRuleContext<RiddleParser::IdContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::DeclArgsContext::Colon() {
  return getTokens(RiddleParser::Colon);
}

tree::TerminalNode* RiddleParser::DeclArgsContext::Colon(size_t i) {
  return getToken(RiddleParser::Colon, i);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::DeclArgsContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::DeclArgsContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
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
  return RiddleParser::RuleDeclArgs;
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
  enterRule(_localctx, 18, RiddleParser::RuleDeclArgs);
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
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(234);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(227);
          id();
          setState(228);
          match(RiddleParser::Colon);
          setState(229);
          expression(0);
          setState(230);
          match(RiddleParser::Comma); 
        }
        setState(236);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      }
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RiddleParser::Identifier) {
        setState(237);
        id();
        setState(238);
        match(RiddleParser::Colon);
        setState(239);
        expression(0);
      }
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = false;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(244);
        id();
        setState(245);
        match(RiddleParser::Colon);
        setState(246);
        expression(0);
        setState(247);
        match(RiddleParser::Comma);
        setState(251); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == RiddleParser::Identifier);
      setState(253);
      match(RiddleParser::Dot);
      setState(254);
      match(RiddleParser::Dot);
      setState(255);
      match(RiddleParser::Dot);
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = true;
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(258);
      match(RiddleParser::Dot);
      setState(259);
      match(RiddleParser::Dot);
      setState(260);
      match(RiddleParser::Dot);
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

tree::TerminalNode* RiddleParser::ModifierContext::Extern() {
  return getToken(RiddleParser::Extern, 0);
}

tree::TerminalNode* RiddleParser::ModifierContext::STRING() {
  return getToken(RiddleParser::STRING, 0);
}


size_t RiddleParser::ModifierContext::getRuleIndex() const {
  return RiddleParser::RuleModifier;
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
  enterRule(_localctx, 20, RiddleParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Static: {
        enterOuterAlt(_localctx, 1);
        setState(264);
        match(RiddleParser::Static);
        break;
      }

      case RiddleParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(265);
        match(RiddleParser::Public);
        break;
      }

      case RiddleParser::Protected: {
        enterOuterAlt(_localctx, 3);
        setState(266);
        match(RiddleParser::Protected);
        break;
      }

      case RiddleParser::Private: {
        enterOuterAlt(_localctx, 4);
        setState(267);
        match(RiddleParser::Private);
        break;
      }

      case RiddleParser::Override: {
        enterOuterAlt(_localctx, 5);
        setState(268);
        match(RiddleParser::Override);
        break;
      }

      case RiddleParser::Extern: {
        enterOuterAlt(_localctx, 6);
        setState(269);
        match(RiddleParser::Extern);

        setState(270);
        match(RiddleParser::STRING);
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

tree::TerminalNode* RiddleParser::FuncDeclContext::Func() {
  return getToken(RiddleParser::Func, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

RiddleParser::DeclArgsContext* RiddleParser::FuncDeclContext::declArgs() {
  return getRuleContext<RiddleParser::DeclArgsContext>(0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::IdContext* RiddleParser::FuncDeclContext::id() {
  return getRuleContext<RiddleParser::IdContext>(0);
}

RiddleParser::BlockContext* RiddleParser::FuncDeclContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}

std::vector<RiddleParser::ModifierContext *> RiddleParser::FuncDeclContext::modifier() {
  return getRuleContexts<RiddleParser::ModifierContext>();
}

RiddleParser::ModifierContext* RiddleParser::FuncDeclContext::modifier(size_t i) {
  return getRuleContext<RiddleParser::ModifierContext>(i);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Sub() {
  return getToken(RiddleParser::Sub, 0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Greater() {
  return getToken(RiddleParser::Greater, 0);
}

RiddleParser::ExpressionContext* RiddleParser::FuncDeclContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

tree::TerminalNode* RiddleParser::FuncDeclContext::Semi() {
  return getToken(RiddleParser::Semi, 0);
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
  enterRule(_localctx, 22, RiddleParser::RuleFuncDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(273);
        modifier();
        setState(278);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(279);
      match(RiddleParser::Func);
      setState(280);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(281);
      match(RiddleParser::LeftParen);
      setState(282);
      declArgs();
      setState(283);
      match(RiddleParser::RightParen);
      setState(287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RiddleParser::Sub) {
        setState(284);
        match(RiddleParser::Sub);
        setState(285);
        match(RiddleParser::Greater);
        setState(286);
        antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      }
      setState(289);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->body = block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(294);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(291);
        modifier();
        setState(296);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(297);
      match(RiddleParser::Func);
      setState(298);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(299);
      match(RiddleParser::LeftParen);
      setState(300);
      declArgs();
      setState(301);
      match(RiddleParser::RightParen);
      setState(302);
      match(RiddleParser::Sub);
      setState(303);
      match(RiddleParser::Greater);
      setState(304);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      setState(305);
      match(RiddleParser::Semi);
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

tree::TerminalNode* RiddleParser::IfStmtContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::IfStmtContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::ExpressionContext* RiddleParser::IfStmtContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

std::vector<RiddleParser::BlockContext *> RiddleParser::IfStmtContext::block() {
  return getRuleContexts<RiddleParser::BlockContext>();
}

RiddleParser::BlockContext* RiddleParser::IfStmtContext::block(size_t i) {
  return getRuleContext<RiddleParser::BlockContext>(i);
}

tree::TerminalNode* RiddleParser::IfStmtContext::Else() {
  return getToken(RiddleParser::Else, 0);
}


size_t RiddleParser::IfStmtContext::getRuleIndex() const {
  return RiddleParser::RuleIfStmt;
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
  enterRule(_localctx, 24, RiddleParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(RiddleParser::If);
    setState(310);
    match(RiddleParser::LeftParen);
    setState(311);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->cond = expression(0);
    setState(312);
    match(RiddleParser::RightParen);
    setState(313);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->then = block();
    setState(316);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(314);
      match(RiddleParser::Else);
      setState(315);
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

tree::TerminalNode* RiddleParser::WhileStmtContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::WhileStmtContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::ExpressionContext* RiddleParser::WhileStmtContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::BlockContext* RiddleParser::WhileStmtContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}


size_t RiddleParser::WhileStmtContext::getRuleIndex() const {
  return RiddleParser::RuleWhileStmt;
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
  enterRule(_localctx, 26, RiddleParser::RuleWhileStmt);

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
    match(RiddleParser::While);
    setState(319);
    match(RiddleParser::LeftParen);
    setState(320);
    antlrcpp::downCast<WhileStmtContext *>(_localctx)->cond = expression(0);
    setState(321);
    match(RiddleParser::RightParen);
    setState(322);
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

tree::TerminalNode* RiddleParser::ForStmtContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

std::vector<tree::TerminalNode *> RiddleParser::ForStmtContext::Semi() {
  return getTokens(RiddleParser::Semi);
}

tree::TerminalNode* RiddleParser::ForStmtContext::Semi(size_t i) {
  return getToken(RiddleParser::Semi, i);
}

tree::TerminalNode* RiddleParser::ForStmtContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

RiddleParser::BlockContext* RiddleParser::ForStmtContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::ForStmtContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::ForStmtContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}


size_t RiddleParser::ForStmtContext::getRuleIndex() const {
  return RiddleParser::RuleForStmt;
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
  enterRule(_localctx, 28, RiddleParser::RuleForStmt);
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
    setState(324);
    match(RiddleParser::For);
    setState(325);
    match(RiddleParser::LeftParen);
    setState(327);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(326);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->init = expression(0);
    }
    setState(329);
    match(RiddleParser::Semi);
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(330);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->cond = expression(0);
    }
    setState(333);
    match(RiddleParser::Semi);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(334);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->change = expression(0);
    }
    setState(337);
    match(RiddleParser::RightParen);
    setState(338);
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
  enterRule(_localctx, 30, RiddleParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(RiddleParser::Return);
    setState(342);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(341);
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
  return getRuleContext<RiddleParser::IdContext>(0);
}

RiddleParser::BlockContext* RiddleParser::ClassDeclContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
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
  enterRule(_localctx, 32, RiddleParser::RuleClassDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(RiddleParser::Class);
    setState(345);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->name = id();
    setState(346);
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
  return RiddleParser::RuleId;
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
  enterRule(_localctx, 34, RiddleParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(RiddleParser::Identifier);
   
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
    case 0: return precpred(_ctx, 24);
    case 1: return precpred(_ctx, 23);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 9);
    case 12: return precpred(_ctx, 8);
    case 13: return precpred(_ctx, 22);
    case 14: return precpred(_ctx, 21);

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
