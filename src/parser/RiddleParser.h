
// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  RiddleParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleExpressionEnd = 1, RuleExpression = 2, RuleStatement = 3, 
    RulePackStmt = 4, RuleVarDecl = 5, RuleBlock = 6, RuleInitList = 7, 
    RuleDeclArgs = 8, RuleModifier = 9, RuleFuncDecl = 10, RuleIfStmt = 11, 
    RuleWhileStmt = 12, RuleForStmt = 13, RuleReturnStmt = 14, RuleClassDecl = 15, 
    RuleId = 16
  };

  explicit RiddleParser(antlr4::TokenStream *input);

  RiddleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RiddleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class ExpressionEndContext;
  class ExpressionContext;
  class StatementContext;
  class PackStmtContext;
  class VarDeclContext;
  class BlockContext;
  class InitListContext;
  class DeclArgsContext;
  class ModifierContext;
  class FuncDeclContext;
  class IfStmtContext;
  class WhileStmtContext;
  class ForStmtContext;
  class ReturnStmtContext;
  class ClassDeclContext;
  class IdContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ExpressionEndContext *> expressionEnd();
    ExpressionEndContext* expressionEnd(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ExpressionEndContext : public antlr4::ParserRuleContext {
  public:
    ExpressionEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Endl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionEndContext* expressionEnd();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LoadExprContext : public ExpressionContext {
  public:
    LoadExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *obj = nullptr;
    antlr4::tree::TerminalNode *Star();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberAccessContext : public ExpressionContext {
  public:
    MemberAccessContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Dot();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqOpContext : public ExpressionContext {
  public:
    EqOpContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BracketExprContext : public ExpressionContext {
  public:
    BracketExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *value = nullptr;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrContext : public ExpressionContext {
  public:
    BitOrContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Or();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicOrContext : public ExpressionContext {
  public:
    LogicOrContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddOpContext : public ExpressionContext {
  public:
    AddOpContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Sub();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompoundAssignOpContext : public ExpressionContext {
  public:
    CompoundAssignOpContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *AddAssign();
    antlr4::tree::TerminalNode *SubAssign();
    antlr4::tree::TerminalNode *MulAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryOpContext : public ExpressionContext {
  public:
    UnaryOpContext(ExpressionContext *ctx);

    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *value = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Sub();
    antlr4::tree::TerminalNode *Tilde();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerContext : public ExpressionContext {
  public:
    IntegerContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Decimal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FloatContext : public ExpressionContext {
  public:
    FloatContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Float();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ScopeAccessContext : public ExpressionContext {
  public:
    ScopeAccessContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelOpContext : public ExpressionContext {
  public:
    RelOpContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *GreaterEqual();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PointerToContext : public ExpressionContext {
  public:
    PointerToContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *obj = nullptr;
    antlr4::tree::TerminalNode *Star();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitAndContext : public ExpressionContext {
  public:
    BitAndContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *And();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicAndContext : public ExpressionContext {
  public:
    LogicAndContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanContext : public ExpressionContext {
  public:
    BooleanContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulOpContext : public ExpressionContext {
  public:
    MulOpContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitXorContext : public ExpressionContext {
  public:
    BitXorContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *Xor();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StatementExprContext : public ExpressionContext {
  public:
    StatementExprContext(ExpressionContext *ctx);

    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CallExprContext : public ExpressionContext {
  public:
    CallExprContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *obj = nullptr;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ObjectContext : public ExpressionContext {
  public:
    ObjectContext(ExpressionContext *ctx);

    IdContext *id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShiftOpContext : public ExpressionContext {
  public:
    ShiftOpContext(ExpressionContext *ctx);

    RiddleParser::ExpressionContext *left = nullptr;
    antlr4::Token *op = nullptr;
    RiddleParser::ExpressionContext *right = nullptr;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *LeftShift();
    antlr4::tree::TerminalNode *RightShift();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclContext *varDecl();
    FuncDeclContext *funcDecl();
    ClassDeclContext *classDecl();
    InitListContext *initList();
    BlockContext *block();
    ReturnStmtContext *returnStmt();
    PackStmtContext *packStmt();
    IfStmtContext *ifStmt();
    WhileStmtContext *whileStmt();
    ForStmtContext *forStmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  PackStmtContext : public antlr4::ParserRuleContext {
  public:
    PackStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Package();
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackStmtContext* packStmt();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *varType = nullptr;
    RiddleParser::IdContext *name = nullptr;
    RiddleParser::ExpressionContext *type = nullptr;
    RiddleParser::ExpressionContext *value = nullptr;
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    IdContext *id();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Val();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    std::vector<ExpressionEndContext *> expressionEnd();
    ExpressionEndContext* expressionEnd(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  InitListContext : public antlr4::ParserRuleContext {
  public:
    InitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitListContext* initList();

  class  DeclArgsContext : public antlr4::ParserRuleContext {
  public:
    bool isVar = false;
    DeclArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdContext *> id();
    IdContext* id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclArgsContext* declArgs();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Override();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

  class  FuncDeclContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::IdContext *name = nullptr;
    RiddleParser::ExpressionContext *return_type = nullptr;
    RiddleParser::BlockContext *body = nullptr;
    FuncDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Func();
    antlr4::tree::TerminalNode *LeftBracket();
    DeclArgsContext *declArgs();
    antlr4::tree::TerminalNode *RightBracket();
    IdContext *id();
    BlockContext *block();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    antlr4::tree::TerminalNode *Sub();
    antlr4::tree::TerminalNode *Greater();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDeclContext* funcDecl();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::ExpressionContext *cond = nullptr;
    RiddleParser::BlockContext *then = nullptr;
    RiddleParser::BlockContext *else_ = nullptr;
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::ExpressionContext *cond = nullptr;
    RiddleParser::BlockContext *body = nullptr;
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ExpressionContext *expression();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::ExpressionContext *init = nullptr;
    RiddleParser::ExpressionContext *cond = nullptr;
    RiddleParser::ExpressionContext *change = nullptr;
    RiddleParser::BlockContext *body = nullptr;
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *LeftBracket();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    antlr4::tree::TerminalNode *RightBracket();
    BlockContext *block();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::ExpressionContext *result = nullptr;
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  ClassDeclContext : public antlr4::ParserRuleContext {
  public:
    RiddleParser::IdContext *name = nullptr;
    RiddleParser::BlockContext *body = nullptr;
    ClassDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    IdContext *id();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDeclContext* classDecl();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdContext* id();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

