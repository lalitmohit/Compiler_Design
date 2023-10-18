%{
#include<stdio.h>
int yylex(void);
int yyerror(const char *s);
int flag=1;
extern FILE *yyin;
%}

%start program
%token 



/*** Rules Section ***/
%%
program: headers declaraction_list
;

headers: imports headers
| comment headers
|empty
;

imports: IMPORT_KEY STRING_LITERAL
;

declaraction_list: declaration_list declaration 
| declaration 
;

declaraction : variable_declaration 
| function_declaration | struct_declaration | comment;

struct_declaration : STRUCT_KEY IDENTIFIER structblock;

structblock : LT_CURL_BRACE struct_memebers RT_CURL_BRACE;

struct_memebers : keywords_declaration | function_declaration | struct_declaration;

keywords_declaration : keyword_type IDENTIFIER;

keywords_type : VAR_KEY | LET_KEY;

function_declaration : USER_DEFINED_FUNCTION_DECLARATION IDENTIFIER LT_RND_BRACES typecasting_params RT_RND_BRACES block;

typecasting_params: IDENTIFIER COL_OP datatype;

datatypes : INTEGER_TYPE | FLOAT_TYPE | DOUBLE_TYPE | BOOLEAN_TYPE | STRING_TYPE | CHARACTER_TYPE | VOID_TYPE | ARRAY_TYPE | DICTIONARY_TYPE;

block : LT_CURL_BRACE statements RT_CURL_BRACE;

statements : statements statement | statement;

statement : assignment | conditional | function_call | iterative | comment | return | variable_declaration | function_declaration | break | continue ;

break : BREAK;

continue : CONTINUE;

assignment : keyword_type IDENTIFIER EQUAL literals;

literals : STRING_LITERAL | CHARACTER_LITERALS;

return : RETURN identifier;

identifier : IDENTIFIER | literals | empty;

if_statement : IF condition block | if_statement if_statement | if_statement ELSE block;

condition : expression;

expression: expression operator expression | LT_RND_BRACES expression RT_RND_BRACES | IDENTIFIER | literals | operator IDENTIFIER ;

operator : EQUAL | EQUALEQUAL | NOEQUAL | GREATEREQUAL | LESSEQUAL | GREATER | LESSER | MODULOEQUAL | MINUSEQUAL | PLUSEQUAL | MULTIEQUAL | DIVEQUAL | DIVISION | MODULO | PLUS | MINUS | MULTIPLY | NOT_OPERATOR | AND_OPERATOR | OR_OPERATOR | XOR_OPERATOR | LEFT_SHIFT_EQUAL | RIGHT_SHIFT_EQUAL


