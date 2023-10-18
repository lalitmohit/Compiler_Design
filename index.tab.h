#ifndef YY_parse_h_included
#define YY_parse_h_included
/*#define YY_USE_CLASS 
*/
#line 1 "/usr/share/bison++/bison.h"
/* before anything */
#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif


 #line 8 "/usr/share/bison++/bison.h"

#line 21 "/usr/share/bison++/bison.h"
 /* %{ and %header{ and %union, during decl */
#ifndef YY_parse_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_parse_COMPATIBILITY 1
 #else
  #define  YY_parse_COMPATIBILITY 0
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_parse_LTYPE
   #define YY_parse_LTYPE YYLTYPE
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
  #endif
 #endif
/*#ifdef YYSTYPE*/
  #ifndef YY_parse_STYPE
   #define YY_parse_STYPE YYSTYPE
  /* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
   /* use %define STYPE */
  #endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_parse_DEBUG
   #define  YY_parse_DEBUG YYDEBUG
   /* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
   /* use %define DEBUG */
  #endif
 #endif 
 /* use goto to be compatible */
 #ifndef YY_parse_USE_GOTO
  #define YY_parse_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
 #define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

 #line 65 "/usr/share/bison++/bison.h"

#line 65 "/usr/share/bison++/bison.h"
/* YY_parse_PURE */
#endif


 #line 68 "/usr/share/bison++/bison.h"
#ifndef YY_USE_CLASS
# ifndef YYSTYPE
#  define YYSTYPE int
#  define YYSTYPE_IS_TRIVIAL 1
# endif
#endif

#line 68 "/usr/share/bison++/bison.h"
/* prefix */

#ifndef YY_parse_DEBUG

 #line 71 "/usr/share/bison++/bison.h"

#line 71 "/usr/share/bison++/bison.h"
/* YY_parse_DEBUG */
#endif

#ifndef YY_parse_LSP_NEEDED

 #line 75 "/usr/share/bison++/bison.h"

#line 75 "/usr/share/bison++/bison.h"
 /* YY_parse_LSP_NEEDED*/
#endif

/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
 #ifndef YY_parse_LTYPE
  #ifndef BISON_YYLTYPE_ISDECLARED
   #define BISON_YYLTYPE_ISDECLARED
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;
  #endif

  #define YY_parse_LTYPE yyltype
 #endif
#endif

/* DEFAULT STYPE*/
#ifndef YY_parse_STYPE
 #define YY_parse_STYPE int
#endif

/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
 #define YY_parse_PARSE yyparse
#endif

#ifndef YY_parse_LEX
 #define YY_parse_LEX yylex
#endif

#ifndef YY_parse_LVAL
 #define YY_parse_LVAL yylval
#endif

#ifndef YY_parse_LLOC
 #define YY_parse_LLOC yylloc
#endif

#ifndef YY_parse_CHAR
 #define YY_parse_CHAR yychar
#endif

#ifndef YY_parse_NERRS
 #define YY_parse_NERRS yynerrs
#endif

#ifndef YY_parse_DEBUG_FLAG
 #define YY_parse_DEBUG_FLAG yydebug
#endif

#ifndef YY_parse_ERROR
 #define YY_parse_ERROR yyerror
#endif

#ifndef YY_parse_PARSE_PARAM
 #ifndef __STDC__
  #ifndef __cplusplus
   #ifndef YY_USE_CLASS
    #define YY_parse_PARSE_PARAM
    #ifndef YY_parse_PARSE_PARAM_DEF
     #define YY_parse_PARSE_PARAM_DEF
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_parse_PARSE_PARAM
  #define YY_parse_PARSE_PARAM void
 #endif
#endif

/* TOKEN C */
#ifndef YY_USE_CLASS

 #ifndef YY_parse_PURE
  #ifndef yylval
   extern YY_parse_STYPE YY_parse_LVAL;
  #else
   #if yylval != YY_parse_LVAL
    extern YY_parse_STYPE YY_parse_LVAL;
   #else
    #warning "Namespace conflict, disabling some functionality (bison++ only)"
   #endif
  #endif
 #endif


 #line 169 "/usr/share/bison++/bison.h"
