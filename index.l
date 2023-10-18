%option yylineno
%{
    #include<stdio.h>
    #include "index.tab.h"
%}

%%

"import"    { printf("%s\n", yytext); return IMPORT_KEY; }
"struct"    { printf("%s\n", yytext); return STRUCT_KEY; }
"var"       { printf("%s\n", yytext); return VAR_KEY; }
"let"       { printf("%s\n", yytext); return LET_KEY; }
"return"    { printf("%s\n", yytext); return RETURN; }
"func"       { printf("%s\n", yytext); return USER_DEFINED_FUNCTION_DECLARATION; }
"if"        { printf("%s\n", yytext); return IF; }
"else"        { printf("%s\n", yytext); return ELSE; }
"switch"     { printf("%s\n", yytext); return SWITCH; }
"case"         {printf("%s\n", yytext); return CASE; }
"default"       { printf("%s\n",yytext); return DEFAULT; }
"for"       { printf("%s\n", yytext); return FOR_KEY; }
"while"     { printf("%s\n", yytext); return WHILE_KEY; }
"break"     { printf("%s\n", yytext); return BREAK; }
"continue"  { printf("%s\n", yytext); return CONTINUE; }



"Int"     { printf("%s\n", yytext); return INTEGER_TYPE; }
"Float"   { printf("%s\n", yytext); return FLOAT_TYPE; }
"Double"  { printf("%s\n", yytext); return DOUBLE_TYPE; }
"Bool"    { printf("%s\n", yytext); return BOOLEAN_TYPE; }
"String"  { printf("%s\n", yytext); return STRING_TYPE; }
"Character" { printf("%s\n", yytext); return CHARACTER_TYPE; }
"Void"    { printf("%s\n", yytext); return VOID_TYPE; }
"Array"   { printf("%s\n", yytext); return ARRAY_TYPE; }
"Dictionary" { printf("%s\n", yytext); return DICTIONARY_TYPE; }

[0-9]+                          { printf("%s\n",yytext); return INT_LITERAL; }
\"([^\"]*)\"            { printf("%s\n", yytext); return STRING_LITERAL; }
\'[^\\\']\'                { printf("%s\n", yytext); return CHARACTER_LITERAL; }

[_a-zA-Z][_a-zA-Z0-9]* { printf("%s\n", yytext); return IDENTIFIER; }

"<<="       { printf("%s\n", yytext); return LEFT_SHIFT_EQUAL; }
">>="       { printf("%s\n", yytext); return RIGHT_SHIFT_EQUAL; }
"=="        { printf("%s\n", yytext); return EQUALEQUAL; }
"!="        { printf("%s\n", yytext); return NOEQUAL; }
">="        { printf("%s\n", yytext); return GREATEREQUAL; }
"<="        { printf("%s\n", yytext); return LESSEQUAL; }
"%="        { printf("%s\n", yytext); return MODULOEQUAL; }
"-="        { printf("%s\n", yytext); return MINUSEQUAL; }
"+="        { printf("%s\n", yytext); return PLUSEQUAL; }
"*="        { printf("%s\n", yytext); return MULTIEQUAL; }
"/="        { printf("%s\n", yytext); return DIVEQUAL; }
"/"         { printf("%s\n", yytext); return DIVISION; }
">"         { printf("%s\n", yytext); return GREATER; }
"<"         { printf("%s\n", yytext); return LESSER; }
"="         { printf("%s\n", yytext); return EQUAL; }
"%"         { printf("%s\n", yytext); return MODULO; }
"+"         { printf("%s\n", yytext); return PLUS; }
"-"         { printf("%s\n", yytext); return MINUS; }
"*"         { printf("%s\n", yytext); return MULTIPLY; }
"!"         { printf("%s\n", yytext); return NOT_OPERATOR; }
"&"         { printf("%s\n", yytext); return AND_OPERATOR; }
"|"         { printf("%s\n", yytext); return OR_OPERATOR; }
"^"         { printf("%s\n", yytext); return XOR_OPERATOR; }
"{"         { printf("%s\n", yytext); return LT_CURL_BRACE; }
"}"         { printf("%s\n", yytext); return RT_CURL_BRACE; }
"("         { printf("%s\n", yytext); return LT_RND_BRACES; }
")"         { printf("%s\n", yytext); return RT_RND_BRACES; }
":"       { printf("%s\n", yytext); return COL_OP; }
";"       { printf("%s\n", yytext); return ';'; }


"//".*     { printf("%s\n", yytext); return SINGLE_LINE_COMMENT; }
"/\*"(.)*"\*/" { printf("%s\n", yytext); return MULTI_LINE_COMMENT; }

[ \t\n]+        { /* Ignore whitespace */ }

.             { printf("%s\n", yytext); } /* Return other characters as-is */

%%

int yywrap() 
{ 
 return 1; 
} 






