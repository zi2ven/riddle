
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
      "packStmt", "varDecl", "block", "initList", "declArgs", "modifierList", 
      "modifier", "funcDecl", "ifStmt", "whileStmt", "forStmt", "returnStmt", 
      "classDecl", "id"
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
  	4,1,88,349,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,5,0,40,8,0,10,0,12,0,43,
  	9,0,1,1,1,1,1,1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,67,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,5,2,114,8,2,10,2,12,2,117,9,2,3,2,119,8,2,1,2,1,2,1,2,5,2,124,
  	8,2,10,2,12,2,127,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,
  	140,8,3,1,4,1,4,1,4,1,4,1,4,1,4,5,4,148,8,4,10,4,12,4,151,9,4,1,4,1,4,
  	3,4,155,8,4,1,4,3,4,158,8,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,166,8,5,10,5,
  	12,5,169,9,5,1,6,5,6,172,8,6,10,6,12,6,175,9,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,5,6,185,8,6,10,6,12,6,188,9,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,196,
  	8,6,10,6,12,6,199,9,6,1,6,1,6,1,6,1,6,1,6,3,6,206,8,6,1,7,1,7,5,7,210,
  	8,7,10,7,12,7,213,9,7,1,7,1,7,1,8,1,8,1,8,1,8,5,8,221,8,8,10,8,12,8,224,
  	9,8,3,8,226,8,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,5,9,235,8,9,10,9,12,9,238,
  	9,9,1,9,1,9,1,9,1,9,3,9,244,8,9,1,9,1,9,1,9,1,9,1,9,1,9,4,9,252,8,9,11,
  	9,12,9,253,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,265,8,9,1,10,5,10,
  	268,8,10,10,10,12,10,271,9,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,
  	280,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,291,8,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,306,
  	8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,315,8,13,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,15,1,15,1,15,3,15,326,8,15,1,15,1,15,3,15,330,8,15,1,
  	15,1,15,3,15,334,8,15,1,15,1,15,1,15,1,16,1,16,3,16,341,8,16,1,17,1,17,
  	1,17,1,17,1,18,1,18,1,18,0,1,4,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,0,9,3,0,47,48,52,52,61,61,1,0,14,15,1,0,49,51,1,0,47,48,
  	1,0,44,45,1,0,40,43,1,0,37,38,2,0,39,39,62,71,1,0,1,2,397,0,41,1,0,0,
  	0,2,48,1,0,0,0,4,66,1,0,0,0,6,139,1,0,0,0,8,141,1,0,0,0,10,161,1,0,0,
  	0,12,205,1,0,0,0,14,207,1,0,0,0,16,216,1,0,0,0,18,264,1,0,0,0,20,269,
  	1,0,0,0,22,279,1,0,0,0,24,305,1,0,0,0,26,307,1,0,0,0,28,316,1,0,0,0,30,
  	322,1,0,0,0,32,338,1,0,0,0,34,342,1,0,0,0,36,346,1,0,0,0,38,40,3,2,1,
  	0,39,38,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,1,1,0,0,
  	0,43,41,1,0,0,0,44,45,3,4,2,0,45,46,5,28,0,0,46,49,1,0,0,0,47,49,5,28,
  	0,0,48,44,1,0,0,0,48,47,1,0,0,0,49,3,1,0,0,0,50,51,6,2,-1,0,51,67,3,6,
  	3,0,52,53,5,49,0,0,53,67,3,4,2,20,54,55,7,0,0,0,55,67,3,4,2,19,56,67,
  	5,75,0,0,57,67,5,78,0,0,58,67,7,1,0,0,59,67,5,84,0,0,60,67,5,85,0,0,61,
  	67,3,36,18,0,62,63,5,29,0,0,63,64,3,4,2,0,64,65,5,30,0,0,65,67,1,0,0,
  	0,66,50,1,0,0,0,66,52,1,0,0,0,66,54,1,0,0,0,66,56,1,0,0,0,66,57,1,0,0,
  	0,66,58,1,0,0,0,66,59,1,0,0,0,66,60,1,0,0,0,66,61,1,0,0,0,66,62,1,0,0,
  	0,67,125,1,0,0,0,68,69,10,24,0,0,69,70,5,35,0,0,70,71,5,35,0,0,71,124,
  	3,4,2,25,72,73,10,23,0,0,73,74,5,58,0,0,74,124,3,4,2,24,75,76,10,18,0,
  	0,76,77,7,2,0,0,77,124,3,4,2,19,78,79,10,17,0,0,79,80,7,3,0,0,80,124,
  	3,4,2,18,81,82,10,16,0,0,82,83,7,4,0,0,83,124,3,4,2,17,84,85,10,15,0,
  	0,85,86,7,5,0,0,86,124,3,4,2,16,87,88,10,14,0,0,88,89,7,6,0,0,89,124,
  	3,4,2,15,90,91,10,13,0,0,91,92,5,53,0,0,92,124,3,4,2,14,93,94,10,12,0,
  	0,94,95,5,57,0,0,95,124,3,4,2,13,96,97,10,11,0,0,97,98,5,55,0,0,98,124,
  	3,4,2,12,99,100,10,10,0,0,100,101,5,54,0,0,101,124,3,4,2,11,102,103,10,
  	9,0,0,103,104,5,56,0,0,104,124,3,4,2,10,105,106,10,8,0,0,106,107,7,7,
  	0,0,107,124,3,4,2,9,108,109,10,22,0,0,109,118,5,29,0,0,110,115,3,4,2,
  	0,111,112,5,36,0,0,112,114,3,4,2,0,113,111,1,0,0,0,114,117,1,0,0,0,115,
  	113,1,0,0,0,115,116,1,0,0,0,116,119,1,0,0,0,117,115,1,0,0,0,118,110,1,
  	0,0,0,118,119,1,0,0,0,119,120,1,0,0,0,120,124,5,30,0,0,121,122,10,21,
  	0,0,122,124,5,49,0,0,123,68,1,0,0,0,123,72,1,0,0,0,123,75,1,0,0,0,123,
  	78,1,0,0,0,123,81,1,0,0,0,123,84,1,0,0,0,123,87,1,0,0,0,123,90,1,0,0,
  	0,123,93,1,0,0,0,123,96,1,0,0,0,123,99,1,0,0,0,123,102,1,0,0,0,123,105,
  	1,0,0,0,123,108,1,0,0,0,123,121,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,
  	0,125,126,1,0,0,0,126,5,1,0,0,0,127,125,1,0,0,0,128,140,3,12,6,0,129,
  	140,3,24,12,0,130,140,3,34,17,0,131,140,3,16,8,0,132,140,3,14,7,0,133,
  	140,3,32,16,0,134,140,3,10,5,0,135,140,3,26,13,0,136,140,3,28,14,0,137,
  	140,3,30,15,0,138,140,3,8,4,0,139,128,1,0,0,0,139,129,1,0,0,0,139,130,
  	1,0,0,0,139,131,1,0,0,0,139,132,1,0,0,0,139,133,1,0,0,0,139,134,1,0,0,
  	0,139,135,1,0,0,0,139,136,1,0,0,0,139,137,1,0,0,0,139,138,1,0,0,0,140,
  	7,1,0,0,0,141,142,5,46,0,0,142,154,3,36,18,0,143,144,5,29,0,0,144,149,
  	3,4,2,0,145,146,5,36,0,0,146,148,3,4,2,0,147,145,1,0,0,0,148,151,1,0,
  	0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,152,1,0,0,0,151,149,1,0,0,0,152,
  	153,5,30,0,0,153,155,1,0,0,0,154,143,1,0,0,0,154,155,1,0,0,0,155,157,
  	1,0,0,0,156,158,5,28,0,0,157,156,1,0,0,0,157,158,1,0,0,0,158,159,1,0,
  	0,0,159,160,3,6,3,0,160,9,1,0,0,0,161,162,5,12,0,0,162,167,3,36,18,0,
  	163,164,5,58,0,0,164,166,3,36,18,0,165,163,1,0,0,0,166,169,1,0,0,0,167,
  	165,1,0,0,0,167,168,1,0,0,0,168,11,1,0,0,0,169,167,1,0,0,0,170,172,3,
  	22,11,0,171,170,1,0,0,0,172,175,1,0,0,0,173,171,1,0,0,0,173,174,1,0,0,
  	0,174,176,1,0,0,0,175,173,1,0,0,0,176,177,7,8,0,0,177,178,3,36,18,0,178,
  	179,5,35,0,0,179,180,3,4,2,0,180,181,5,39,0,0,181,182,3,4,2,0,182,206,
  	1,0,0,0,183,185,3,22,11,0,184,183,1,0,0,0,185,188,1,0,0,0,186,184,1,0,
  	0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,186,1,0,0,0,189,190,7,8,0,0,190,
  	191,3,36,18,0,191,192,5,39,0,0,192,193,3,4,2,0,193,206,1,0,0,0,194,196,
  	3,22,11,0,195,194,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,198,1,0,
  	0,0,198,200,1,0,0,0,199,197,1,0,0,0,200,201,7,8,0,0,201,202,3,36,18,0,
  	202,203,5,35,0,0,203,204,3,4,2,0,204,206,1,0,0,0,205,173,1,0,0,0,205,
  	186,1,0,0,0,205,197,1,0,0,0,206,13,1,0,0,0,207,211,5,33,0,0,208,210,3,
  	2,1,0,209,208,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,
  	212,214,1,0,0,0,213,211,1,0,0,0,214,215,5,34,0,0,215,15,1,0,0,0,216,225,
  	5,33,0,0,217,222,3,4,2,0,218,219,5,36,0,0,219,221,3,4,2,0,220,218,1,0,
  	0,0,221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,226,1,0,0,0,224,
  	222,1,0,0,0,225,217,1,0,0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,5,
  	34,0,0,228,17,1,0,0,0,229,230,3,36,18,0,230,231,5,35,0,0,231,232,3,4,
  	2,0,232,233,5,36,0,0,233,235,1,0,0,0,234,229,1,0,0,0,235,238,1,0,0,0,
  	236,234,1,0,0,0,236,237,1,0,0,0,237,243,1,0,0,0,238,236,1,0,0,0,239,240,
  	3,36,18,0,240,241,5,35,0,0,241,242,3,4,2,0,242,244,1,0,0,0,243,239,1,
  	0,0,0,243,244,1,0,0,0,244,245,1,0,0,0,245,265,6,9,-1,0,246,247,3,36,18,
  	0,247,248,5,35,0,0,248,249,3,4,2,0,249,250,5,36,0,0,250,252,1,0,0,0,251,
  	246,1,0,0,0,252,253,1,0,0,0,253,251,1,0,0,0,253,254,1,0,0,0,254,255,1,
  	0,0,0,255,256,5,58,0,0,256,257,5,58,0,0,257,258,5,58,0,0,258,259,6,9,
  	-1,0,259,265,1,0,0,0,260,261,5,58,0,0,261,262,5,58,0,0,262,263,5,58,0,
  	0,263,265,6,9,-1,0,264,236,1,0,0,0,264,251,1,0,0,0,264,260,1,0,0,0,265,
  	19,1,0,0,0,266,268,3,22,11,0,267,266,1,0,0,0,268,271,1,0,0,0,269,267,
  	1,0,0,0,269,270,1,0,0,0,270,21,1,0,0,0,271,269,1,0,0,0,272,280,5,21,0,
  	0,273,280,5,23,0,0,274,280,5,24,0,0,275,280,5,25,0,0,276,280,5,20,0,0,
  	277,278,5,19,0,0,278,280,5,84,0,0,279,272,1,0,0,0,279,273,1,0,0,0,279,
  	274,1,0,0,0,279,275,1,0,0,0,279,276,1,0,0,0,279,277,1,0,0,0,280,23,1,
  	0,0,0,281,282,3,20,10,0,282,283,5,9,0,0,283,284,3,36,18,0,284,285,5,29,
  	0,0,285,286,3,18,9,0,286,290,5,30,0,0,287,288,5,48,0,0,288,289,5,40,0,
  	0,289,291,3,4,2,0,290,287,1,0,0,0,290,291,1,0,0,0,291,292,1,0,0,0,292,
  	293,3,14,7,0,293,306,1,0,0,0,294,295,3,20,10,0,295,296,5,9,0,0,296,297,
  	3,36,18,0,297,298,5,29,0,0,298,299,3,18,9,0,299,300,5,30,0,0,300,301,
  	5,48,0,0,301,302,5,40,0,0,302,303,3,4,2,0,303,304,5,28,0,0,304,306,1,
  	0,0,0,305,281,1,0,0,0,305,294,1,0,0,0,306,25,1,0,0,0,307,308,5,7,0,0,
  	308,309,5,29,0,0,309,310,3,4,2,0,310,311,5,30,0,0,311,314,3,14,7,0,312,
  	313,5,8,0,0,313,315,3,14,7,0,314,312,1,0,0,0,314,315,1,0,0,0,315,27,1,
  	0,0,0,316,317,5,4,0,0,317,318,5,29,0,0,318,319,3,4,2,0,319,320,5,30,0,
  	0,320,321,3,14,7,0,321,29,1,0,0,0,322,323,5,3,0,0,323,325,5,29,0,0,324,
  	326,3,4,2,0,325,324,1,0,0,0,325,326,1,0,0,0,326,327,1,0,0,0,327,329,5,
  	28,0,0,328,330,3,4,2,0,329,328,1,0,0,0,329,330,1,0,0,0,330,331,1,0,0,
  	0,331,333,5,28,0,0,332,334,3,4,2,0,333,332,1,0,0,0,333,334,1,0,0,0,334,
  	335,1,0,0,0,335,336,5,30,0,0,336,337,3,14,7,0,337,31,1,0,0,0,338,340,
  	5,10,0,0,339,341,3,4,2,0,340,339,1,0,0,0,340,341,1,0,0,0,341,33,1,0,0,
  	0,342,343,5,13,0,0,343,344,3,36,18,0,344,345,3,14,7,0,345,35,1,0,0,0,
  	346,347,5,73,0,0,347,37,1,0,0,0,32,41,48,66,115,118,123,125,139,149,154,
  	157,167,173,186,197,205,211,222,225,236,243,253,264,269,279,290,305,314,
  	325,329,333,340
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
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149461423774) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(38);
      expressionEnd();
      setState(43);
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
    setState(48);
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
        setState(44);
        expression(0);
        setState(45);
        match(RiddleParser::Semi);
        break;
      }

      case RiddleParser::Semi: {
        enterOuterAlt(_localctx, 2);
        setState(47);
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
    setState(66);
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

        setState(51);
        statement();
        break;
      }

      case RiddleParser::Star: {
        _localctx = _tracker.createInstance<LoadExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(52);
        match(RiddleParser::Star);
        setState(53);
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
        setState(54);
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
        setState(55);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->value = expression(19);
        break;
      }

      case RiddleParser::Decimal: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(56);
        match(RiddleParser::Decimal);
        break;
      }

      case RiddleParser::Float: {
        _localctx = _tracker.createInstance<FloatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(RiddleParser::Float);
        break;
      }

      case RiddleParser::True:
      case RiddleParser::False: {
        _localctx = _tracker.createInstance<BooleanContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(58);
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
        setState(59);
        match(RiddleParser::STRING);
        break;
      }

      case RiddleParser::CHAR: {
        _localctx = _tracker.createInstance<CharContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(60);
        match(RiddleParser::CHAR);
        break;
      }

      case RiddleParser::Identifier: {
        _localctx = _tracker.createInstance<ObjectContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(61);
        id();
        break;
      }

      case RiddleParser::LeftParen: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(62);
        match(RiddleParser::LeftParen);
        setState(63);
        antlrcpp::downCast<ParenExprContext *>(_localctx)->value = expression(0);
        setState(64);
        match(RiddleParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(123);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ScopeAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(68);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(69);
          match(RiddleParser::Colon);
          setState(70);
          match(RiddleParser::Colon);
          setState(71);
          antlrcpp::downCast<ScopeAccessContext *>(_localctx)->right = expression(25);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MemberAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(72);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(73);
          match(RiddleParser::Dot);
          setState(74);
          antlrcpp::downCast<MemberAccessContext *>(_localctx)->right = expression(24);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(75);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(76);
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
          setState(77);
          antlrcpp::downCast<MulOpContext *>(_localctx)->right = expression(19);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(78);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(79);
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
          setState(80);
          antlrcpp::downCast<AddOpContext *>(_localctx)->right = expression(18);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ShiftOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(81);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(82);
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
          setState(83);
          antlrcpp::downCast<ShiftOpContext *>(_localctx)->right = expression(17);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<RelOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(84);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(85);
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
          setState(86);
          antlrcpp::downCast<RelOpContext *>(_localctx)->right = expression(16);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(87);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(88);
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
          setState(89);
          antlrcpp::downCast<EqOpContext *>(_localctx)->right = expression(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(90);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(91);
          antlrcpp::downCast<BitAndContext *>(_localctx)->op = match(RiddleParser::And);
          setState(92);
          antlrcpp::downCast<BitAndContext *>(_localctx)->right = expression(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(93);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(94);
          antlrcpp::downCast<BitXorContext *>(_localctx)->op = match(RiddleParser::Xor);
          setState(95);
          antlrcpp::downCast<BitXorContext *>(_localctx)->right = expression(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(96);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(97);
          antlrcpp::downCast<BitOrContext *>(_localctx)->op = match(RiddleParser::Or);
          setState(98);
          antlrcpp::downCast<BitOrContext *>(_localctx)->right = expression(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(99);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(100);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->op = match(RiddleParser::AndAnd);
          setState(101);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->right = expression(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(102);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(103);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->op = match(RiddleParser::OrOr);
          setState(104);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->right = expression(10);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CompoundAssignOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(105);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(106);
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
          setState(107);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->right = expression(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<CallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(108);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(109);
          match(RiddleParser::LeftParen);
          setState(118);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 73)) & 6181) != 0)) {
            setState(110);
            expression(0);
            setState(115);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == RiddleParser::Comma) {
              setState(111);
              match(RiddleParser::Comma);
              setState(112);
              expression(0);
              setState(117);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(120);
          match(RiddleParser::RightParen);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<PointerToContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(121);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(122);
          match(RiddleParser::Star);
          break;
        }

        default:
          break;
        } 
      }
      setState(127);
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
    setState(139);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      varDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      funcDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(130);
      classDecl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(131);
      initList();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(132);
      block();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(133);
      returnStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(134);
      packStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(135);
      ifStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(136);
      whileStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(137);
      forStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(138);
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
    setState(141);
    match(RiddleParser::At);
    setState(142);
    id();
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::LeftParen) {
      setState(143);
      match(RiddleParser::LeftParen);
      setState(144);
      expression(0);
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(145);
        match(RiddleParser::Comma);
        setState(146);
        expression(0);
        setState(151);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(152);
      match(RiddleParser::RightParen);
    }
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::Semi) {
      setState(156);
      match(RiddleParser::Semi);
    }
    setState(159);
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
    setState(161);
    match(RiddleParser::Package);
    setState(162);
    id();
    setState(167);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(163);
        match(RiddleParser::Dot);
        setState(164);
        id(); 
      }
      setState(169);
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
    setState(205);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(170);
        modifier();
        setState(175);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(176);
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
      setState(177);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(178);
      match(RiddleParser::Colon);
      setState(179);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
      setState(180);
      match(RiddleParser::Assign);
      setState(181);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(183);
        modifier();
        setState(188);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(189);
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
      setState(190);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(191);
      match(RiddleParser::Assign);
      setState(192);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(194);
        modifier();
        setState(199);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(200);
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
      setState(201);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(202);
      match(RiddleParser::Colon);
      setState(203);
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
    setState(207);
    match(RiddleParser::LeftCurly);
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149461423774) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(208);
      expressionEnd();
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(214);
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
    setState(216);
    match(RiddleParser::LeftCurly);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(217);
      expression(0);
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(218);
        match(RiddleParser::Comma);
        setState(219);
        expression(0);
        setState(224);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(227);
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
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(229);
          id();
          setState(230);
          match(RiddleParser::Colon);
          setState(231);
          expression(0);
          setState(232);
          match(RiddleParser::Comma); 
        }
        setState(238);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      }
      setState(243);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RiddleParser::Identifier) {
        setState(239);
        id();
        setState(240);
        match(RiddleParser::Colon);
        setState(241);
        expression(0);
      }
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = false;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(251); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(246);
        id();
        setState(247);
        match(RiddleParser::Colon);
        setState(248);
        expression(0);
        setState(249);
        match(RiddleParser::Comma);
        setState(253); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == RiddleParser::Identifier);
      setState(255);
      match(RiddleParser::Dot);
      setState(256);
      match(RiddleParser::Dot);
      setState(257);
      match(RiddleParser::Dot);
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = true;
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(260);
      match(RiddleParser::Dot);
      setState(261);
      match(RiddleParser::Dot);
      setState(262);
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

