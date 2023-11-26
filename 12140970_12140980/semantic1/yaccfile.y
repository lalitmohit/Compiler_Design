
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lib/symbol_table.h"
#include "lib/scope.h"
// #include "lib/misc.h"

#define TRACE_ENABLED false

// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

// To track the current scope so that out of scope errors can be found
scope_node_t *curr_scope;

extern char *yytext;
extern int yylineno;

char datatype[100];
int num_params;

symbol_node_t * check_redefined_error(char *symbol);

%}

%token INCLUDE

// To allow for mutiple datatypes
%union {
	char char_pointer[100];
}

%token <char_pointer> IDENTIFIER
%token <char_pointer> INT
%token <char_pointer> CHAR
%token <char_pointer> FLOAT
%token <char_pointer> DOUBLE
%token <char_pointer> VOID

%type <char_pointer> Type

%right '=' ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN         
%left LOGIC_AND LOGIC_OR NOT INCREMENT_OPERATOR DECREMENT_OPERATOR
%left LESSER_EQUAL GREATER_EQUAL DOUBLE_EQUAL NOT_EQUAL LESSER_THAN GREATER_THAN             
%left '+' '-' '*' '/' '%' '^' '&' 


// %token INT FLOAT CHAR DOUBLE VOID RETURN
%token SIGNED UNSIGNED LONG SHORT
%token SWITCH BREAK CONTINUE CASE DEFAULT RETURN
%token FOR WHILE DO
%token IF ELSE  
%token <char_pointer> CONSTANT_INTEGER
%token <char_pointer> CONSTANT_FLOAT
%token <char_pointer> CONSTANT_STRING
%token <char_pointer> CONSTANT_CHAR


%start Begin //	start symbol

%% 
Begin   :
   
    | STATEMENT1
    | STATEMENT1 Begin
	| FUNCTIONS
    | FUNCTIONS Begin
    | FUNCTION_START
    | FUNCTION_START Begin
	;

STATEMENT1
    :   IDENTIFIER    
    ;


FUNCTION_START
    : defk IDENTIFIER Bracket_open List1 ')'  {          
                                                        check_redeclaration_error($2);                  
                                                        char funcType[100] = "Function: ";
                                                        strcat(funcType, datatype);
                                                        symbol_node_t *node = sym_tab_insert(symbol_table,$2, curr_scope->scope_num, funcType, "", yylineno);
                                                        node->is_function_defined = false;
                                                        node->num_params = num_params;
                                                    }
    ;

FUNCTIONS
	: defk IDENTIFIER Bracket_open List1 ')' Compound_Statement      {          
                                                                            symbol_node_t *node = check_redefined_error($2);
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            if(!node) {
                                                                                symbol_node_t *node = sym_tab_insert(symbol_table,$2, curr_scope->scope_num, funcType, "", yylineno);
                                                                                node->num_params = num_params;
                                                                            }
                                                                            else {
                                                                                node->is_function_defined = true;
                                                                                node->num_params = num_params;
                                                                            }
                                                                        }
	;

Bracket_open
    : '('                                                               { num_params = 0; }
    ;

LIST
    : Array_datastructure
    | IDENTIFIER ',' LIST        {   check_redeclaration_error($1);
                                                sym_tab_insert(symbol_table,$1 , curr_scope->scope_num, datatype, "", yylineno);
                                            }
    
                                            
    | Array_datastructure ',' LIST 
    | IDENTIFIER                            {   
                                                check_redeclaration_error($1);
                                                sym_tab_insert(symbol_table,$1 , curr_scope->scope_num, datatype, "", yylineno);} 
    
    
    ;


List1:
    |  IDENTIFIER                                  { num_params++;  sym_tab_insert(symbol_table,$1 , curr_scope->scope_num, "NUM", "", yylineno);trace("List1 Rule 1\n");}
	
	;





