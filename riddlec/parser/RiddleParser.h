
#include "RiddleLexer.h"


// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RiddleParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleTerminator = 1, RuleStatementEnd = 2, RuleStatement = 3, 
    RuleExpression = 4, RuleLiteral = 5
  };

  explicit RiddleParser(antlr4::TokenStream *input);

  RiddleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RiddleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


      bool lineTerminatorAhead() {
          ssize_t i = 1;  // 从当前token的前一个开始
          auto* tokens = dynamic_cast<antlr4::BufferedTokenStream*>(_input);

          std::vector<antlr4::Token*> hidden = tokens->getHiddenTokensToLeft(_input->index());
          for (auto idx : hidden) {
              if (idx->getType() == RiddleLexer::Endl) {
                return true;
              }
          }
          return false;
      }


  class ProgramContext;
  class TerminatorContext;
  class StatementEndContext;
  class StatementContext;
  class ExpressionContext;
  class LiteralContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementEndContext *> statementEnd();
    StatementEndContext* statementEnd(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  TerminatorContext : public antlr4::ParserRuleContext {
  public:
    TerminatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TerminatorContext* terminator();

  class  StatementEndContext : public antlr4::ParserRuleContext {
  public:
    StatementEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    TerminatorContext *terminator();
    antlr4::tree::TerminalNode *Endl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementEndContext* statementEnd();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LiteralContext() = default;
    void copyFrom(LiteralContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatLitContext : public LiteralContext {
  public:
    FloatLitContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *Float();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntLitContext : public LiteralContext {
  public:
    IntLitContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *Decimal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool terminatorSempred(TerminatorContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

