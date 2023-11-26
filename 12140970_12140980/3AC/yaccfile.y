%{
    int yylex();
    void yyerror(char* s);
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    char* symbols[1000];
    int symbolValues[1000];
    int symbolCounter = 0;
    int labelCounter = 0;
    int flagNum = 0;
    int symbolVal(char* symbol);
    char* numToString;
    char* numToString2;
    char* labels;
    void updateTable(char* symbol,int value);
    char* split(char* s, char delimeter);
    char* split2(char* s, char delimeter);
    int relopHandler(int n,int n2,int n3);
    char* Temp();
    int tempForExp;
    char* Label();
    char* idSplit;
    char* whileLabel;
     FILE* yyout; 
     FILE* yyin;
   
    %}

%union {
    struct quadruple
    {
        int num;
        int isnum;
        char *arg1;
        char *arg2;
	char *arg3;
	char *arg4;
        char * result;
    } tuple;
    }
%start line
%token putsk
%token endk
%token <tuple> number
%token TYPE
%token IF
%token ELSE
%token <tuple> incDec
%token <tuple> FOR
%token <tuple> WHILE
%token <tuple> identifier
%token <tuple> RELOP AND NOT
%type <tuple> line exp factor assignment term C
%left '*' '/'
%left '+' '-'
%nonassoc 'then'
%nonassoc ELSE

%%


line :  assignment  {;}
     | line assignment {;}
     | line  identifier  {;}
     | line exp  {;}
     | line FOR  '(' assignment {labels = Label(); $2.arg1 = labels; printf("%s:\n",$2.arg1);} ';' C {labels = Label(); $7.arg1 = labels; labels = Label(); $2.arg2= labels; printf("if %s Goto %s\n Goto %s\n",$7.result,$7.arg1,$2.arg2);} ';' {labels = Label(); $7.arg2 = labels; printf("%s:\n",$7.arg2);} exp {printf("Goto %s\n",$2.arg1);}')' '{'{printf("%s:\n",$7.arg1);} line {printf("goto %s\n %s:\n",$7.arg2,$2.arg2);} '}' endk
     |  FOR  '(' assignment {labels = Label(); $1.arg1 = labels; printf("%s:\n",$1.arg1);} ';' C {labels = Label(); $6.arg1 = labels; labels = Label(); $1.arg2= labels; printf("if %s Goto %s\n Goto %s\n",$6.result,$6.arg1,$1.arg2);} ';' {labels = Label(); $6.arg2 = labels; printf("%s:\n",$6.arg2);} exp {printf("Goto %s\n",$1.arg1);}')' '{'{printf("%s:\n",$6.arg1);} line {printf("goto %s\n %s:\n",$6.arg2,$1.arg2);} '}' endk
     | line WHILE {labels = Label(); $2.arg1 = labels; printf("%s:\n",$2.arg1);} '(' C { labels = Label(); $5.arg2 = labels; printf("ifZ %s Goto %s\n",$5.result,$5.arg2);} ')'  line  { printf("Goto %s\n %s:\n",$2.arg1,$2.arg2);} endk
     | WHILE {labels = Label(); $1.arg1 = labels; printf("%s:\n",$1.arg1);} '(' C { labels = Label(); $1.arg2 = labels; printf("if %s is false Goto %s\n",$4.result,$1.arg2);} ')'  line  { printf("Goto %s\n %s:\n",$1.arg1,$1.arg2);} endk
     | line IF '(' C { labels = Label(); $4.arg2 = labels; printf("IfZ %s Goto %s \n",$4.result,labels);    }   ')'  line  { printf("%s :\n",$4.arg2);} endk
     | IF '(' C { labels = Label(); $3.arg2 = labels; printf("IfZ %s Goto %s \n",$3.result,labels);    }   ')'  line  { printf("%s :\n",$3.arg2);} endk
     | line ELSE  line endk
	 | ELSE  line endk
	;
