
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
    Private = 25, Virtual = 26, Operator = 27, Semi = 28, LeftParen = 29, 
    RightParen = 30, LeftBracket = 31, RightBracket = 32, LeftCurly = 33, 
    RightCurly = 34, Colon = 35, Comma = 36, Equal = 37, NotEqual = 38, 
    Assign = 39, Greater = 40, GreaterEqual = 41, Less = 42, LessEqual = 43, 
    LeftShift = 44, RightShift = 45, Add = 46, Sub = 47, Star = 48, Div = 49, 
    Mod = 50, Not = 51, And = 52, AndAnd = 53, Or = 54, OrOr = 55, Xor = 56, 
    Dot = 57, DoubleQuotes = 58, Quotes = 59, Tilde = 60, AddAssign = 61, 
    SubAssign = 62, MulAssign = 63, DivAssign = 64, ModAssign = 65, LeftShiftAssign = 66, 
    RightShiftAssign = 67, AndAssign = 68, OrAssign = 69, XorAssign = 70, 
    Endl = 71, Identifier = 72, Hexadecimal = 73, Decimal = 74, Octal = 75, 
    Binary = 76, Float = 77, IntegerSequence = 78, HEX_DIGIT = 79, OCTAL_DIGIT = 80, 
    BINARY_DIGIT = 81, DIGIT = 82, STRING = 83, CHAR = 84, LINE_COMMENT = 85, 
    BLOCK_COMMENT = 86, WHITESPACE = 87
  };

  explicit RiddleLexer(antlr4::CharStream *input);

  ~RiddleLexer() override;


      /** 判断前一个可见 token 是否允许在行尾插入分号 */
      bool shouldImplicitSemi() {
          // 上一个已 emit 的 token
          antlr4::Token *prev = _lastToken;
          if (prev == nullptr) return false;

          switch (prev->getType()) {
              case RiddleLexer::Identifier:
              case RiddleLexer::Decimal:
              case RiddleLexer::STRING:
              case RiddleLexer::CHAR:
              case RiddleLexer::Return:
              case RiddleLexer::RightParen:
              case RiddleLexer::RightBracket:
              case RiddleLexer::RightCurly:
                  return true;
              default:
                  return false;
          }
      }

      /** 记录最后一个非隐藏信道 token，用来做上面的判断 */
      antlr4::Token *_lastToken = nullptr;

      antlr4::Token *emit() override {
          antlr4::Token *t = Lexer::emit();
          if (t->getChannel() == antlr4::Token::DEFAULT_CHANNEL) {
              _lastToken = t;
          }
          return t;
      }


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
  bool SemiSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

