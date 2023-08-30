
%{
#include <math.h>
%}

DIGIT    [0-9]
ID       [a-zA-Z][a-zA-Z0-9]*
STRING   ["][ a-zA-Z0-9]*["]

%%

User|as|Any|break|case|catch|class|continue|default|defer|deinit|do|dynamicType|else|enum|extension|fallthrough|false|fileprivate|for|func|guard|if|import|in|init|inout|internal|is|let|nil|open|operator|optional|private|protocol|public|repeat|rethrows|return|Self|Self|static|struct|subscript|super|switch|throw|throws|true|try|Type|var|where|while {
            printf( "A keyword: %s\n", yytext );
            }
{DIGIT}+    {
            printf( "An integer: %s (%d)\n", yytext,
                    atoi( yytext ) );
            }

{DIGIT}+"."{DIGIT}*        {
            printf( "A float: %s (%g)\n", yytext,
                    atof( yytext ) );
            }
{STRING}    printf("A string");


{ID}        printf( "An identifier: %s\n", yytext );

"="|"+="|"-="|"="|"/="|"%="|"<<="|">>="|"&="|"^="|"+"|"-"|"/"|"%"|"++"|"--"|"=="|"!="|">"|"<"|">="|"<="|"&&"|"!"|"?:"|"??"|"a...b"|"a..<b"|"&"|"^"|"<<"|">>"|"&+"|"&-"|"&*"|"?="|"as"|"as?"|"as!"|"is"|"..<"|"..."|"="|"&"|"==="|"!=="  printf( "An operator: %s\n", yytext );

"{"[^}\n]*"}"     /* eat up one-line comments */

[ \t\n]+          /* eat up whitespace */

.           printf( "Unrecognized character: %s\n", yytext );

%%

int yywrap(){}
int main(){
yylex();
return 0;
}
