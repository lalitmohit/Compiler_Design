%{
#include<stdio.h>
int yylex(void);
int yyerror(const char *s);
int flag=1;
extern FILE *yyin;
%}


%start program
%token IMPORT_KEY STRUCT_KEY VAR_KEY LET_KEY RETURN ELSE USER_DEFINED_FUNCTION_DECLARATION IF BREAK CONTINUE INTEGER_TYPE FLOAT_TYPE DOUBLE_TYPE BOOLEAN_TYPE STRING_TYPE CHARACTER_TYPE VOID_TYPE ARRAY_TYPE DICTIONARY_TYPE LT_CURL_BRACE RT_CURL_BRACE COL_OP 
%token STRING_LITERAL CASE CHARACTER_LITERALS IDENTIFIER LT_RND_BRACES
%token SINGLE_LINE_COMMENT MULTI_LINE_COMMENT EQUAL RT_RND_BRACES
%token EQUALEQUAL NOEQUAL GREATEREQUAL LESSEQUAL GREATER LESSER MODULOEQUAL MINUSEQUAL WHILE_KEY
%token PLUSEQUAL MULTIEQUAL DIVEQUAL DIVISION MODULO PLUS MINUS MULTIPLY NOT_OPERATOR AND_OPERATOR OR_OPERATOR IN_KEY
%token XOR_OPERATOR LEFT_SHIFT_EQUAL RIGHT_SHIFT_EQUAL SWITCH DEFAULT FOR_KEY

/*** Rules Section ***/
%%
program: headers declaration_list
;

headers: imports headers
| comment headers
| empty
;

imports: IMPORT_KEY STRING_LITERAL
;

declaration_list: declaration_list declaration 
| declaration 
;

declaration : variable_declaration 
| function_declaration | struct_declaration | comment;

struct_declaration : STRUCT_KEY IDENTIFIER structblock;

structblock : LT_CURL_BRACE struct_memebers RT_CURL_BRACE;

struct_memebers : keywords_declaration | function_declaration | struct_declaration;

keywords_declaration : keywords_type IDENTIFIER;

keywords_type : VAR_KEY | LET_KEY;

function_declaration : USER_DEFINED_FUNCTION_DECLARATION IDENTIFIER LT_RND_BRACES typecasting_params RT_RND_BRACES block;

typecasting_params: IDENTIFIER COL_OP datatypes;

datatypes : INTEGER_TYPE | FLOAT_TYPE | DOUBLE_TYPE | BOOLEAN_TYPE | STRING_TYPE | CHARACTER_TYPE | VOID_TYPE | ARRAY_TYPE | DICTIONARY_TYPE;

block : LT_CURL_BRACE statements RT_CURL_BRACE;

statements : statements statement | statement;

statement : assignment | conditional | function_call | iterative | comment | return | variable_declaration | function_declaration | break | continue ;

variable_declaration: keywords_type IDENTIFIER ;

iterative: forloops | whileloops ;

forloops: FOR_KEY IDENTIFIER IN_KEY identifier block

whileloops: WHILE_KEY condition block

function_call: IDENTIFIER LT_RND_BRACES RT_RND_BRACES

break : BREAK;

continue : CONTINUE;

comment: SINGLE_LINE_COMMENT | MULTI_LINE_COMMENT;

assignment : keywords_type IDENTIFIER EQUAL literals;


return : RETURN identifier;

identifier : IDENTIFIER | literals | empty;

conditional:if_statement|switchstatement;

if_statement : IF condition block | if_statement if_statement | if_statement ELSE block;

condition : expression;

expression: expression operator expression | LT_RND_BRACES expression RT_RND_BRACES | IDENTIFIER | literals | operator IDENTIFIER ;

operator : EQUAL | EQUALEQUAL | NOEQUAL | GREATEREQUAL | LESSEQUAL | GREATER | LESSER | MODULOEQUAL | MINUSEQUAL | PLUSEQUAL | MULTIEQUAL | DIVEQUAL | DIVISION | MODULO | PLUS | MINUS | MULTIPLY | NOT_OPERATOR | AND_OPERATOR | OR_OPERATOR | XOR_OPERATOR | LEFT_SHIFT_EQUAL | RIGHT_SHIFT_EQUAL

switchstatement: SWITCH IDENTIFIER switchblock 
;

switchblock: LT_CURL_BRACE caselist RT_CURL_BRACE
;

caselist: caselist case
| case
;

case: CASE literals COL_OP statements
| DEFAULT COL_OP statements
;

literals : STRING_LITERAL | CHARACTER_LITERALS;

empty: ;
%%

void main() 
{ 
  FILE *fo;
  fo=fopen("input.txt","r");
  yyin=fo;
  //printf("\nEnter:\n"); 
  yyparse(); 
  if(flag) 
  	printf("\nValid\n"); 
}   
int yyerror(const char *msg) 
{ 
   extern int yylineno;
   printf("\nInvalid\n LN: %d %s\n",yylineno,msg); 
   flag=0;
   return 0; 
} 