#define	IMPORT_KEY	258
#define	STRUCT_KEY	259
#define	VAR_KEY	260
#define	LET_KEY	261
#define	RETURN	262
#define	ELSE	263
#define	USER_DEFINED_FUNCTION_DECLARATION	264
#define	IF	265
#define	BREAK	266
#define	CONTINUE	267
#define	INTEGER_TYPE	268
#define	FLOAT_TYPE	269
#define	DOUBLE_TYPE	270
#define	BOOLEAN_TYPE	271
#define	STRING_TYPE	272
#define	CHARACTER_TYPE	273
#define	VOID_TYPE	274
#define	ARRAY_TYPE	275
#define	DICTIONARY_TYPE	276
#define	LT_CURL_BRACE	277
#define	RT_CURL_BRACE	278
#define	COL_OP	279
#define	STRING_LITERAL	280
#define	CASE	281
#define	CHARACTER_LITERALS	282
#define	IDENTIFIER	283
#define	LT_RND_BRACES	284
#define	SINGLE_LINE_COMMENT	285
#define	MULTI_LINE_COMMENT	286
#define	EQUAL	287
#define	RT_RND_BRACES	288
#define	EQUALEQUAL	289
#define	NOEQUAL	290
#define	GREATEREQUAL	291
#define	LESSEQUAL	292
#define	GREATER	293
#define	LESSER	294
#define	MODULOEQUAL	295
#define	MINUSEQUAL	296
#define	WHILE_KEY	297
#define	PLUSEQUAL	298
#define	MULTIEQUAL	299
#define	DIVEQUAL	300
#define	DIVISION	301
#define	MODULO	302
#define	PLUS	303
#define	MINUS	304
#define	MULTIPLY	305
#define	NOT_OPERATOR	306
#define	AND_OPERATOR	307
#define	OR_OPERATOR	308
#define	IN_KEY	309
#define	XOR_OPERATOR	310
#define	LEFT_SHIFT_EQUAL	311
#define	RIGHT_SHIFT_EQUAL	312
#define	SWITCH	313
#define	DEFAULT	314
#define	FOR_KEY	315


#line 169 "/usr/share/bison++/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
 #ifndef YY_parse_CLASS
  #define YY_parse_CLASS parse
 #endif

 #ifndef YY_parse_INHERIT
  #define YY_parse_INHERIT
 #endif

 #ifndef YY_parse_MEMBERS
  #define YY_parse_MEMBERS 
 #endif

 #ifndef YY_parse_LEX_BODY
  #define YY_parse_LEX_BODY  
 #endif

 #ifndef YY_parse_ERROR_BODY
  #define YY_parse_ERROR_BODY  
 #endif

 #ifndef YY_parse_CONSTRUCTOR_PARAM
  #define YY_parse_CONSTRUCTOR_PARAM
 #endif
 /* choose between enum and const */
 #ifndef YY_parse_USE_CONST_TOKEN
  #define YY_parse_USE_CONST_TOKEN 0
  /* yes enum is more compatible with flex,  */
  /* so by default we use it */ 
 #endif
 #if YY_parse_USE_CONST_TOKEN != 0
  #ifndef YY_parse_ENUM_TOKEN
   #define YY_parse_ENUM_TOKEN yy_parse_enum_token
  #endif
 #endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
 #if YY_parse_USE_CONST_TOKEN != 0
  /* static const int token ... */
  
 #line 212 "/usr/share/bison++/bison.h"
static const int IMPORT_KEY;
static const int STRUCT_KEY;
static const int VAR_KEY;
static const int LET_KEY;
static const int RETURN;
static const int ELSE;
static const int USER_DEFINED_FUNCTION_DECLARATION;
static const int IF;
static const int BREAK;
static const int CONTINUE;
static const int INTEGER_TYPE;
static const int FLOAT_TYPE;
static const int DOUBLE_TYPE;
static const int BOOLEAN_TYPE;
static const int STRING_TYPE;
static const int CHARACTER_TYPE;
static const int VOID_TYPE;
static const int ARRAY_TYPE;
static const int DICTIONARY_TYPE;
static const int LT_CURL_BRACE;
static const int RT_CURL_BRACE;
static const int COL_OP;
static const int STRING_LITERAL;
static const int CASE;
static const int CHARACTER_LITERALS;
static const int IDENTIFIER;
static const int LT_RND_BRACES;
static const int SINGLE_LINE_COMMENT;
static const int MULTI_LINE_COMMENT;
static const int EQUAL;
static const int RT_RND_BRACES;
static const int EQUALEQUAL;
static const int NOEQUAL;
static const int GREATEREQUAL;
static const int LESSEQUAL;
static const int GREATER;
static const int LESSER;
static const int MODULOEQUAL;
static const int MINUSEQUAL;
static const int WHILE_KEY;
static const int PLUSEQUAL;
static const int MULTIEQUAL;
static const int DIVEQUAL;
static const int DIVISION;
static const int MODULO;
static const int PLUS;
static const int MINUS;
static const int MULTIPLY;
static const int NOT_OPERATOR;
static const int AND_OPERATOR;
static const int OR_OPERATOR;
static const int IN_KEY;
static const int XOR_OPERATOR;
static const int LEFT_SHIFT_EQUAL;
static const int RIGHT_SHIFT_EQUAL;
static const int SWITCH;
static const int DEFAULT;
static const int FOR_KEY;


