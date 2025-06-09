
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
      "program", "terminator", "expressionEnd", "expression", "statement", 
      "enumValue", "enumStmt", "annotation", "packStmt", "varDecl", "block", 
      "initList", "declArgs", "modifierList", "modifier", "funcDecl", "ifStmt", 
      "whileStmt", "forStmt", "returnStmt", "classDecl", "unionDecl", "id"
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
      "Func", "Return", "Import", "Package", "Class", "True", "False", "Null", 
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
  	4,1,90,408,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,4,0,48,8,0,11,0,12,0,49,1,0,1,0,1,1,1,1,1,1,3,1,57,8,
  	1,1,2,1,2,1,2,1,2,3,2,63,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,3,3,81,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,5,3,128,8,3,10,3,12,3,131,9,3,3,3,133,8,3,1,3,1,3,1,3,5,3,138,8,
  	3,10,3,12,3,141,9,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,3,4,156,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,170,
  	8,5,10,5,12,5,173,9,5,1,5,1,5,3,5,177,8,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,
  	185,8,6,10,6,12,6,188,9,6,3,6,190,8,6,1,6,3,6,193,8,6,1,6,1,6,1,7,1,7,
  	1,7,1,7,1,7,1,7,5,7,203,8,7,10,7,12,7,206,9,7,1,7,1,7,3,7,210,8,7,1,7,
  	3,7,213,8,7,1,7,1,7,1,8,1,8,1,8,1,8,5,8,221,8,8,10,8,12,8,224,9,8,1,9,
  	5,9,227,8,9,10,9,12,9,230,9,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,240,
  	8,9,10,9,12,9,243,9,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,251,8,9,10,9,12,9,254,
  	9,9,1,9,1,9,1,9,1,9,1,9,3,9,261,8,9,1,10,1,10,5,10,265,8,10,10,10,12,
  	10,268,9,10,1,10,1,10,1,11,1,11,1,11,1,11,5,11,276,8,11,10,11,12,11,279,
  	9,11,3,11,281,8,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,5,12,290,8,12,10,
  	12,12,12,293,9,12,1,12,1,12,1,12,1,12,3,12,299,8,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,4,12,307,8,12,11,12,12,12,308,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,3,12,320,8,12,1,13,5,13,323,8,13,10,13,12,13,326,9,
  	13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,335,8,14,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,3,15,346,8,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,361,8,15,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,16,3,16,370,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,
  	18,1,18,3,18,381,8,18,1,18,1,18,3,18,385,8,18,1,18,1,18,3,18,389,8,18,
  	1,18,1,18,1,18,1,19,1,19,3,19,396,8,19,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,22,1,22,1,22,0,1,6,23,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,0,9,3,0,50,51,55,55,64,64,1,0,14,15,1,0,52,
  	54,1,0,50,51,1,0,47,48,1,0,43,46,1,0,40,41,2,0,42,42,65,74,1,0,1,2,462,
  	0,47,1,0,0,0,2,56,1,0,0,0,4,62,1,0,0,0,6,80,1,0,0,0,8,155,1,0,0,0,10,
  	176,1,0,0,0,12,178,1,0,0,0,14,196,1,0,0,0,16,216,1,0,0,0,18,260,1,0,0,
  	0,20,262,1,0,0,0,22,271,1,0,0,0,24,319,1,0,0,0,26,324,1,0,0,0,28,334,
  	1,0,0,0,30,360,1,0,0,0,32,362,1,0,0,0,34,371,1,0,0,0,36,377,1,0,0,0,38,
  	393,1,0,0,0,40,397,1,0,0,0,42,401,1,0,0,0,44,405,1,0,0,0,46,48,3,4,2,
  	0,47,46,1,0,0,0,48,49,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,51,1,0,0,
  	0,51,52,5,0,0,1,52,1,1,0,0,0,53,57,5,30,0,0,54,57,5,0,0,1,55,57,4,1,0,
  	0,56,53,1,0,0,0,56,54,1,0,0,0,56,55,1,0,0,0,57,3,1,0,0,0,58,59,3,6,3,
  	0,59,60,3,2,1,0,60,63,1,0,0,0,61,63,5,31,0,0,62,58,1,0,0,0,62,61,1,0,
  	0,0,63,5,1,0,0,0,64,65,6,3,-1,0,65,81,3,8,4,0,66,67,5,52,0,0,67,81,3,
  	6,3,20,68,69,7,0,0,0,69,81,3,6,3,19,70,81,5,77,0,0,71,81,5,80,0,0,72,
  	81,7,1,0,0,73,81,5,86,0,0,74,81,5,87,0,0,75,81,3,44,22,0,76,77,5,32,0,
  	0,77,78,3,6,3,0,78,79,5,33,0,0,79,81,1,0,0,0,80,64,1,0,0,0,80,66,1,0,
  	0,0,80,68,1,0,0,0,80,70,1,0,0,0,80,71,1,0,0,0,80,72,1,0,0,0,80,73,1,0,
  	0,0,80,74,1,0,0,0,80,75,1,0,0,0,80,76,1,0,0,0,81,139,1,0,0,0,82,83,10,
  	24,0,0,83,84,5,38,0,0,84,85,5,38,0,0,85,138,3,6,3,25,86,87,10,23,0,0,
  	87,88,5,61,0,0,88,138,3,6,3,24,89,90,10,18,0,0,90,91,7,2,0,0,91,138,3,
  	6,3,19,92,93,10,17,0,0,93,94,7,3,0,0,94,138,3,6,3,18,95,96,10,16,0,0,
  	96,97,7,4,0,0,97,138,3,6,3,17,98,99,10,15,0,0,99,100,7,5,0,0,100,138,
  	3,6,3,16,101,102,10,14,0,0,102,103,7,6,0,0,103,138,3,6,3,15,104,105,10,
  	13,0,0,105,106,5,56,0,0,106,138,3,6,3,14,107,108,10,12,0,0,108,109,5,
  	60,0,0,109,138,3,6,3,13,110,111,10,11,0,0,111,112,5,58,0,0,112,138,3,
  	6,3,12,113,114,10,10,0,0,114,115,5,57,0,0,115,138,3,6,3,11,116,117,10,
  	9,0,0,117,118,5,59,0,0,118,138,3,6,3,10,119,120,10,8,0,0,120,121,7,7,
  	0,0,121,138,3,6,3,9,122,123,10,22,0,0,123,132,5,32,0,0,124,129,3,6,3,
  	0,125,126,5,39,0,0,126,128,3,6,3,0,127,125,1,0,0,0,128,131,1,0,0,0,129,
  	127,1,0,0,0,129,130,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,132,124,1,
  	0,0,0,132,133,1,0,0,0,133,134,1,0,0,0,134,138,5,33,0,0,135,136,10,21,
  	0,0,136,138,5,52,0,0,137,82,1,0,0,0,137,86,1,0,0,0,137,89,1,0,0,0,137,
  	92,1,0,0,0,137,95,1,0,0,0,137,98,1,0,0,0,137,101,1,0,0,0,137,104,1,0,
  	0,0,137,107,1,0,0,0,137,110,1,0,0,0,137,113,1,0,0,0,137,116,1,0,0,0,137,
  	119,1,0,0,0,137,122,1,0,0,0,137,135,1,0,0,0,138,141,1,0,0,0,139,137,1,
  	0,0,0,139,140,1,0,0,0,140,7,1,0,0,0,141,139,1,0,0,0,142,156,3,18,9,0,
  	143,156,3,30,15,0,144,156,3,40,20,0,145,156,3,22,11,0,146,156,3,20,10,
  	0,147,156,3,38,19,0,148,156,3,16,8,0,149,156,3,32,16,0,150,156,3,34,17,
  	0,151,156,3,36,18,0,152,156,3,14,7,0,153,156,3,12,6,0,154,156,3,42,21,
  	0,155,142,1,0,0,0,155,143,1,0,0,0,155,144,1,0,0,0,155,145,1,0,0,0,155,
  	146,1,0,0,0,155,147,1,0,0,0,155,148,1,0,0,0,155,149,1,0,0,0,155,150,1,
  	0,0,0,155,151,1,0,0,0,155,152,1,0,0,0,155,153,1,0,0,0,155,154,1,0,0,0,
  	156,9,1,0,0,0,157,158,3,44,22,0,158,159,6,5,-1,0,159,177,1,0,0,0,160,
  	161,3,44,22,0,161,162,5,32,0,0,162,163,5,33,0,0,163,177,1,0,0,0,164,165,
  	3,44,22,0,165,166,5,32,0,0,166,171,3,6,3,0,167,168,5,39,0,0,168,170,3,
  	6,3,0,169,167,1,0,0,0,170,173,1,0,0,0,171,169,1,0,0,0,171,172,1,0,0,0,
  	172,174,1,0,0,0,173,171,1,0,0,0,174,175,5,33,0,0,175,177,1,0,0,0,176,
  	157,1,0,0,0,176,160,1,0,0,0,176,164,1,0,0,0,177,11,1,0,0,0,178,179,5,
  	28,0,0,179,180,3,44,22,0,180,189,5,36,0,0,181,186,3,10,5,0,182,183,5,
  	39,0,0,183,185,3,10,5,0,184,182,1,0,0,0,185,188,1,0,0,0,186,184,1,0,0,
  	0,186,187,1,0,0,0,187,190,1,0,0,0,188,186,1,0,0,0,189,181,1,0,0,0,189,
  	190,1,0,0,0,190,192,1,0,0,0,191,193,5,39,0,0,192,191,1,0,0,0,192,193,
  	1,0,0,0,193,194,1,0,0,0,194,195,5,37,0,0,195,13,1,0,0,0,196,197,5,49,
  	0,0,197,209,3,44,22,0,198,199,5,32,0,0,199,204,3,6,3,0,200,201,5,39,0,
  	0,201,203,3,6,3,0,202,200,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,
  	205,1,0,0,0,205,207,1,0,0,0,206,204,1,0,0,0,207,208,5,33,0,0,208,210,
  	1,0,0,0,209,198,1,0,0,0,209,210,1,0,0,0,210,212,1,0,0,0,211,213,5,30,
  	0,0,212,211,1,0,0,0,212,213,1,0,0,0,213,214,1,0,0,0,214,215,3,8,4,0,215,
  	15,1,0,0,0,216,217,5,12,0,0,217,222,3,44,22,0,218,219,5,61,0,0,219,221,
  	3,44,22,0,220,218,1,0,0,0,221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,
  	0,0,223,17,1,0,0,0,224,222,1,0,0,0,225,227,3,28,14,0,226,225,1,0,0,0,
  	227,230,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,231,1,0,0,0,230,228,
  	1,0,0,0,231,232,7,8,0,0,232,233,3,44,22,0,233,234,5,38,0,0,234,235,3,
  	6,3,0,235,236,5,42,0,0,236,237,3,6,3,0,237,261,1,0,0,0,238,240,3,28,14,
  	0,239,238,1,0,0,0,240,243,1,0,0,0,241,239,1,0,0,0,241,242,1,0,0,0,242,
  	244,1,0,0,0,243,241,1,0,0,0,244,245,7,8,0,0,245,246,3,44,22,0,246,247,
  	5,42,0,0,247,248,3,6,3,0,248,261,1,0,0,0,249,251,3,28,14,0,250,249,1,
  	0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,255,1,0,0,0,
  	254,252,1,0,0,0,255,256,7,8,0,0,256,257,3,44,22,0,257,258,5,38,0,0,258,
  	259,3,6,3,0,259,261,1,0,0,0,260,228,1,0,0,0,260,241,1,0,0,0,260,252,1,
  	0,0,0,261,19,1,0,0,0,262,266,5,36,0,0,263,265,3,4,2,0,264,263,1,0,0,0,
  	265,268,1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,269,1,0,0,0,268,266,
  	1,0,0,0,269,270,5,37,0,0,270,21,1,0,0,0,271,280,5,36,0,0,272,277,3,6,
  	3,0,273,274,5,39,0,0,274,276,3,6,3,0,275,273,1,0,0,0,276,279,1,0,0,0,
  	277,275,1,0,0,0,277,278,1,0,0,0,278,281,1,0,0,0,279,277,1,0,0,0,280,272,
  	1,0,0,0,280,281,1,0,0,0,281,282,1,0,0,0,282,283,5,37,0,0,283,23,1,0,0,
  	0,284,285,3,44,22,0,285,286,5,38,0,0,286,287,3,6,3,0,287,288,5,39,0,0,
  	288,290,1,0,0,0,289,284,1,0,0,0,290,293,1,0,0,0,291,289,1,0,0,0,291,292,
  	1,0,0,0,292,298,1,0,0,0,293,291,1,0,0,0,294,295,3,44,22,0,295,296,5,38,
  	0,0,296,297,3,6,3,0,297,299,1,0,0,0,298,294,1,0,0,0,298,299,1,0,0,0,299,
  	300,1,0,0,0,300,320,6,12,-1,0,301,302,3,44,22,0,302,303,5,38,0,0,303,
  	304,3,6,3,0,304,305,5,39,0,0,305,307,1,0,0,0,306,301,1,0,0,0,307,308,
  	1,0,0,0,308,306,1,0,0,0,308,309,1,0,0,0,309,310,1,0,0,0,310,311,5,61,
  	0,0,311,312,5,61,0,0,312,313,5,61,0,0,313,314,6,12,-1,0,314,320,1,0,0,
  	0,315,316,5,61,0,0,316,317,5,61,0,0,317,318,5,61,0,0,318,320,6,12,-1,
  	0,319,291,1,0,0,0,319,306,1,0,0,0,319,315,1,0,0,0,320,25,1,0,0,0,321,
  	323,3,28,14,0,322,321,1,0,0,0,323,326,1,0,0,0,324,322,1,0,0,0,324,325,
  	1,0,0,0,325,27,1,0,0,0,326,324,1,0,0,0,327,335,5,21,0,0,328,335,5,23,
  	0,0,329,335,5,24,0,0,330,335,5,25,0,0,331,335,5,20,0,0,332,333,5,19,0,
  	0,333,335,5,86,0,0,334,327,1,0,0,0,334,328,1,0,0,0,334,329,1,0,0,0,334,
  	330,1,0,0,0,334,331,1,0,0,0,334,332,1,0,0,0,335,29,1,0,0,0,336,337,3,
  	26,13,0,337,338,5,9,0,0,338,339,3,44,22,0,339,340,5,32,0,0,340,341,3,
  	24,12,0,341,345,5,33,0,0,342,343,5,51,0,0,343,344,5,43,0,0,344,346,3,
  	6,3,0,345,342,1,0,0,0,345,346,1,0,0,0,346,347,1,0,0,0,347,348,3,20,10,
  	0,348,361,1,0,0,0,349,350,3,26,13,0,350,351,5,9,0,0,351,352,3,44,22,0,
  	352,353,5,32,0,0,353,354,3,24,12,0,354,355,5,33,0,0,355,356,5,51,0,0,
  	356,357,5,43,0,0,357,358,3,6,3,0,358,359,5,30,0,0,359,361,1,0,0,0,360,
  	336,1,0,0,0,360,349,1,0,0,0,361,31,1,0,0,0,362,363,5,7,0,0,363,364,5,
  	32,0,0,364,365,3,6,3,0,365,366,5,33,0,0,366,369,3,20,10,0,367,368,5,8,
  	0,0,368,370,3,20,10,0,369,367,1,0,0,0,369,370,1,0,0,0,370,33,1,0,0,0,
  	371,372,5,4,0,0,372,373,5,32,0,0,373,374,3,6,3,0,374,375,5,33,0,0,375,
  	376,3,20,10,0,376,35,1,0,0,0,377,378,5,3,0,0,378,380,5,32,0,0,379,381,
  	3,6,3,0,380,379,1,0,0,0,380,381,1,0,0,0,381,382,1,0,0,0,382,384,5,30,
  	0,0,383,385,3,6,3,0,384,383,1,0,0,0,384,385,1,0,0,0,385,386,1,0,0,0,386,
  	388,5,30,0,0,387,389,3,6,3,0,388,387,1,0,0,0,388,389,1,0,0,0,389,390,
  	1,0,0,0,390,391,5,33,0,0,391,392,3,20,10,0,392,37,1,0,0,0,393,395,5,10,
  	0,0,394,396,3,6,3,0,395,394,1,0,0,0,395,396,1,0,0,0,396,39,1,0,0,0,397,
  	398,5,13,0,0,398,399,3,44,22,0,399,400,3,20,10,0,400,41,1,0,0,0,401,402,
  	5,29,0,0,402,403,3,44,22,0,403,404,3,20,10,0,404,43,1,0,0,0,405,406,5,
  	75,0,0,406,45,1,0,0,0,38,49,56,62,80,129,132,137,139,155,171,176,186,
  	189,192,204,209,212,222,228,241,252,260,266,277,280,291,298,308,319,324,
  	334,345,360,369,380,384,388,395
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
    setState(47); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(46);
      expressionEnd();
      setState(49); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 44473122349971102) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12658689) != 0));
    setState(51);
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
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      match(RiddleParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      match(RiddleParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);

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

//----------------- ExpressionEndContext ------------------------------------------------------------------

RiddleParser::ExpressionEndContext::ExpressionEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::ExpressionContext* RiddleParser::ExpressionEndContext::expression() {
  return getRuleContext<RiddleParser::ExpressionContext>(0);
}

RiddleParser::TerminatorContext* RiddleParser::ExpressionEndContext::terminator() {
  return getRuleContext<RiddleParser::TerminatorContext>(0);
}

tree::TerminalNode* RiddleParser::ExpressionEndContext::Endl() {
  return getToken(RiddleParser::Endl, 0);
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
  enterRule(_localctx, 4, RiddleParser::RuleExpressionEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
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
      case RiddleParser::Enum:
      case RiddleParser::Union:
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
        setState(58);
        expression(0);
        setState(59);
        terminator();
        break;
      }

      case RiddleParser::Endl: {
        enterOuterAlt(_localctx, 2);
        setState(61);
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
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, RiddleParser::RuleExpression, precedence);

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
    setState(80);
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
      case RiddleParser::Enum:
      case RiddleParser::Union:
      case RiddleParser::LeftCurly:
      case RiddleParser::At: {
        _localctx = _tracker.createInstance<StatementExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(65);
        statement();
        break;
      }

      case RiddleParser::Star: {
        _localctx = _tracker.createInstance<LoadExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(66);
        match(RiddleParser::Star);
        setState(67);
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
        setState(68);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(((((_la - 50) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 50)) & 16419) != 0))) {
          antlrcpp::downCast<UnaryOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(69);
        antlrcpp::downCast<UnaryOpContext *>(_localctx)->value = expression(19);
        break;
      }

      case RiddleParser::Decimal: {
        _localctx = _tracker.createInstance<IntegerContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(70);
        match(RiddleParser::Decimal);
        break;
      }

      case RiddleParser::Float: {
        _localctx = _tracker.createInstance<FloatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(71);
        match(RiddleParser::Float);
        break;
      }

      case RiddleParser::True:
      case RiddleParser::False: {
        _localctx = _tracker.createInstance<BooleanContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(72);
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
        setState(73);
        match(RiddleParser::STRING);
        break;
      }

      case RiddleParser::CHAR: {
        _localctx = _tracker.createInstance<CharContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(74);
        match(RiddleParser::CHAR);
        break;
      }

      case RiddleParser::Identifier: {
        _localctx = _tracker.createInstance<ObjectContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(75);
        id();
        break;
      }

      case RiddleParser::LeftParen: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(76);
        match(RiddleParser::LeftParen);
        setState(77);
        antlrcpp::downCast<ParenExprContext *>(_localctx)->value = expression(0);
        setState(78);
        match(RiddleParser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(137);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ScopeAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(82);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(83);
          match(RiddleParser::Colon);
          setState(84);
          match(RiddleParser::Colon);
          setState(85);
          antlrcpp::downCast<ScopeAccessContext *>(_localctx)->right = expression(25);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MemberAccessContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(86);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(87);
          match(RiddleParser::Dot);
          setState(88);
          antlrcpp::downCast<MemberAccessContext *>(_localctx)->right = expression(24);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(89);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(90);
          antlrcpp::downCast<MulOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 31525197391593472) != 0))) {
            antlrcpp::downCast<MulOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(91);
          antlrcpp::downCast<MulOpContext *>(_localctx)->right = expression(19);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(92);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(93);
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
          setState(94);
          antlrcpp::downCast<AddOpContext *>(_localctx)->right = expression(18);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ShiftOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(95);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(96);
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
          setState(97);
          antlrcpp::downCast<ShiftOpContext *>(_localctx)->right = expression(17);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<RelOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(98);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(99);
          antlrcpp::downCast<RelOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 131941395333120) != 0))) {
            antlrcpp::downCast<RelOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(100);
          antlrcpp::downCast<RelOpContext *>(_localctx)->right = expression(16);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(101);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(102);
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
          setState(103);
          antlrcpp::downCast<EqOpContext *>(_localctx)->right = expression(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(104);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(105);
          antlrcpp::downCast<BitAndContext *>(_localctx)->op = match(RiddleParser::And);
          setState(106);
          antlrcpp::downCast<BitAndContext *>(_localctx)->right = expression(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXorContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(107);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(108);
          antlrcpp::downCast<BitXorContext *>(_localctx)->op = match(RiddleParser::Xor);
          setState(109);
          antlrcpp::downCast<BitXorContext *>(_localctx)->right = expression(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(110);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(111);
          antlrcpp::downCast<BitOrContext *>(_localctx)->op = match(RiddleParser::Or);
          setState(112);
          antlrcpp::downCast<BitOrContext *>(_localctx)->right = expression(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicAndContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(113);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(114);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->op = match(RiddleParser::AndAnd);
          setState(115);
          antlrcpp::downCast<LogicAndContext *>(_localctx)->right = expression(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicOrContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(116);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(117);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->op = match(RiddleParser::OrOr);
          setState(118);
          antlrcpp::downCast<LogicOrContext *>(_localctx)->right = expression(10);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<CompoundAssignOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(119);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(120);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 42) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 42)) & 8581545985) != 0))) {
            antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(121);
          antlrcpp::downCast<CompoundAssignOpContext *>(_localctx)->right = expression(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<CallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(122);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(123);
          match(RiddleParser::LeftParen);
          setState(132);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 44473120202487454) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & 12658689) != 0)) {
            setState(124);
            expression(0);
            setState(129);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == RiddleParser::Comma) {
              setState(125);
              match(RiddleParser::Comma);
              setState(126);
              expression(0);
              setState(131);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(134);
          match(RiddleParser::RightParen);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<PointerToContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->obj = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(135);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(136);
          match(RiddleParser::Star);
          break;
        }

        default:
          break;
        } 
      }
      setState(141);
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

