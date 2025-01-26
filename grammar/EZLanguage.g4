grammar EZLanguage;

program: (statement | classDeclaration | packageDeclaration | tryCatchStatement | runStatement)* EOF;

statement: envDeclaration | includeStatement | friendStatement | expressionStatement | functionCall | variableDeclaration | controlFlowStatement | foreachStatement;

envDeclaration: 'doing' IDENTIFIER ';';
includeStatement: 'include' IDENTIFIER ';';
friendStatement: 'friend' IDENTIFIER ':' IDENTIFIER 'as' IDENTIFIER ';';

packageDeclaration: 'package' IDENTIFIER ':' (classDeclaration)*;

classDeclaration: accessModifier? 'class' IDENTIFIER '(' ')' ('extends' IDENTIFIER)? ('implements' IDENTIFIER (',' IDENTIFIER)*)? '{' (variableDeclaration | functionDeclaration)* '}';

variableDeclaration: accessModifier? type IDENTIFIER ('=' expression)? ';';

functionDeclaration: accessModifier? type IDENTIFIER '(' parameterList? ')' '{' (statement)* '}';
parameterList: parameter (',' parameter)*;
parameter: type IDENTIFIER;

functionCall: IDENTIFIER '(' argumentList? ')' ';';
argumentList: expression (',' expression)*;

controlFlowStatement: ifStatement | loopStatement;
ifStatement: 'if' '(' expression ')' '{' statement* '}' ('elif' '(' expression ')' '{' statement* '}')* ('else' '{' statement* '}')?;
loopStatement: ('while' | 'for') '(' expression? ')' '{' statement* '}';
foreachStatement: 'for' IDENTIFIER 'in' IDENTIFIER '{' statement* '}';

tryCatchStatement: 'try' '{' statement* '}' ('catch' '(' IDENTIFIER ')' '{' statement* '}')? ('finally' '{' statement* '}')?;

runStatement: 'run' IDENTIFIER ':' STRING ';';

expressionStatement: expression ';';
expression: primaryExpression (OPERATOR primaryExpression)*;
primaryExpression: IDENTIFIER | literal | functionCall | '(' expression ')';
literal: STRING | NUMBER | BOOLEAN;

accessModifier: 'public' | 'private' | 'protected';

type: baseType ('[]')?;
baseType: 'int' | 'float' | 'boolean' | 'string' | 'void' | mapType;
mapType: 'map' '<' baseType ',' baseType '>';

OPERATOR: '+' | '-' | '*' | '/' | '==' | '!=' | '>' | '<' | '>=' | '<=' | '&&' | '||' | '!' | '&' | '|' | '^' | '~' | '+=' | '-=' | '*=' | '/=';

IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;
STRING: '"' .*? '"';
NUMBER: [0-9]+('.'[0-9]+)?;
BOOLEAN: 'true' | 'false';
WS: [ \t\r\n]+ -> skip;
