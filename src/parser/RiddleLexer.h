
// Generated from D:/Code/riddle/RiddleLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RiddleLexer : public antlr4::Lexer {
public:
  enum {
    Var = 1, Val = 2, For = 3, While = 4, Continue = 5, Break = 6, If = 7, 
    Else = 8, Func = 9, Return = 10, Import = 11, Package = 12, Class = 13, 
    True = 14, False = 15, Null = 16, Try = 17, Catch = 18, Override = 19, 
    Static = 20, Const = 21, Public = 22, Protected = 23, Private = 24, 
    Virtual = 25, Operator = 26, LeftBracket = 27, RightBracket = 28, LeftSquare = 29, 
    RightSquare = 30, LeftCurly = 31, RightCurly = 32, Colon = 33, Semi = 34, 
    Comma = 35, Equal = 36, NotEqual = 37, Assign = 38, Greater = 39, GreaterEqual = 40, 
    Less = 41, LessEqual = 42, LeftShift = 43, RightShift = 44, Add = 45, 
    Sub = 46, Star = 47, Div = 48, Mod = 49, Not = 50, And = 51, Or = 52, 
    Xor = 53, Dot = 54, DoubleQuotes = 55, Quotes = 56, Tilde = 57, AddAssign = 58, 
    SubAssign = 59, MulAssign = 60, DivAssign = 61, ModAssign = 62, LeftShiftAssign = 63, 
    RightShiftAssign = 64, AndAssign = 65, OrAssign = 66, XorAssign = 67, 
    Endl = 68, Identifier = 69, Hexadecimal = 70, Decimal = 71, Octal = 72, 
    Binary = 73, Float = 74, IntegerSequence = 75, HEX_DIGIT = 76, OCTAL_DIGIT = 77, 
    BINARY_DIGIT = 78, DIGIT = 79, STRING = 80, CHAR = 81, LINE_COMMENT = 82, 
    BLOCK_COMMENT = 83, WHITESPACE = 84
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

