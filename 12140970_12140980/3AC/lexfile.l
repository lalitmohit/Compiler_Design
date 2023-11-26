%{
#include "yaccfile.tab.h"
#include <string.h>
char * split(char* s,char* delimeter);
%}


relop >=|<=|>|<|==|!=
and "&&"|"||"|"|"|"&"|"^"
number [0-9]+

%%

[\n\t ]+	{;}
"end" {return endk;}
"puts" {return putsk;}
"if" {return IF;}
"while" {return WHILE;}
"for" {return FOR;}
"else" {return ELSE;}
"int"|"string"|"char"|"double"|"float" { return TYPE;}
([0-9])*"."([0-9])*   { yylval.tuple.result = strdup(yytext); return identifier; }
[a-z]([a-z]|[0-9])*	{ yylval.tuple.result = strdup(yytext); return identifier;	}
[0-9]+  {yylval.tuple.num= atoi(yytext); return number;}
"!" { yylval.tuple.arg4 =strdup(yytext); return NOT;}
{relop} { yylval.tuple.arg1 =strdup(yytext); return RELOP;}
{and} { yylval.tuple.arg3 =strdup(yytext); return AND;}
 [-+*=/;] {return yytext[0];}
[(){}]               {return yytext[0];}
%%

int yywrap(void)
{
	return 1;
}