RiddleParser::EnumStmtContext* RiddleParser::StatementContext::enumStmt() {
  return getRuleContext<RiddleParser::EnumStmtContext>(0);
}

RiddleParser::UnionDeclContext* RiddleParser::StatementContext::unionDecl() {
  return getRuleContext<RiddleParser::UnionDeclContext>(0);
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
  enterRule(_localctx, 8, RiddleParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      varDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      funcDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(144);
      classDecl();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(145);
      initList();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(146);
      block();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(147);
      returnStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(148);
      packStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(149);
      ifStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(150);
      whileStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(151);
      forStmt();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(152);
      annotation();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(153);
      enumStmt();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(154);
      unionDecl();
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

//----------------- EnumValueContext ------------------------------------------------------------------

RiddleParser::EnumValueContext::EnumValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

RiddleParser::IdContext* RiddleParser::EnumValueContext::id() {
  return getRuleContext<RiddleParser::IdContext>(0);
}

tree::TerminalNode* RiddleParser::EnumValueContext::LeftParen() {
  return getToken(RiddleParser::LeftParen, 0);
}

tree::TerminalNode* RiddleParser::EnumValueContext::RightParen() {
  return getToken(RiddleParser::RightParen, 0);
}

std::vector<RiddleParser::ExpressionContext *> RiddleParser::EnumValueContext::expression() {
  return getRuleContexts<RiddleParser::ExpressionContext>();
}

RiddleParser::ExpressionContext* RiddleParser::EnumValueContext::expression(size_t i) {
  return getRuleContext<RiddleParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::EnumValueContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::EnumValueContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::EnumValueContext::getRuleIndex() const {
  return RiddleParser::RuleEnumValue;
}

void RiddleParser::EnumValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumValue(this);
}

void RiddleParser::EnumValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumValue(this);
}


std::any RiddleParser::EnumValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitEnumValue(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::EnumValueContext* RiddleParser::enumValue() {
  EnumValueContext *_localctx = _tracker.createInstance<EnumValueContext>(_ctx, getState());
  enterRule(_localctx, 10, RiddleParser::RuleEnumValue);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(157);
      id();
      antlrcpp::downCast<EnumValueContext *>(_localctx)->hasType =  false;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(160);
      id();
      setState(161);
      match(RiddleParser::LeftParen);
      setState(162);
      match(RiddleParser::RightParen);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(164);
      id();
      setState(165);
      match(RiddleParser::LeftParen);
      setState(166);
      expression(0);
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(167);
        match(RiddleParser::Comma);
        setState(168);
        expression(0);
        setState(173);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(174);
      match(RiddleParser::RightParen);
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

//----------------- EnumStmtContext ------------------------------------------------------------------

RiddleParser::EnumStmtContext::EnumStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::EnumStmtContext::Enum() {
  return getToken(RiddleParser::Enum, 0);
}

tree::TerminalNode* RiddleParser::EnumStmtContext::LeftCurly() {
  return getToken(RiddleParser::LeftCurly, 0);
}

tree::TerminalNode* RiddleParser::EnumStmtContext::RightCurly() {
  return getToken(RiddleParser::RightCurly, 0);
}

RiddleParser::IdContext* RiddleParser::EnumStmtContext::id() {
  return getRuleContext<RiddleParser::IdContext>(0);
}

std::vector<RiddleParser::EnumValueContext *> RiddleParser::EnumStmtContext::enumValue() {
  return getRuleContexts<RiddleParser::EnumValueContext>();
}

RiddleParser::EnumValueContext* RiddleParser::EnumStmtContext::enumValue(size_t i) {
  return getRuleContext<RiddleParser::EnumValueContext>(i);
}

std::vector<tree::TerminalNode *> RiddleParser::EnumStmtContext::Comma() {
  return getTokens(RiddleParser::Comma);
}

tree::TerminalNode* RiddleParser::EnumStmtContext::Comma(size_t i) {
  return getToken(RiddleParser::Comma, i);
}


size_t RiddleParser::EnumStmtContext::getRuleIndex() const {
  return RiddleParser::RuleEnumStmt;
}

void RiddleParser::EnumStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumStmt(this);
}

void RiddleParser::EnumStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumStmt(this);
}


std::any RiddleParser::EnumStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitEnumStmt(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::EnumStmtContext* RiddleParser::enumStmt() {
  EnumStmtContext *_localctx = _tracker.createInstance<EnumStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, RiddleParser::RuleEnumStmt);
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
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(RiddleParser::Enum);
    setState(179);
    antlrcpp::downCast<EnumStmtContext *>(_localctx)->name = id();
    setState(180);
    match(RiddleParser::LeftCurly);
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::Identifier) {
      setState(181);
      enumValue();
      setState(186);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(182);
          match(RiddleParser::Comma);
          setState(183);
          enumValue(); 
        }
        setState(188);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      }
    }
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::Comma) {
      setState(191);
      match(RiddleParser::Comma);
    }
    setState(194);
    match(RiddleParser::RightCurly);
   
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
  enterRule(_localctx, 14, RiddleParser::RuleAnnotation);
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
    match(RiddleParser::At);
    setState(197);
    id();
    setState(209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::LeftParen) {
      setState(198);
      match(RiddleParser::LeftParen);
      setState(199);
      expression(0);
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(200);
        match(RiddleParser::Comma);
        setState(201);
        expression(0);
        setState(206);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(207);
      match(RiddleParser::RightParen);
    }
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == RiddleParser::Semi) {
      setState(211);
      match(RiddleParser::Semi);
    }
    setState(214);
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
  enterRule(_localctx, 16, RiddleParser::RulePackStmt);

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
    setState(216);
    match(RiddleParser::Package);
    setState(217);
    id();
    setState(222);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(218);
        match(RiddleParser::Dot);
        setState(219);
        id(); 
      }
      setState(224);
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
  enterRule(_localctx, 18, RiddleParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(260);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(228);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(225);
        modifier();
        setState(230);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(231);
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
      setState(232);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(233);
      match(RiddleParser::Colon);
      setState(234);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->type = expression(0);
      setState(235);
      match(RiddleParser::Assign);
      setState(236);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(238);
        modifier();
        setState(243);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(244);
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
      setState(245);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(246);
      match(RiddleParser::Assign);
      setState(247);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->value = expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 62390272) != 0)) {
        setState(249);
        modifier();
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(255);
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
      setState(256);
      antlrcpp::downCast<VarDeclContext *>(_localctx)->name = id();
      setState(257);
      match(RiddleParser::Colon);
      setState(258);
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
  enterRule(_localctx, 20, RiddleParser::RuleBlock);
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
    setState(262);
    match(RiddleParser::LeftCurly);
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 44473122349971102) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12658689) != 0)) {
      setState(263);
      expressionEnd();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(269);
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
  enterRule(_localctx, 22, RiddleParser::RuleInitList);
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
    setState(271);
    match(RiddleParser::LeftCurly);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 44473120202487454) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12658689) != 0)) {
      setState(272);
      expression(0);
      setState(277);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == RiddleParser::Comma) {
        setState(273);
        match(RiddleParser::Comma);
        setState(274);
        expression(0);
        setState(279);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(282);
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
  enterRule(_localctx, 24, RiddleParser::RuleDeclArgs);
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
    setState(319);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(284);
          id();
          setState(285);
          match(RiddleParser::Colon);
          setState(286);
          expression(0);
          setState(287);
          match(RiddleParser::Comma); 
        }
        setState(293);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      setState(298);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RiddleParser::Identifier) {
        setState(294);
        id();
        setState(295);
        match(RiddleParser::Colon);
        setState(296);
        expression(0);
      }
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = false;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(306); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(301);
        id();
        setState(302);
        match(RiddleParser::Colon);
        setState(303);
        expression(0);
        setState(304);
        match(RiddleParser::Comma);
        setState(308); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == RiddleParser::Identifier);
      setState(310);
      match(RiddleParser::Dot);
      setState(311);
      match(RiddleParser::Dot);
      setState(312);
      match(RiddleParser::Dot);
      antlrcpp::downCast<DeclArgsContext *>(_localctx)->isVar = true;
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(315);
      match(RiddleParser::Dot);
      setState(316);
      match(RiddleParser::Dot);
      setState(317);
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
  enterRule(_localctx, 26, RiddleParser::RuleModifierList);
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
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62390272) != 0)) {
      setState(321);
      modifier();
      setState(326);
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
  enterRule(_localctx, 28, RiddleParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case RiddleParser::Static: {
        enterOuterAlt(_localctx, 1);
        setState(327);
        match(RiddleParser::Static);
        break;
      }

      case RiddleParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(328);
        match(RiddleParser::Public);
        break;
      }

      case RiddleParser::Protected: {
        enterOuterAlt(_localctx, 3);
        setState(329);
        match(RiddleParser::Protected);
        break;
      }

      case RiddleParser::Private: {
        enterOuterAlt(_localctx, 4);
        setState(330);
        match(RiddleParser::Private);
        break;
      }

      case RiddleParser::Override: {
        enterOuterAlt(_localctx, 5);
        setState(331);
        match(RiddleParser::Override);
        break;
      }

      case RiddleParser::Extern: {
        enterOuterAlt(_localctx, 6);
        setState(332);
        match(RiddleParser::Extern);

        setState(333);
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
  enterRule(_localctx, 30, RiddleParser::RuleFuncDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(336);
      modifierList();
      setState(337);
      match(RiddleParser::Func);
      setState(338);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(339);
      match(RiddleParser::LeftParen);
      setState(340);
      declArgs();
      setState(341);
      match(RiddleParser::RightParen);
      setState(345);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == RiddleParser::Sub) {
        setState(342);
        match(RiddleParser::Sub);
        setState(343);
        match(RiddleParser::Greater);
        setState(344);
        antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      }
      setState(347);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->body = block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(349);
      modifierList();
      setState(350);
      match(RiddleParser::Func);
      setState(351);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->name = id();
      setState(352);
      match(RiddleParser::LeftParen);
      setState(353);
      declArgs();
      setState(354);
      match(RiddleParser::RightParen);
      setState(355);
      match(RiddleParser::Sub);
      setState(356);
      match(RiddleParser::Greater);
      setState(357);
      antlrcpp::downCast<FuncDeclContext *>(_localctx)->return_type = expression(0);
      setState(358);
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
  enterRule(_localctx, 32, RiddleParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(RiddleParser::If);
    setState(363);
    match(RiddleParser::LeftParen);
    setState(364);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->cond = expression(0);
    setState(365);
    match(RiddleParser::RightParen);
    setState(366);
    antlrcpp::downCast<IfStmtContext *>(_localctx)->then = block();
    setState(369);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(367);
      match(RiddleParser::Else);
      setState(368);
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
  enterRule(_localctx, 34, RiddleParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(RiddleParser::While);
    setState(372);
    match(RiddleParser::LeftParen);
    setState(373);
    antlrcpp::downCast<WhileStmtContext *>(_localctx)->cond = expression(0);
    setState(374);
    match(RiddleParser::RightParen);
    setState(375);
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
  enterRule(_localctx, 36, RiddleParser::RuleForStmt);
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
    setState(377);
    match(RiddleParser::For);
    setState(378);
    match(RiddleParser::LeftParen);
    setState(380);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 44473120202487454) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12658689) != 0)) {
      setState(379);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->init = expression(0);
    }
    setState(382);
    match(RiddleParser::Semi);
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 44473120202487454) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12658689) != 0)) {
      setState(383);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->cond = expression(0);
    }
    setState(386);
    match(RiddleParser::Semi);
    setState(388);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 44473120202487454) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & 12658689) != 0)) {
      setState(387);
      antlrcpp::downCast<ForStmtContext *>(_localctx)->change = expression(0);
    }
    setState(390);
    match(RiddleParser::RightParen);
    setState(391);
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
  enterRule(_localctx, 38, RiddleParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(RiddleParser::Return);
    setState(395);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(394);
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
  enterRule(_localctx, 40, RiddleParser::RuleClassDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(RiddleParser::Class);
    setState(398);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->name = id();
    setState(399);
    antlrcpp::downCast<ClassDeclContext *>(_localctx)->body = block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionDeclContext ------------------------------------------------------------------

RiddleParser::UnionDeclContext::UnionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* RiddleParser::UnionDeclContext::Union() {
  return getToken(RiddleParser::Union, 0);
}

RiddleParser::IdContext* RiddleParser::UnionDeclContext::id() {
  return getRuleContext<RiddleParser::IdContext>(0);
}

RiddleParser::BlockContext* RiddleParser::UnionDeclContext::block() {
  return getRuleContext<RiddleParser::BlockContext>(0);
}


size_t RiddleParser::UnionDeclContext::getRuleIndex() const {
  return RiddleParser::RuleUnionDecl;
}

void RiddleParser::UnionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnionDecl(this);
}

void RiddleParser::UnionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<RiddleParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnionDecl(this);
}