assignment : TYPE identifier '=' exp { printf("%s = %s\n",$2.result,$4.result);}
           | identifier '=' exp { fprintf(yyout,"%s = %s\n",$1.result,$3.result);}          
           ;
exp : term {;}
	| exp RELOP exp  {  if($3.isnum == 1){ $$.arg1 = Temp(); $$.result = Temp(); printf("%s = %d\n",$$.arg1,$3.num);  printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg1,$$.arg1);}else {  $$.result = Temp(); printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg1,$3.result);}}
    | '-' '-' exp   { printf("--%s\n",$3.result); }       
    | '+' '+' exp {printf("++%s\n",$3.result);}
    | exp '-' '-'    { printf("%s--\n",$1.result); }       
    | exp '+' '+'  {printf("%s++\n",$1.result);}
    | exp '+' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d + %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s + %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '-' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d - %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '*' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d * %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp "**" term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d ** %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '/' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d / %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '%' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d % %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '&' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d & %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '|' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d | %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp '^' term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d ^ %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp "<<" term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d << %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    | exp ">>" term { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d >> %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s - %s\n",$$.result,$$.arg1,$$.arg2);}}
    ;

C : exp AND exp {  if($3.isnum == 1){ $$.arg3 = Temp(); $$.result = Temp(); printf("%s = %d\n",$$.arg3,$3.num);  printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg3,$$.arg3);}else {  $$.result = Temp(); printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg3,$3.result);}}
  | exp AND C {  if($3.isnum == 1){ $$.arg3 = Temp(); $$.result = Temp(); printf("%s = %d\n",$$.arg3,$3.num);  printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg3,$$.arg3);}else {  $$.result = Temp(); printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg3,$3.result);}}
  | exp RELOP exp {  if($3.isnum == 1){ $$.arg1 = Temp(); $$.result = Temp(); printf("%s = %d\n",$$.arg1,$3.num);  printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg1,$$.arg1);}else {  $$.result = Temp(); printf("%s = %s %s %s\n",$$.result,$1.result,$2.arg1,$3.result);}}
  | exp 
  |NOT exp {  if($2.isnum == 1){ $$.arg4 = Temp(); $$.result = Temp(); printf("%s = %d\n",$$.arg4,$2.num);  printf("%s = %s %s\n",$$.result,$1.arg4,$2.result);}else {  $$.result = Temp(); printf("%s = %s %s\n",$$.result,$1.arg4,$2.result);}}
  ;

term : factor {;}
     | term '*' factor {  $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d * %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s * %s\n",$$.result,$$.arg1,$$.arg2);}}
     | term '/' factor { $$.arg1 = $1.result; $$.arg2 = $3.result; $$.result = Temp(); $$.isnum = 0;  if($1.isnum == 1){  printf("%s = %d / %s\n",$$.result,$1.num,$3.result);}else { printf("%s = %s / %s\n",$$.result,$$.arg1,$$.arg2);}}
     ;
factor : number { sprintf(numToString,"%d",$1.num); $1.isnum = 1; $1.arg1 = numToString; $1.result = numToString; $$ =$1;}
       | '(' exp ')' { $2.isnum=0;  $$ = $2; } 
       | identifier {  $$.result = $1.result; }
       ;
%%



char * Temp(){
    
    symbolCounter++;
    char *temp=(char *)malloc(sizeof(5*sizeof(char)));
    sprintf(temp,"t%d",symbolCounter);
    return temp;
    
    
    
}
char * Label(){
    
    labelCounter++;
    char *temp=(char *)malloc(sizeof(5*sizeof(char)));
    sprintf(temp,"L%d",labelCounter);
    return temp;
    
    
    
}


int main() {
  
    FILE* yyout;

    numToString = malloc(11 * sizeof(char));
    numToString2 = malloc(10 * sizeof(char));
    labels = malloc(10 * sizeof(char));
    idSplit = malloc(10 * sizeof(char));
    whileLabel = malloc(10 * sizeof(char));
   yyout = fopen("out.txt","w");
  yyin = fopen("input.txt", "r");
   yyparse();
   fclose(yyout);
  }

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
