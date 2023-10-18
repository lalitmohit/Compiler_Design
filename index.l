%{
#include <stdio.h>
#include "two.tab.h"
extern int yylval;
void yyparse();
int cnt = 0;
%}

%%

"return"    { printf("%s\n", yytext); return RETURN; }
"else"      { printf("%s\n", yytext); return ELSE; }
"false"     { printf("%s\n", yytext); return FALSE; }
"true"      { printf("%s\n", yytext); return TRUE; }
"range"     { printf("%s\n", yytext); return RANGE; }
"def"       { printf("%s\n", yytext); return USER_DEFINED_FUNCTION_DECLARATION; }
"class"     { printf("%s\n", yytext); return USER_DEFINED_CLASS_DECLARATION; }
"if"        { printf("%s\n", yytext); return IF; }
"for"       { printf("%s\n", yytext); return FOR; }
"while"     { printf("%s\n", yytext); return WHILE; }
"break"     { printf("%s\n", yytext); return BREAK; }
"continue"  { printf("%s\n", yytext); return CONTINUE; }
"None"      { printf("%s\n", yytext); return NONE; }
"as"        { printf("%s\n", yytext); return AS; }
"is"        { printf("%s\n", yytext); return IS; }
"not"       { printf("%s\n", yytext); return NOT; }
"in"        { printf("%s\n", yytext); return IN; }

"="         { printf("%s\n", yytext); return EQUAL; }
"=="        { printf("%s\n", yytext); return EQUALEQUAL; }
"!="        { printf("%s\n", yytext); return NOEQUAL; }
">="        { printf("%s\n", yytext); return GREATEREQUAL; }
"<="        { printf("%s\n", yytext); return LESSEQUAL; }
">"         { printf("%s\n", yytext); return GREATER; }
"<"         { printf("%s\n", yytext); return LESSER; }
"%="        { printf("%s\n", yytext); return MODULOEQUAL; }
"-="        { printf("%s\n", yytext); return MINUSEQUAL; }
"+="        { printf("%s\n", yytext); return PLUSEQUAL; }
"*="        { printf("%s\n", yytext); return MULTIEQUAL; }
"/="        { printf("%s\n", yytext); return DIVEQUAL; }
"/"         { printf("%s\n", yytext); return DIVISION; }
"%"         { printf("%s\n", yytext); return MODULO; }
"+"         { printf("%s\n", yytext); return PLUS; }
"-"         { printf("%s\n", yytext); return MINUS; }
"*"         { printf("%s\n", yytext); return MULTIPLY; }
"!"         { printf("%s\n", yytext); return NOT_OPERATOR; }
"&"         { printf("%s\n", yytext); return AND_OPERATOR; }
"|"         { printf("%s\n", yytext); return OR_OPERATOR; }
"^"         { printf("%s\n", yytext); return XOR_OPERATOR; }
"<<="       { printf("%s\n", yytext); return LEFT_SHIFT_EQUAL; }
">>="       { printf("%s\n", yytext); return RIGHT_SHIFT_EQUAL; }

"//".*     { printf("%s\n", yytext); return SINGLE_LINE_COMMENT; }
"/\*"(.)*"\*/" { printf("%s\n", yytext); return MULTI_LINE_COMMENT; }
[0-9]+\.[0-9]+ { printf("%s\n", yytext); return FLOATING_NUMBER; }
[0-9]+         { printf("%s\n", yytext); return INTEGER; }
"0x"[0-9a-fA-F]+ { printf("%s\n", yytext); return HEX_INTEGER; }

\"[^\\\"]*(\\.[^\\\"]*)*\" { printf("%s\n", yytext); return STRING_LITERAL; }
\'[^\\\']\'                { printf("%s\n", yytext); return CHARACTER_LITERAL; }


"Int"     { printf("%s\n", yytext); return INTEGER_TYPE; }
"Float"   { printf("%s\n", yytext); return FLOAT_TYPE; }
"Double"  { printf("%s\n", yytext); return DOUBLE_TYPE; }
"Bool"    { printf("%s\n", yytext); return BOOLEAN_TYPE; }
"String"  { printf("%s\n", yytext); return STRING_TYPE; }
"Character" { printf("%s\n", yytext); return CHARACTER_TYPE; }
"Void"    { printf("%s\n", yytext); return VOID_TYPE; }
"Array"   { printf("%s\n", yytext); return ARRAY_TYPE; }
"Dictionary" { printf("%s\n", yytext); return DICTIONARY_TYPE; }

"guard"   { printf("%s\n", yytext); return GUARD; }
"try"     { printf("%s\n", yytext); return TRY; }
"catch"   { printf("%s\n", yytext); return CATCH; }
"throws"  { printf("%s\n", yytext); return THROWS; }
"do"      { printf("%s\n", yytext); return DO; }

"@IBOutlet" { printf("%s\n", yytext); return IB_OUTLET; }
"@IBAction" { printf("%s\n", yytext); return IB_ACTION; }
"@escaping" { printf("%s\n", yytext); return ESCAPING; }
"@autoclosure" { printf("%s\n", yytext); return AUTOCLOSURE; }
"@discardableResult" { printf("%s\n", yytext); return DISCARDABLE_RESULT; }
"@autoclosure(escaping)" { printf("%s\n", yytext); return AUTOCLOSURE_ESCAPING; }
"@autoclosure(@autoclosure(escaping))" { printf("%s\n", yytext); return AUTOCLOSURE_ESCAPING_NESTED; }

"open"    { printf("%s\n", yytext); return OPEN; }
"fileprivate" { printf("%s\n", yytext); return FILEPRIVATE; }
"internal" { printf("%s\n", yytext); return INTERNAL; }
"public"  { printf("%s\n", yytext); return PUBLIC; }
"private" { printf("%s\n", yytext); return PRIVATE; }
"public(set)" { printf("%s\n", yytext); return PUBLIC_SET; }

"#if" { printf("%s\n", yytext); return PREPROCESSOR_IF; }
"#elseif" { printf("%s\n", yytext); return PREPROCESSOR_ELSEIF; }
"#else" { printf("%s\n", yytext); return PREPROCESSOR_ELSE; }
"#endif" { printf("%s\n", yytext); return PREPROCESSOR_ENDIF; }
"#warning" { printf("%s\n", yytext); return PREPROCESSOR_WARNING; }
"#error" { printf("%s\n", yytext); return PREPROCESSOR_ERROR; }


[_a-zA-Z][_a-zA-Z0-9]* { printf("%s\n", yytext); return IDENTIFIER; }

\n            { printf("%s\n", yytext); return NEWLINE; }

[ \t]+        { /* Ignore whitespace */ }

.             { printf("%s\n", yytext); return *yytext; } /* Return other characters as-is */

%%

int yywrap() 
{ 
 return 1; 
} 