std::any RiddleParser::UnionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<RiddleParserVisitor*>(visitor))
    return parserVisitor->visitUnionDecl(this);
  else
    return visitor->visitChildren(this);
}

RiddleParser::UnionDeclContext* RiddleParser::unionDecl() {
  UnionDeclContext *_localctx = _tracker.createInstance<UnionDeclContext>(_ctx, getState());
  enterRule(_localctx, 42, RiddleParser::RuleUnionDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    match(RiddleParser::Union);
    setState(402);
    antlrcpp::downCast<UnionDeclContext *>(_localctx)->name = id();
    setState(403);
    antlrcpp::downCast<UnionDeclContext *>(_localctx)->body = block();
   
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
  enterRule(_localctx, 44, RiddleParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
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
    case 1: return terminatorSempred(antlrcpp::downCast<TerminatorContext *>(context), predicateIndex);
    case 3: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
    case 1: return precpred(_ctx, 24);
    case 2: return precpred(_ctx, 23);
    case 3: return precpred(_ctx, 18);
    case 4: return precpred(_ctx, 17);
    case 5: return precpred(_ctx, 16);
    case 6: return precpred(_ctx, 15);
    case 7: return precpred(_ctx, 14);
    case 8: return precpred(_ctx, 13);
    case 9: return precpred(_ctx, 12);
    case 10: return precpred(_ctx, 11);
    case 11: return precpred(_ctx, 10);
    case 12: return precpred(_ctx, 9);
    case 13: return precpred(_ctx, 8);
    case 14: return precpred(_ctx, 22);
    case 15: return precpred(_ctx, 21);

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