Assignment1
    : IDENTIFIER Assignment_Operator expr             {
                                                                //check_redeclaration_error($1);
                                                                sym_tab_insert(symbol_table,$1 , curr_scope->scope_num, datatype, "", yylineno);trace("Assignment1 Rule 1\n");
                                                            }  
    | '*' IDENTIFIER Assignment_Operator expr         {
                                                                //check_redeclaration_error($2);
                                                                sym_tab_insert(symbol_table,$2 , curr_scope->scope_num, datatype, "", yylineno);
                                                            }
    | Array_datastructure Assignment_Operator expr                
    ;

Param_List
    : expr                                            { num_params++; }
    | expr ',' Param_List                             { num_params++; }
    | 
    ;

Assignment
    : IDENTIFIER Assignment_Operator expr           { check_scope_error($1); trace("Assignment Rule 1\n");}
    | '*' IDENTIFIER Assignment_Operator expr       { check_scope_error($2); trace("Assignment Rule 2\n");}  
    | Array_datastructure Assignment_Operator expr       { trace("Array Element Assign Rule"); }
    | STatement2
    ;

    Assignment_Operator
	: '='
    | ADD_ASSIGN
    | SUB_ASSIGN
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;



expr
    : Logical_Expression
    ;

Logical_Expression
    : Relational_Expression
    | Logical_Expression LOGIC_AND Relational_Expression
    | Logical_Expression LOGIC_OR Relational_Expression
    | NOT Relational_Expression 
    | NOT IDENTIFIER
    ;

Relational_Expression
    : Additive_Expression
    | Relational_Expression GREATER_THAN Additive_Expression
    | Relational_Expression LESSER_THAN Additive_Expression
    | Relational_Expression GREATER_EQUAL Additive_Expression
    | Relational_Expression LESSER_EQUAL Additive_Expression
    | Relational_Expression DOUBLE_EQUAL Additive_Expression
    | Relational_Expression NOT_EQUAL Additive_Expression
    ;

Additive_Expression
    : Multiplicative_Expression
    | Additive_Expression '+' Multiplicative_Expression
    | Additive_Expression '-' Multiplicative_Expression
    ;

Multiplicative_Expression
    : STatement2
    | Multiplicative_Expression '*' STatement2
    | Multiplicative_Expression '/' STatement2
    | Multiplicative_Expression '%' STatement2
    ;

Compound_Statement
    : Scope_Start Statement_List Scope_End
	;



Statement_List
    : Statement Statement_List
    | Compound_Statement Statement_List
    |
    ;

Statement
    : While_Statement 
    | STATEMENT1   
    | For_Statement  
    | IF_STM  
    | Assignment    
    | expr 
    | Return_Statement    
    | Do_While_Statement      
    | BREAK 
    | CONTINUE                     
	| 
    ; 

Return_Statement
    : RETURN expr    {trace("Return_Statement Call\n");}
    ;

While_Statement
    : WHILE '(' expr ')' Statement endk                                                  
    | WHILE '(' expr ')' Compound_Statement endk
    ;




IF_STM
    : IF '(' expr ')' Statement endk else_stm endk     
    | IF '(' expr ')' Compound_Statement endk else_stm endk
    ;

else_stm
    : ELSE Compound_Statement endk
    | ELSE Statement endk
    |
    ;

Function_Call
    : IDENTIFIER Bracket_open Param_List ')'     { check_scope_error($1); parameter_check($1); is_function($1); /*sym_tab_insert(symbol_table, $1, curr_scope->scope_num, "Function", "", yylineno);trace("Function Call\n"); */} 
    ;




STatement2
    : '(' expr ')'
    | '(' Assignment ')'
    | CONSTANT_INTEGER     {sym_tab_insert(constant_table, $1, -1, "integer", "", yylineno); trace("CONSTANT_INTEGER\n");}
    | CONSTANT_FLOAT       {sym_tab_insert(constant_table, $1, -1, "float", "", yylineno); trace("CONSTANT_FLOAT\n");}
    | CONSTANT_STRING      {sym_tab_insert(constant_table, $1, -1, "string", "", yylineno); trace("CONSTANT_STRING\n");}
    | IDENTIFIER           {check_scope_error($1);trace("STatement2 Identifier\n");}
    | Array_datastructure
    | Function_Call
    | INCREMENT_OPERATOR IDENTIFIER     {check_scope_error($2);}
    | IDENTIFIER INCREMENT_OPERATOR     {check_scope_error($1);}
    | DECREMENT_OPERATOR IDENTIFIER     {check_scope_error($2);}
    | IDENTIFIER DECREMENT_OPERATOR     {check_scope_error($1);}
    ;


