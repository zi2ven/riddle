parser grammar RiddleParser;

options {
    tokenVocab=RiddleLexer;
}

@header{
#include "RiddleLexer.h"
}

@parser::members {
    /** 只看隐藏信道，判断当前 token 左边最近一次出现的是 Endl 还是 EOF */
    bool lineTerminatorAhead() {
        ssize_t i = 1;  // 从当前token的前一个开始
        auto* tokens = dynamic_cast<antlr4::BufferedTokenStream*>(_input);

        // 获取所有隐藏信道token
        std::vector<antlr4::Token*> hidden = tokens->getHiddenTokensToLeft(_input->index());
        for (auto idx : hidden) {
            if (idx->getType() == RiddleLexer::Endl) {
              return true;
            }
        }
        return false;
    }
}

program
    : expressionEnd+ EOF
    ;

terminator
    : Semi
    | EOF
    | { lineTerminatorAhead() }?
    ;

expressionEnd
    : expression terminator
    | Endl
    ;

expression
    : statement                                                                         #statementExpr
    | left=expression Colon Colon right=expression                                      #scopeAccess
    | left=expression Dot right=expression                                              #memberAccess
    | obj=expression LeftParen (expression (Comma expression)*)? RightParen             #callExpr
    | obj=expression Star                                                               #pointerTo
    | Star obj=expression                                                               #loadExpr
    | op=(Not | Add | Sub | Tilde) value=expression                                     #unaryOp
    | left=expression op=(Star | Div | Mod) right=expression                            #mulOp
    | left=expression op=(Add | Sub) right=expression                                   #addOp
    | left=expression op=(LeftShift | RightShift) right=expression                      #shiftOp
    | left=expression op=(Less | LessEqual | Greater | GreaterEqual) right=expression   #relOp
    | left=expression op=(Equal | NotEqual) right=expression                            #eqOp
    | left=expression op=And right=expression                                              #bitAnd
    | left=expression op=Xor right=expression                                              #bitXor
    | left=expression op=Or right=expression                                               #bitOr
    | left=expression op=AndAnd right=expression                                          #logicAnd
    | left=expression op=OrOr right=expression                                            #logicOr
    | left=expression op=(Assign | AddAssign | SubAssign | MulAssign 
        | DivAssign | ModAssign | LeftShiftAssign | RightShiftAssign 
        | AndAssign | XorAssign | OrAssign) right=expression                            #compoundAssignOp
    | Decimal                                                                           #integer
    | Float                                                                             #float
    | (True | False)                                                                    #boolean
    | STRING                                                                            #string
    | CHAR                                                                              #char
    | id                                                                                #object
    | LeftParen value=expression RightParen                                             #parenExpr
    ;

statement
    : varDecl
    | funcDecl
    | classDecl
    | initList
    | block
    | returnStmt
    | packStmt
    | ifStmt
    | whileStmt
    | forStmt
    | annotation
    | enumStmt
    | unionDecl
    ;

enumValue returns [bool hasType = true]
    : id {$hasType = false;}
    | id LeftParen RightParen
    | id LeftParen expression (Comma expression)* RightParen
    ;

enumStmt
    : Enum name=id LeftCurly (enumValue (Comma enumValue)*)? Comma? RightCurly
    ;

annotation
    : At id (LeftParen expression (Comma expression)* RightParen)? Semi? stmt=statement
    ;

packStmt
    : Package id (Dot id)*
    ;

varDecl
    : (modifier)* varType=(Var | Val) name=id Colon type=expression Assign value=expression
    | (modifier)* varType=(Var | Val) name=id Assign value=expression
    | (modifier)* varType=(Var | Val) name=id Colon type=expression
    ;

block
    : LeftCurly expressionEnd* RightCurly
    ;

initList
    : LeftCurly (expression (Comma expression)*)? RightCurly
    ;

declArgs returns [bool isVar = false]
    : (id Colon expression Comma)* (id Colon expression)? {$isVar=false;}
    | (id Colon expression Comma)+ Dot Dot Dot {$isVar=true;}
    | Dot Dot Dot {$isVar=true;}
    ;

modifierList
    : modifier*
    ;

modifier
    : Static
    | Public
    | Protected
    | Private
    | Override
    | Extern (STRING)
    ;

funcDecl
    : modifierList Func name=id LeftParen declArgs RightParen (Sub Greater return_type=expression)? body=block
    | modifierList Func name=id LeftParen declArgs RightParen Sub Greater return_type=expression Semi
    ;

ifStmt
    : If LeftParen cond=expression RightParen then=block (Else else=block)?
    ;

whileStmt
    : While LeftParen cond=expression RightParen body=block
    ;

forStmt
    : For LeftParen (init=expression)? Semi (cond=expression)? Semi (change=expression)? RightParen body=block
    ;

returnStmt
    : Return (result=expression)?
    ;

classDecl
    : Class name=id body=block
    ;

unionDecl
    : Union name=id body = block
    ;

id
    : Identifier
    ;