#line 212 "/usr/share/bison++/bison.h"
 /* decl const */
 #else
  enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0
  
 #line 215 "/usr/share/bison++/bison.h"
	,IMPORT_KEY=258
	,STRUCT_KEY=259
	,VAR_KEY=260
	,LET_KEY=261
	,RETURN=262
	,ELSE=263
	,USER_DEFINED_FUNCTION_DECLARATION=264
	,IF=265
	,BREAK=266
	,CONTINUE=267
	,INTEGER_TYPE=268
	,FLOAT_TYPE=269
	,DOUBLE_TYPE=270
	,BOOLEAN_TYPE=271
	,STRING_TYPE=272
	,CHARACTER_TYPE=273
	,VOID_TYPE=274
	,ARRAY_TYPE=275
	,DICTIONARY_TYPE=276
	,LT_CURL_BRACE=277
	,RT_CURL_BRACE=278
	,COL_OP=279
	,STRING_LITERAL=280
	,CASE=281
	,CHARACTER_LITERALS=282
	,IDENTIFIER=283
	,LT_RND_BRACES=284
	,SINGLE_LINE_COMMENT=285
	,MULTI_LINE_COMMENT=286
	,EQUAL=287
	,RT_RND_BRACES=288
	,EQUALEQUAL=289
	,NOEQUAL=290
	,GREATEREQUAL=291
	,LESSEQUAL=292
	,GREATER=293
	,LESSER=294
	,MODULOEQUAL=295
	,MINUSEQUAL=296
	,WHILE_KEY=297
	,PLUSEQUAL=298
	,MULTIEQUAL=299
	,DIVEQUAL=300
	,DIVISION=301
	,MODULO=302
	,PLUS=303
	,MINUS=304
	,MULTIPLY=305
	,NOT_OPERATOR=306
	,AND_OPERATOR=307
	,OR_OPERATOR=308
	,IN_KEY=309
	,XOR_OPERATOR=310
	,LEFT_SHIFT_EQUAL=311
	,RIGHT_SHIFT_EQUAL=312
	,SWITCH=313
	,DEFAULT=314
	,FOR_KEY=315


#line 215 "/usr/share/bison++/bison.h"
 /* enum token */
     }; /* end of enum declaration */
 #endif
public:
 int YY_parse_PARSE(YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
 #ifdef YY_parse_PURE
  #ifdef YY_parse_LSP_NEEDED
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
  #else
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
  #endif
 #else
  virtual int YY_parse_LEX() YY_parse_LEX_BODY;
  YY_parse_STYPE YY_parse_LVAL;
  #ifdef YY_parse_LSP_NEEDED
   YY_parse_LTYPE YY_parse_LLOC;
  #endif
  int YY_parse_NERRS;
  int YY_parse_CHAR;
 #endif
 #if YY_parse_DEBUG != 0
  public:
   int YY_parse_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
 #endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#endif


#if YY_parse_COMPATIBILITY != 0
 /* backward compatibility */
 /* Removed due to bison problems
 /#ifndef YYSTYPE
 / #define YYSTYPE YY_parse_STYPE
 /#endif*/

 #ifndef YYLTYPE
  #define YYLTYPE YY_parse_LTYPE
 #endif
 #ifndef YYDEBUG
  #ifdef YY_parse_DEBUG 
   #define YYDEBUG YY_parse_DEBUG
  #endif
 #endif

#endif
/* END */

 #line 267 "/usr/share/bison++/bison.h"
#endif
