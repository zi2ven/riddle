lexer grammar RiddleLexer;
//关键字
Var:'var';  //可变变量
Val:'val';  //不可变变量
For:'for';
While:'while';
Continue:'continue';
Break:'break';
If:'if';
Else:'else';
Fun:'fun'; //函数定义
Return: 'return' ;
Import: 'import' ;
Package: 'package';
Class:  'class';
True:'true';
False:'false';
Null:'null';
Try:'try';
Catch:'catch';
Extern: 'extern';
// 修饰符
Override: 'override';
Static:'static';
Const:'const';
Public: 'public';
Protected: 'protected';
Private: 'private';
Virtual: 'virtual';
Operator: 'operator';
Enum: 'enum';
Union: 'union';
//可见字符
//基本运算符
Semi: ';';

Endl
  : '\r'? '\n' -> channel(HIDDEN)
  ;

LeftParen :     '(' ;
RightParen :    ')' ;
LeftBracket :   '[' ;
RightBracket :  ']' ;
LeftCurly :     '{' ;
RightCurly :    '}' ;
Colon:          ':';
Comma:          ',';
Equal:          '==';
NotEqual:       '!=';
Assign:         '=';
Greater:        '>';
GreaterEqual:   '>=';
Less:           '<';
LessEqual:      '<=';
LeftShift:      '<<';
RightShift:     '>>';
At:             '@';
Add:            '+';
Sub:            '-';
Star:           '*';
Div:            '/';
Mod:            '%';
Not:            '!';
And:            '&';
AndAnd:         '&&';
Or:             '|';
OrOr:           '||';
Xor:            '^';
Dot:            '.';
DoubleQuotes:   '"';
Quotes:         '\'';
Tilde:          '~';
AddAssign:      '+=';
SubAssign:      '-=';
MulAssign:      '*=';
DivAssign:      '/=';
ModAssign:      '%=';
LeftShiftAssign: '<<=';
RightShiftAssign: '>>=';
AndAssign:      '&=';
OrAssign:       '|=';
XorAssign:      '^=';

//标识符
Identifier: [A-Za-z_] [A-Za-z_0-9]*;
//十六进制
Hexadecimal: '0x' [1-9A-F] HEX_DIGIT*;
//十进制
Decimal: '0' | '-'? [1-9] DIGIT*;
//八进制
Octal: '0' [1-7] OCTAL_DIGIT*;
//二进制
Binary: '0b' '1' BINARY_DIGIT*;
Float: Decimal Dot IntegerSequence;

IntegerSequence: DIGIT+;
HEX_DIGIT: [0-9A-F];
OCTAL_DIGIT: [0-7];
BINARY_DIGIT: [0-1];
DIGIT: [0-9];
STRING
    : '"' (ESC | ~["\\\r\n])* '"'
    ;

CHAR
    : '\'' (ESC | ~["\\\r\n]) '\''
    ;

fragment ESC
    : '\\' (["\\/] | [A-Za-z])
    ;

LINE_COMMENT : '//' ~[\r\n]* -> channel(HIDDEN) ;
BLOCK_COMMENT : '/*' .*? '*/' -> channel(HIDDEN) ;
WHITESPACE : [ \t]+ -> channel(HIDDEN) ;