%%

// The function check_scope_error() is used to check wheather a identifier(symbol) is declared in the legal scope or not

inline void check_scope_error(char *symbol){
    if(!scope_check(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " is not defined in the legal scope"));
    }
}

// The function parameter_check() checks the count of the total number of parameter of a function i:e wheather there are less arguments // or extra arguments 

inline void parameter_check(char *symbol) {

    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    if(node != NULL && num_params > node->num_params) {
        char msg[100] = "Too many arguments for the function ";
        yyerror(strcat(msg, symbol));
    }
    else if(node != NULL && num_params < node->num_params) {
        char msg[100] = "Too few arguments arguments for the function  ";
        yyerror(strcat(msg, symbol));
    }
}

// The function check_redeclaration_error checks wheather a identifier or a function is already declared or not. If it is already     // declared, it throws an error

inline void check_redeclaration_error(char *symbol){
    if(check_in_current_scope(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " already declared in current scope"));
    }
}

// The function check_redefined_error checks wheather a function is already defined or not. If it is already defined, it throws an error

symbol_node_t * check_redefined_error(char *symbol){
    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    if(node != NULL && node->is_function_defined)
        yyerror(strcat(symbol, " is already defined in the current scope"));

    return node;
}


// The function is check_array_dimension_error is responsible for checking thee dimension of the error such that the dimension would be // >=0, If it is not it throws an error

inline void check_array_dimension_error(char *symbol, char *arr_size){
    if(atoi(arr_size) < 1){
        yyerror(strcat(symbol, " has array size <=0 "));
    }
}


// The function check_array_subscript_error checks wheather the symbol is an array or not by checking the syntax of array

inline void check_array_subscript_error(char *symbol){
    symbol_node_t *node = sym_tab_arrayLook(symbol_table, symbol);
    if(!strstr(node->type, "Array")){
        yyerror(strcat(symbol, " is not an array"));
    }
}


// This function checks wheather a function's parameter's datatype should not be void

inline void check_void_parameter_error(char *type) {
    if(!strcmp(type, "void")) {
        yyerror("Parameter of function has void datatype");
    }
}


// The function is_function checks wheather a symbol is a function or not

inline void is_function(char *func_name) {
    
    symbol_node_t *node = sym_tab_arrayLook(symbol_table, func_name);
    if(node == NULL) {
        yyerror(strcat(func_name, " function is not declared"));                                        
    }
    if(!strstr(node->type, "Function")) {
        yyerror(strcat(func_name, " is not a function"));
    }
}

inline void trace(char *s){
    if(TRACE_ENABLED)
        {
	fprintf(stderr, "%-20.20s%20.20s%20d\n", s, yytext, yylineno);
}
}


int main()
{
	// initialising current scope
    curr_scope = init_scope();    
    sym_tab_init(symbol_table);
    sym_tab_init(constant_table);

    yyparse();
	printf( "\n\n output: your code is semantically correct \n\n" );
    //printf(FORE_GRN "\n\n your code is sementically correct \n\n" RESET); #1
    
    sym_tab_free(symbol_table);
    sym_tab_free(constant_table);
    // TODO: Free Scope
    
    return 0;
}


//This function is the error  function. Whenever any error is found in during parsing, the corresponding function calls this function // to display the error and to stop parsing.

void yyerror(const char *s) {
    //printf(FORE_RED "%d : %s %s\n" RESET, yylineno, s, yytext );#2
    //printf(FORE_RED "\nParsing failed because of symantic error  \n\n" RESET);#3
    printf( "%d : %s %s\n" ,yylineno, s, yytext );
    printf("\n output: Parsing failed because of symantic error  \n\n" );
    exit(-2);
}
