
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
    Private = 25, Virtual = 26, Operator = 27, Enum = 28, Union = 29, Semi = 30, 
    Endl = 31, LeftParen = 32, RightParen = 33, LeftBracket = 34, RightBracket = 35, 
    LeftCurly = 36, RightCurly = 37, Colon = 38, Comma = 39, Equal = 40, 
    NotEqual = 41, Assign = 42, Greater = 43, GreaterEqual = 44, Less = 45, 
    LessEqual = 46, LeftShift = 47, RightShift = 48, At = 49, Add = 50, 
    Sub = 51, Star = 52, Div = 53, Mod = 54, Not = 55, And = 56, AndAnd = 57, 
    Or = 58, OrOr = 59, Xor = 60, Dot = 61, DoubleQuotes = 62, Quotes = 63, 
    Tilde = 64, AddAssign = 65, SubAssign = 66, MulAssign = 67, DivAssign = 68, 
    ModAssign = 69, LeftShiftAssign = 70, RightShiftAssign = 71, AndAssign = 72, 
    OrAssign = 73, XorAssign = 74, Identifier = 75, Hexadecimal = 76, Decimal = 77, 
    Octal = 78, Binary = 79, Float = 80, IntegerSequence = 81, HEX_DIGIT = 82, 
    OCTAL_DIGIT = 83, BINARY_DIGIT = 84, DIGIT = 85, STRING = 86, CHAR = 87, 
    LINE_COMMENT = 88, BLOCK_COMMENT = 89, WHITESPACE = 90
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

