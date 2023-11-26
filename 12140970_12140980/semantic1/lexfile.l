%{
#include "yaccfile.tab.h"
%}

number          [0-9]
letter          [a-zA-Z]
single_operators    [+*/%^&.=-]
%option noyywrap
%option yylineno

%%
\/\/(.)*                            {
                                    }
"/*"                                { multiline_comment(); }
"#include"[ ]*"<"(_|{letter})({letter}|{number}|_)*".h>" {  
                                        trace("Header File");
                                    }
[\n]                                {
                                    }
"end"                      {trace("endk");}
\"[^"\n]*["\n]                      { 
                                        if(yytext[yyleng-1]!='"'){
                                            yyerror("String is unclosed\n");
                                        }
                                        trace("CONSTANT_STRING");
                                        strcpy(yylval.char_pointer, yytext);
                                        return CONSTANT_STRING;
                                    }


for                                 { 
                                        trace("FOR");
                                        return FOR;
                                    }
while                               { 
                                        trace("WHILE");
                                        return WHILE;
                                    }
do                                  { 
                                        trace("DO");
                                        return DO;
                                    }
if                                  { 
                                        trace("IF");
                                        return IF;
                                      
                                    }
else                                { 
                                        trace("ELSE");
                                        return ELSE;
                                    }

return                              { 
                                        trace("RETURN");
                                        return RETURN;
                                    }
"def"        {trace("defk");}
                                                                                                            
[(]                                 { 
                                        trace("(");
                                        return *yytext;
                                    }
[)]                                 { 
                                        trace(")");
                                        return *yytext;
                                    }
[\[]                                { 
                                        trace("[");
                                        return *yytext;
                                    }
[\]]                                { 
                                        trace("]");
                                        return *yytext;
                                    }
[,]                                 { 
                                        trace(",");
                                        return *yytext;
                                    } 

[\t ]                               {}

[;]                                 { 
                                        trace(";");
                                        return *yytext;
                                    }

\'.\'                               { 
                                        trace("CONSTANT_CHAR"); 
                                        strcpy(yylval.char_pointer, yytext);
                                        return CONSTANT_CHAR;
                                    }

{number}+(\.{number}+)?e{number}+   { 
                                        trace("CONSTANT_FLOAT"); 
                                        strcpy(yylval.char_pointer, yytext);
                                        return CONSTANT_FLOAT;
                                    } 

{number}+\.{number}+                { 
                                        trace("CONSTANT_FLOAT"); 
                                        strcpy(yylval.char_pointer, yytext);
                                        return CONSTANT_FLOAT;
                                    }                                             

{number}+                           { 
                                        trace("CONSTANT_INTEGER"); 
                                        strcpy(yylval.char_pointer, yytext);
                                        return CONSTANT_INTEGER;
                                    }    

(_|{letter})({letter}|{number}|_)*  { 
                                        trace("IDENTIFIER");
                                        strcpy(yylval.char_pointer, yytext);
                                        return IDENTIFIER;
                                    }

{single_operators}                  { 
                                        trace("SINGLE OPERATOR"); 
                                        return *yytext;
                                    }

"=="                                { 
                                        trace("=="); 
                                        return DOUBLE_EQUAL;
                                    }
"!="                                { 
                                        trace("!="); 
                                        return NOT_EQUAL;
                                    }
"<"                                 { 
                                        trace("<"); 
                                        return LESSER_THAN;
                                    }
">"                                 { 
                                        trace(">"); 
                                        return GREATER_THAN;
                                    }
"<="                                 { 
                                        trace("<="); 
                                        return LESSER_EQUAL;
                                    }

"+="                                { 
                                        trace("+="); 
                                        return ADD_ASSIGN;
                                    }

"-="                                { 
                                        trace("-="); 
                                        return SUB_ASSIGN;
                                    }

"*="                                { 
                                        trace("*="); 
                                        return MUL_ASSIGN;
                                    }
                                    
"/="                                { 
                                        trace("/="); 
                                        return DIV_ASSIGN;
                                    }
"%="					            { 
                                        trace("%="); 
                                        return MOD_ASSIGN;
                                    }

">>="					            { 
                                        trace(">>="); 
                                        return RIGHT_ASSIGN;
                                    }
"<<="					            { 
                                        trace("<<="); 
                                        return LEFT_ASSIGN;
                                    }

"&="					            { 
                                        trace("&="); 
                                        return AND_ASSIGN;
                                    }
"||"                                { 
                                        trace("||"); 
                                        return LOGIC_OR;
                                    }
"!"                                 { 
                                        trace("!"); 
                                        return NOT;
                                    }
"++"                                { 
                                        trace("+="); 
                                        return INCREMENT_OPERATOR;
                                    }  
"--"                                { 
                                        trace("--"); 
                                        return DECREMENT_OPERATOR;
                                    }
"^="					            { 
                                        trace("^="); 
                                        return XOR_ASSIGN;
                                    }
"|="					            { 
                                        trace("|="); 
                                        return OR_ASSIGN;
                                    }

">="                                { 
                                        trace(">="); 
                                        return GREATER_EQUAL;
                                    }
"&&"                                { 
                                        trace("&&"); 
                                        return LOGIC_AND;
                                    }  
                                                                      

(({number}({letter}|{number}|_)+)|.) { yyerror("Token  is  wrong"); }

%%

void multiline_comment()
{
    int abc;
    while ((abc = input()) != 0){

        if (abc == '*'){
          
	  while ((abc = input()) == '*');
           
	   if (abc=='/')
               return;

            if (abc== 0)
                break;
        }
    }     yyerror("Unterminated   Multiline   Comment");
}