//----------------- ModifierListContext ------------------------------------------------------------------

RiddleParser::ModifierListContext::ModifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<RiddleParser::ModifierContext *> RiddleParser::ModifierListContext::modifier() {
  return getRuleContexts<RiddleParser::ModifierContext>();
}

RiddleParser::ModifierContext* RiddleParser::ModifierListContext::modifier(size_t i) {
  return getRuleContext<RiddleParser::ModifierContext>(i);
}


size_t RiddleParser::ModifierListContext::getRuleIndex() const {
  return RiddleParser::RuleModifierList;
}

void RiddleParser::ModifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModifierList(this);
}

void RiddleParser::ModifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModifierList(this);
}


std::any RiddleParser::ModifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitModifierList(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::ModifierListContext* RiddleParser::modifierList() {
  ModifierListContext *_localctx = _tracker.createInstance<ModifierListContext>(_ctx, getState());
  enterRule(_localctx, 20, RiddleParser::RuleModifierList);
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
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62390272) != 0)) {
      setState(266);
      modifier();
      setState(271);
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
  enterRule(_localctx, 22, RiddleParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Static: {
        enterOuterAlt(_localctx, 1);
        setState(272);
        match(RiddleParser::Static);
        break;
      }

      case RiddleParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(273);
        match(RiddleParser::Public);
        break;
      }

      case RiddleParser::Protected: {
        enterOuterAlt(_localctx, 3);
        setState(274);
        match(RiddleParser::Protected);
        break;
      }

      case RiddleParser::Private: {
        enterOuterAlt(_localctx, 4);
        setState(275);
        match(RiddleParser::Private);
        break;
      }

      case RiddleParser::Override: {
        enterOuterAlt(_localctx, 5);
        setState(276);
        match(RiddleParser::Override);
        break;
      }

      case RiddleParser::Extern: {
        enterOuterAlt(_localctx, 6);
        setState(277);
        match(RiddleParser::Extern);

        setState(278);
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

RiddleParser::ModifierListContext* RiddleParser::FuncDeclContext::modifierList() {
  return getRuleContext<RiddleParser::ModifierListContext>(0);
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
  enterRule(_localctx, 24, RiddleParser::RuleFuncDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(281);
      modifierList();
      setState(282);
      match(RiddleParser::Func);
      setState(283);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(284);
      match(RiddleParser::LeftParen);
      setState(285);
      declArgs();
      setState(286);
      match(RiddleParser::RightParen);
      setState(290);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RiddleParser::Sub) {
        setState(287);
        match(RiddleParser::Sub);
        setState(288);
        match(RiddleParser::Greater);
        setState(289);
        antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      }
      setState(292);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->body = block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(294);
      modifierList();
      setState(295);
      match(RiddleParser::Func);
      setState(296);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(297);
      match(RiddleParser::LeftParen);
      setState(298);
      declArgs();
      setState(299);
      match(RiddleParser::RightParen);
      setState(300);
      match(RiddleParser::Sub);
      setState(301);
      match(RiddleParser::Greater);
      setState(302);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      setState(303);
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
  enterRule(_localctx, 26, RiddleParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(RiddleParser::If);
    setState(308);
    match(RiddleParser::LeftParen);
    setState(309);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->cond = expression(0);
    setState(310);
    match(RiddleParser::RightParen);
    setState(311);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->then = block();
    setState(314);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(312);
      match(RiddleParser::Else);
      setState(313);
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
  enterRule(_localctx, 28, RiddleParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(RiddleParser::While);
    setState(317);
    match(RiddleParser::LeftParen);
    setState(318);
    antlrcpp::downCast<WhileStmtContext *>(_localctx)->cond = expression(0);
    setState(319);
    match(RiddleParser::RightParen);
    setState(320);
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
  enterRule(_localctx, 30, RiddleParser::RuleForStmt);
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
    setState(322);
    match(RiddleParser::For);
    setState(323);
    match(RiddleParser::LeftParen);
    setState(325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(324);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->init = expression(0);
    }
    setState(327);
    match(RiddleParser::Semi);
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(328);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->cond = expression(0);
    }
    setState(331);
    match(RiddleParser::Semi);
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2311402149192988318) != 0) || ((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 6181) != 0)) {
      setState(332);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->change = expression(0);
    }
    setState(335);
    match(RiddleParser::RightParen);
    setState(336);
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
  enterRule(_localctx, 32, RiddleParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(RiddleParser::Return);
    setState(340);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(339);
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
  enterRule(_localctx, 34, RiddleParser::RuleClassDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(RiddleParser::Class);
    setState(343);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->name = id();
    setState(344);
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
  enterRule(_localctx, 36, RiddleParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
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
