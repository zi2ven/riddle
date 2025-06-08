
// Generated from D:/Code/riddle/RiddleLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RiddleLexer : public antlr4::Lexer {
public:
  enum {
    Var = 1, Val = 2, For = 3, While = 4, Continue = 5, Break = 6, If = 7, 
    Else = 8, Func = 9, Return = 10, Import = 11, Package = 12, Class = 13, 
    True = 14, False = 15, Null = 16, Try = 17, Catch = 18, Extern = 19, 
    Override = 20, Static = 21, Const = 22, Public = 23, Protected = 24, 
    Private = 25, Virtual = 26, Operator = 27, Enum = 28, Semi = 29, Endl = 30, 
    LeftParen = 31, RightParen = 32, LeftBracket = 33, RightBracket = 34, 
    LeftCurly = 35, RightCurly = 36, Colon = 37, Comma = 38, Equal = 39, 
    NotEqual = 40, Assign = 41, Greater = 42, GreaterEqual = 43, Less = 44, 
    LessEqual = 45, LeftShift = 46, RightShift = 47, At = 48, Add = 49, 
    Sub = 50, Star = 51, Div = 52, Mod = 53, Not = 54, And = 55, AndAnd = 56, 
    Or = 57, OrOr = 58, Xor = 59, Dot = 60, DoubleQuotes = 61, Quotes = 62, 
    Tilde = 63, AddAssign = 64, SubAssign = 65, MulAssign = 66, DivAssign = 67, 
    ModAssign = 68, LeftShiftAssign = 69, RightShiftAssign = 70, AndAssign = 71, 
    OrAssign = 72, XorAssign = 73, Identifier = 74, Hexadecimal = 75, Decimal = 76, 
    Octal = 77, Binary = 78, Float = 79, IntegerSequence = 80, HEX_DIGIT = 81, 
    OCTAL_DIGIT = 82, BINARY_DIGIT = 83, DIGIT = 84, STRING = 85, CHAR = 86, 
    LINE_COMMENT = 87, BLOCK_COMMENT = 88, WHITESPACE = 89
  };

  explicit RiddleLexer(antlr4::CharStream *input);

  ~RiddleLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

