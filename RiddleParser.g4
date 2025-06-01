parser grammar RiddleParser;

options {
    tokenVocab=RiddleLexer;
}

@Header{}

@parserFile::members {}


program
    : expressionEnd*
    ;

expressionEnd
    : expression Semi
    | Semi
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

modifier
    : Static
    | Public
    | Protected
    | Private
    | Override
    | Extern (STRING)
    ;

funcDecl
    : (modifier)* Func name=id LeftParen declArgs RightParen (Sub Greater return_type=expression)? body=block
    | (modifier)* Func name=id LeftParen declArgs RightParen Sub Greater return_type=expression Semi
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

id
    : Identifier
    ;