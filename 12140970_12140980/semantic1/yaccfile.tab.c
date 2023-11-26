/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "yaccfile.y"

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


#line 102 "yaccfile.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_YACCFILE_TAB_H_INCLUDED
# define YY_YY_YACCFILE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INCLUDE = 258,
    IDENTIFIER = 259,
    INT = 260,
    CHAR = 261,
    FLOAT = 262,
    DOUBLE = 263,
    VOID = 264,
    ADD_ASSIGN = 265,
    SUB_ASSIGN = 266,
    MUL_ASSIGN = 267,
    DIV_ASSIGN = 268,
    MOD_ASSIGN = 269,
    LEFT_ASSIGN = 270,
    RIGHT_ASSIGN = 271,
    AND_ASSIGN = 272,
    XOR_ASSIGN = 273,
    OR_ASSIGN = 274,
    LOGIC_AND = 275,
    LOGIC_OR = 276,
    NOT = 277,
    INCREMENT_OPERATOR = 278,
    DECREMENT_OPERATOR = 279,
    LESSER_EQUAL = 280,
    GREATER_EQUAL = 281,
    DOUBLE_EQUAL = 282,
    NOT_EQUAL = 283,
    LESSER_THAN = 284,
    GREATER_THAN = 285,
    SIGNED = 286,
    UNSIGNED = 287,
    LONG = 288,
    SHORT = 289,
    SWITCH = 290,
    BREAK = 291,
    CONTINUE = 292,
    CASE = 293,
    DEFAULT = 294,
    RETURN = 295,
    FOR = 296,
    WHILE = 297,
    DO = 298,
    IF = 299,
    ELSE = 300,
    CONSTANT_INTEGER = 301,
    CONSTANT_FLOAT = 302,
    CONSTANT_STRING = 303,
    CONSTANT_CHAR = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "yaccfile.y"

	char char_pointer[100];

#line 208 "yaccfile.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACCFILE_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

#define YYUNDEFTOK  2
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    66,     2,    36,    38,     2,
      60,    59,    34,    32,    61,    33,    67,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    10,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,    65,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    71,    71,    72,    73,    74,    75,    76,    77,    78,
      82,    87,    98,   114,   118,   119,   122,   130,   131,   134,
     142,   143,   148,   149,   150,   151,   152,   153,   154,   155,
     160,   160,   160,   160,   164,   170,   181,   188,   191,   194,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   213,
     217,   221,   225,   226,   227,   231,   232,   233,   234,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     254,   258,   259,   260,   261,   262,   266,   267,   268,   269,
     270,   271,   272,   276,   277,   278,   282,   283,   284,   285,
     289,   293,   298,   302,   303,   304,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   322,   326,   327,
     331,   336,   337,   341,   342,   346,   347,   348,   352,   356,
     357,   361,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "IDENTIFIER", "INT", "CHAR",
  "FLOAT", "DOUBLE", "VOID", "'='", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "LOGIC_AND", "LOGIC_OR", "NOT",
  "INCREMENT_OPERATOR", "DECREMENT_OPERATOR", "LESSER_EQUAL",
  "GREATER_EQUAL", "DOUBLE_EQUAL", "NOT_EQUAL", "LESSER_THAN",
  "GREATER_THAN", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'",
  "SIGNED", "UNSIGNED", "LONG", "SHORT", "SWITCH", "BREAK", "CONTINUE",
  "CASE", "DEFAULT", "RETURN", "FOR", "WHILE", "DO", "IF", "ELSE",
  "CONSTANT_INTEGER", "CONSTANT_FLOAT", "CONSTANT_STRING", "CONSTANT_CHAR",
  "';'", "')'", "'('", "','", "'['", "']'", "'{'", "'}'", "'#'", "'.'",
  "$accept", "Begin", "Declaration", "Function_Declaration",
  "Function_Definition", "Bracket_open", "Identifier_List",
  "Formal_Param_List", "Modifiers", "Array_Notation", "Type",
  "Define_Assign", "Param_List", "Assignment", "Assignment_Operator",
  "Expression", "Logical_Expression", "Relational_Expression",
  "Additive_Expression", "Multiplicative_Expression", "Compound_Statement",
  "Scope_Start", "Scope_End", "Statement_List", "Statement",
  "Return_Statement", "While_Statement", "Do_While_Statement",
  "For_Statement", "If_Statement", "Else_Statement", "Function_Call",
  "Include_Statement", "Include", "Primary", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      61,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,    43,    45,    42,    47,    37,    94,    38,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,    59,    41,
      40,    44,    91,    93,   123,   125,    35,    46
};
# endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
       4,    18,    15,    15,    15,   308,     8,  -127,    15,    13,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   316,    59,
      63,    14,   407,    25,  -127,    99,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,    46,   -28,
     430,    41,   354,    43,  -127,    46,    41,    46,   -29,   369,
    -127,    57,    65,    82,    87,    98,    28,    83,   118,   144,
     248,   248,   146,   148,  -127,  -127,  -127,  -127,   233,  -127,
    -127,     9,   175,    77,     0,  -127,  -127,    46,   -17,    41,
       7,  -127,  -127,  -127,  -127,   156,    94,  -127,    35,   -14,
     158,   108,  -127,  -127,    41,   238,   175,  -127,  -127,  -127,
    -127,   109,    43,   338,   168,   431,   117,   119,    61,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,  -127,   123,   120,  -127,   126,   124,   157,  -127,
    -127,  -127,  -127,   191,   430,    73,   430,   132,   131,    41,
     391,    41,  -127,  -127,   175,   175,    77,    77,    77,    77,
      77,    77,     0,     0,  -127,  -127,  -127,   130,  -127,   145,
    -127,  -127,   149,   152,    41,   159,   161,   162,   174,  -127,
    -127,    46,   154,   155,   191,   163,   191,  -127,  -127,  -127,
    -127,  -127,  -127,   430,  -127,  -127,    41,  -127,    41,  -127,
    -127,  -127,  -127,  -127,   164,   287,    41,   167,    41,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   180,
    -127,   185,   190,   194,    41,   191,    41,   191,   196,  -127,
    -127,   202,   211,   211,   287,   210,   191,  -127,  -127,   224,
    -127,  -127,  -127,   191,  -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    40,    43,    41,    44,    42,    33,    32,    31,    30,
       0,     0,     4,     8,     6,     0,     0,   121,     2,     0,
       1,     5,     9,     7,    45,    48,    46,    47,    18,     0,
       0,     0,    14,    21,     3,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    13,     0,     0,
      29,     0,    19,     0,    10,     0,     0,     0,     0,    18,
      15,     0,     0,    42,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   127,   126,     0,   133,
      49,    70,    71,    76,    83,   134,    86,     0,     0,     0,
       0,    17,    51,    20,   119,     0,     0,    34,     0,    23,
       0,    25,   136,   138,    54,   128,    74,   135,   137,   132,
     131,   129,   130,   128,     0,   133,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,    50,     0,     0,     0,    37,
      11,    91,    12,    95,    29,    24,    29,     0,    52,     0,
     129,     0,   123,   122,    72,    73,    80,    79,    81,    82,
      78,    77,    84,    85,    87,    88,    89,     0,    35,     0,
      36,   120,     0,     0,     0,     0,     0,     0,     0,   106,
      97,     0,     0,     0,    95,     0,    95,   102,    96,   103,
      98,    99,    26,    29,    28,   118,    54,    55,     0,    57,
      38,    39,   104,   105,     0,     0,     0,     0,     0,   100,
     101,    94,    92,    90,    93,    27,    53,    56,   107,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     108,     0,   117,   117,     0,     0,     0,   114,   113,     0,
     110,   115,   116,     0,   112,   111
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,   172,   100,  -127,  -127,   241,    37,  -117,  -127,   -16,
       1,  -127,    74,   -75,   -24,   -45,  -127,   -42,   153,    27,
     -94,  -127,  -127,  -126,   -69,  -127,  -127,  -127,  -127,  -127,
      51,  -127,  -127,  -127,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   180,    13,    14,   104,    31,    64,    15,    79,
     181,    33,   147,   182,    51,   183,    81,    82,    83,    84,
     184,   143,   213,   185,   186,   187,   188,   189,   190,   191,
     237,    85,    17,    18,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    16,    94,   116,   142,    61,    80,    19,    56,   109,
     110,    92,    28,    16,    16,    16,   133,   118,    20,    16,
       1,     2,     3,     4,     5,   106,    62,   192,    89,   194,
     119,   120,    32,   117,   129,   130,   131,   134,    95,    32,
     136,    32,    29,    35,   135,    66,    30,   144,    49,   101,
      59,    65,   102,   103,     6,     7,     8,     9,   211,   148,
     214,   137,   115,    52,    67,    68,    69,    53,   164,   165,
     166,    32,    54,    70,    71,    72,   215,   154,   155,    73,
      29,    10,   118,   207,    30,    60,    57,   105,    47,   149,
      49,   151,    91,   140,    93,    74,    75,    76,    77,   141,
      12,    78,    99,    58,   197,    90,   199,    68,    69,   127,
     128,    96,    12,    12,    12,    70,    71,    72,    12,   -58,
     -58,    73,   107,   118,   132,   118,   198,   115,    97,   204,
     219,   229,   100,   232,   193,    88,    30,    74,    75,    76,
      77,   -22,   241,    78,   220,    65,    98,    65,   108,   244,
     111,   148,   112,   217,   162,   163,   230,   139,   233,   239,
     138,   221,   145,   223,   118,    32,   118,   242,   115,   146,
     115,    88,   150,   220,   245,   118,   152,   167,   153,   228,
     169,   231,   118,   168,    21,    22,    23,   170,   171,   115,
      34,   195,   196,   200,    65,   113,     1,     2,     3,     4,
       5,   121,   122,   123,   124,   125,   126,   202,   201,   115,
     203,   115,   209,   210,    67,    68,    69,   222,   115,   205,
     115,   206,   218,    70,    71,   114,   141,   115,   212,    73,
       6,     7,     8,     9,   208,   172,   173,   113,   224,   174,
     175,   176,   177,   178,   225,    74,    75,    76,    77,   179,
     226,    78,    66,   227,   234,   141,    67,    68,    69,   -75,
     -75,   235,   102,   103,   236,    70,    71,   114,   240,    50,
     216,    73,    68,    69,   156,   157,   158,   159,   160,   161,
      70,    71,    72,   243,   238,     0,    73,    74,    75,    76,
      77,   113,     0,    78,     0,     0,   -75,   -75,    47,   -75,
      49,     0,    74,    75,    76,    77,     0,     0,    78,     0,
       0,    68,    69,    24,    25,    26,    27,     0,     0,    70,
      71,   114,     0,     0,     0,    73,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     0,     0,     0,
       0,    74,    75,    76,    77,     0,     0,    78,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,     0,
       0,     0,   102,   103,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,    47,    48,    49,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
      49,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,     0,     0,    87,    88,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     0,     0,
      48,    49,     0,     0,     0,     1,     2,     3,     4,    63,
       0,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     6,
       7,     8,     9
};

static const yytype_int16 yycheck[] =
{
      16,     0,    31,    78,    98,    33,    51,     3,    32,    70,
      71,    56,     4,    12,    13,    14,    33,    78,     0,    18,
       5,     6,     7,     8,     9,    67,    54,   144,    52,   146,
      21,    22,    48,    78,    34,    35,    36,    54,    67,    55,
      33,    57,    34,    30,    89,     4,    38,    61,    62,    65,
       4,    50,    24,    25,    39,    40,    41,    42,   184,   104,
     186,    54,    78,     4,    23,    24,    25,     4,   129,   130,
     131,    87,    58,    32,    33,    34,   193,   119,   120,    38,
      34,    66,   143,   177,    38,    48,    61,     4,    60,   113,
      62,   115,    55,    58,    57,    54,    55,    56,    57,    64,
       0,    60,     4,     4,   149,    62,   151,    24,    25,    32,
      33,    54,    12,    13,    14,    32,    33,    34,    18,    58,
      59,    38,     4,   184,    87,   186,   150,   143,    63,   174,
     205,   225,    34,   227,    61,    62,    38,    54,    55,    56,
      57,    59,   236,    60,   205,   144,    59,   146,     4,   243,
       4,   196,     4,   198,   127,   128,   225,    63,   227,   234,
       4,   206,     4,   208,   225,   181,   227,   236,   184,    61,
     186,    62,     4,   234,   243,   236,    59,    54,    59,   224,
      54,   226,   243,    63,    12,    13,    14,    63,    31,   205,
      18,    59,    61,    63,   193,     4,     5,     6,     7,     8,
       9,    26,    27,    28,    29,    30,    31,    58,    63,   225,
      58,   227,    58,    58,    23,    24,    25,    50,   234,    60,
     236,    60,    58,    32,    33,    34,    64,   243,    65,    38,
      39,    40,    41,    42,    60,    44,    45,     4,    58,    48,
      49,    50,    51,    52,    59,    54,    55,    56,    57,    58,
      60,    60,     4,    59,    58,    64,    23,    24,    25,    21,
      22,    59,    24,    25,    53,    32,    33,    34,    58,    28,
     196,    38,    24,    25,   121,   122,   123,   124,   125,   126,
      32,    33,    34,    59,   233,    -1,    38,    54,    55,    56,
      57,     4,    -1,    60,    -1,    -1,    58,    59,    60,    61,
      62,    -1,    54,    55,    56,    57,    -1,    -1,    60,    -1,
      -1,    24,    25,     5,     6,     7,     8,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    38,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    -1,    -1,    60,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    24,    25,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    60,    61,    62,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    61,    62,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      61,    62,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    39,
      40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    39,    40,    41,    42,
      66,    69,    70,    71,    72,    76,    78,   100,   101,     3,
       0,    69,    69,    69,     5,     6,     7,     8,     4,    34,
      38,    74,    77,    79,    69,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    60,    61,    62,
      73,    82,     4,     4,    58,    61,    82,    61,     4,     4,
      74,    33,    54,     9,    75,    78,     4,    23,    24,    25,
      32,    33,    34,    38,    54,    55,    56,    57,    60,    77,
      83,    84,    85,    86,    87,    99,   102,    61,    62,    82,
      62,    74,    83,    74,    31,    67,    54,    63,    59,     4,
      34,    77,    24,    25,    73,     4,    85,     4,     4,   102,
     102,     4,     4,     4,    34,    77,    81,    83,   102,    21,
      22,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    74,    33,    54,    83,    33,    54,     4,    63,
      58,    64,    88,    89,    61,     4,    61,    80,    83,    82,
       4,    82,    59,    59,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,   102,   102,   102,    54,    63,    54,
      63,    31,    44,    45,    48,    49,    50,    51,    52,    58,
      70,    78,    81,    83,    88,    91,    92,    93,    94,    95,
      96,    97,    75,    61,    75,    59,    61,    83,    82,    83,
      63,    63,    58,    58,    83,    60,    60,    88,    60,    58,
      58,    91,    65,    90,    91,    75,    80,    83,    58,    81,
     102,    83,    50,    83,    58,    59,    60,    59,    83,    88,
      92,    83,    88,    92,    58,    59,    53,    98,    98,    81,
      58,    88,    92,    59,    88,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    72,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      88,    89,    90,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    94,    94,
      95,    96,    96,    97,    97,    98,    98,    98,    99,   100,
     100,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       3,     6,     6,     1,     1,     3,     4,     3,     1,     2,
       3,     1,     1,     2,     3,     2,     4,     5,     4,     0,
       1,     1,     1,     1,     4,     5,     5,     5,     6,     6,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       4,     3,     1,     3,     0,     3,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     2,     2,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     1,     3,     5,     5,
       7,     9,     9,     6,     6,     2,     2,     0,     4,     5,
       7,     1,     3,     3,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 11:
#line 87 "yaccfile.y"
                                                             {          
                                                        check_redeclaration_error((yyvsp[-4].char_pointer));                  
                                                        char funcType[100] = "Function: ";
                                                        strcat(funcType, datatype);
                                                        symbol_node_t *node = sym_tab_insert(symbol_table,(yyvsp[-4].char_pointer), curr_scope->scope_num, funcType, "", yylineno);
                                                        node->is_function_defined = false;
                                                        node->num_params = num_params;
                                                    }
#line 1618 "yaccfile.tab.c"
    break;

  case 12:
#line 98 "yaccfile.y"
                                                                                     {          
                                                                            symbol_node_t *node = check_redefined_error((yyvsp[-4].char_pointer));
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            if(!node) {
                                                                                symbol_node_t *node = sym_tab_insert(symbol_table,(yyvsp[-4].char_pointer), curr_scope->scope_num, funcType, "", yylineno);
                                                                                node->num_params = num_params;
                                                                            }
                                                                            else {
                                                                                node->is_function_defined = true;
                                                                                node->num_params = num_params;
                                                                            }
                                                                        }
#line 1636 "yaccfile.tab.c"
    break;

  case 13:
#line 114 "yaccfile.y"
                                                                        { num_params = 0; }
#line 1642 "yaccfile.tab.c"
    break;

  case 15:
#line 119 "yaccfile.y"
                                            {   check_redeclaration_error((yyvsp[-2].char_pointer));
                                                sym_tab_insert(symbol_table,(yyvsp[-2].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                            }
#line 1650 "yaccfile.tab.c"
    break;

  case 16:
#line 122 "yaccfile.y"
                                            {
                                                check_redeclaration_error((yyvsp[-2].char_pointer));
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                sym_tab_insert(symbol_table,(yyvsp[-2].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            }
#line 1663 "yaccfile.tab.c"
    break;

  case 18:
#line 131 "yaccfile.y"
                                            {   
                                                check_redeclaration_error((yyvsp[0].char_pointer));
                                                sym_tab_insert(symbol_table,(yyvsp[0].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);}
#line 1671 "yaccfile.tab.c"
    break;

  case 19:
#line 134 "yaccfile.y"
                                            {
                                                check_redeclaration_error((yyvsp[0].char_pointer));
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                sym_tab_insert(symbol_table,(yyvsp[0].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            }
#line 1684 "yaccfile.tab.c"
    break;

  case 23:
#line 149 "yaccfile.y"
                                                       { num_params++; check_void_parameter_error((yyvsp[-1].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[0].char_pointer) , curr_scope->scope_num, (yyvsp[-1].char_pointer), "", yylineno);trace("Formal_Param_List Rule 1\n");}
#line 1690 "yaccfile.tab.c"
    break;

  case 24:
#line 150 "yaccfile.y"
                                                           { num_params++; check_void_parameter_error((yyvsp[-2].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[0].char_pointer) , curr_scope->scope_num, (yyvsp[-2].char_pointer), "", yylineno);trace("Formal_Param_List Rule 2\n");}
#line 1696 "yaccfile.tab.c"
    break;

  case 25:
#line 151 "yaccfile.y"
                                                           { num_params++; check_void_parameter_error((yyvsp[-1].char_pointer)); trace("Formal_Param_List Rule 3\n");}
#line 1702 "yaccfile.tab.c"
    break;

  case 26:
#line 152 "yaccfile.y"
                                                           { num_params++; check_void_parameter_error((yyvsp[-3].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[-2].char_pointer) , curr_scope->scope_num, (yyvsp[-3].char_pointer), "", yylineno);trace("Formal_Param_List Rule 4\n");}
#line 1708 "yaccfile.tab.c"
    break;

  case 27:
#line 153 "yaccfile.y"
                                                           { num_params++; check_void_parameter_error((yyvsp[-4].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[-2].char_pointer) , curr_scope->scope_num, (yyvsp[-4].char_pointer), "", yylineno);trace("Formal_Param_List Rule 5\n");}
#line 1714 "yaccfile.tab.c"
    break;

  case 28:
#line 154 "yaccfile.y"
                                                           { num_params++; check_void_parameter_error((yyvsp[-3].char_pointer)); trace("Formal_Param_List Rule 6\n");}
#line 1720 "yaccfile.tab.c"
    break;

  case 34:
#line 164 "yaccfile.y"
                                          {   
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        check_array_dimension_error((yyvsp[-3].char_pointer), (yyvsp[-1].char_pointer));
                                        sym_tab_insert(symbol_table,(yyvsp[-3].char_pointer), curr_scope->scope_num, arrayType, (yyvsp[-1].char_pointer), yylineno);
                                        check_array_subscript_error((yyvsp[-3].char_pointer));
                                    }
#line 1731 "yaccfile.tab.c"
    break;

  case 35:
#line 170 "yaccfile.y"
                                              {   
                                        check_redeclaration_error((yyvsp[-3].char_pointer));
                                        check_array_dimension_error((yyvsp[-3].char_pointer), (yyvsp[-1].char_pointer));
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        sym_tab_insert(symbol_table,(yyvsp[-3].char_pointer), curr_scope->scope_num, arrayType, (yyvsp[-1].char_pointer), yylineno);
                                        datatype[len] = '\0';
                                        check_array_subscript_error((yyvsp[-3].char_pointer));
                                    }
#line 1747 "yaccfile.tab.c"
    break;

  case 36:
#line 181 "yaccfile.y"
                                              {
                                        check_redeclaration_error((yyvsp[-3].char_pointer));
                                        check_array_dimension_error((yyvsp[-3].char_pointer), (yyvsp[-1].char_pointer));
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        sym_tab_insert(symbol_table,(yyvsp[-3].char_pointer), curr_scope->scope_num, arrayType, (yyvsp[-1].char_pointer), yylineno);
                                        check_array_subscript_error((yyvsp[-3].char_pointer));
                                    }
#line 1759 "yaccfile.tab.c"
    break;

  case 37:
#line 188 "yaccfile.y"
                                              {   
                                        yyerror(strcat((yyvsp[-4].char_pointer), " has non-positive array size"));
                                    }
#line 1767 "yaccfile.tab.c"
    break;

  case 38:
#line 191 "yaccfile.y"
                                                  {   
                                        yyerror(strcat((yyvsp[-4].char_pointer), " has non-positive array size"));
                                    }
#line 1775 "yaccfile.tab.c"
    break;

  case 39:
#line 194 "yaccfile.y"
                                                  {
                                        yyerror(strcat((yyvsp[-4].char_pointer), " has non-positive array size"));
                                    }
#line 1783 "yaccfile.tab.c"
    break;

  case 40:
#line 200 "yaccfile.y"
                                { strcpy((yyval.char_pointer), (yyvsp[0].char_pointer)); strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1789 "yaccfile.tab.c"
    break;

  case 41:
#line 201 "yaccfile.y"
                                { strcpy((yyval.char_pointer), (yyvsp[0].char_pointer)); strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1795 "yaccfile.tab.c"
    break;

  case 42:
#line 202 "yaccfile.y"
                                { strcpy((yyval.char_pointer), (yyvsp[0].char_pointer)); strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1801 "yaccfile.tab.c"
    break;

  case 43:
#line 203 "yaccfile.y"
                                { strcpy((yyval.char_pointer), (yyvsp[0].char_pointer)); strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1807 "yaccfile.tab.c"
    break;

  case 44:
#line 204 "yaccfile.y"
                                { strcpy((yyval.char_pointer), (yyvsp[0].char_pointer)); strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1813 "yaccfile.tab.c"
    break;

  case 45:
#line 205 "yaccfile.y"
                                { strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1819 "yaccfile.tab.c"
    break;

  case 46:
#line 206 "yaccfile.y"
                                { strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1825 "yaccfile.tab.c"
    break;

  case 47:
#line 207 "yaccfile.y"
                                { strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1831 "yaccfile.tab.c"
    break;

  case 48:
#line 208 "yaccfile.y"
                                { strcpy(datatype, (yyvsp[0].char_pointer));}
#line 1837 "yaccfile.tab.c"
    break;

  case 49:
#line 213 "yaccfile.y"
                                                            {
                                                                //check_redeclaration_error($1);
                                                                sym_tab_insert(symbol_table,(yyvsp[-2].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);trace("Define_Assign Rule 1\n");
                                                            }
#line 1846 "yaccfile.tab.c"
    break;

  case 50:
#line 217 "yaccfile.y"
                                                            {
                                                                //check_redeclaration_error($2);
                                                                sym_tab_insert(symbol_table,(yyvsp[-2].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                                            }
#line 1855 "yaccfile.tab.c"
    break;

  case 52:
#line 225 "yaccfile.y"
                                                            { num_params++; }
#line 1861 "yaccfile.tab.c"
    break;

  case 53:
#line 226 "yaccfile.y"
                                                            { num_params++; }
#line 1867 "yaccfile.tab.c"
    break;

  case 55:
#line 231 "yaccfile.y"
                                                          { check_scope_error((yyvsp[-2].char_pointer)); trace("Assignment Rule 1\n");}
#line 1873 "yaccfile.tab.c"
    break;

  case 56:
#line 232 "yaccfile.y"
                                                          { check_scope_error((yyvsp[-2].char_pointer)); trace("Assignment Rule 2\n");}
#line 1879 "yaccfile.tab.c"
    break;

  case 57:
#line 233 "yaccfile.y"
                                                          { trace("Array Element Assign Rule"); }
#line 1885 "yaccfile.tab.c"
    break;

  case 91:
#line 293 "yaccfile.y"
            {   curr_scope = add_child_scope(curr_scope);   }
#line 1891 "yaccfile.tab.c"
    break;

  case 92:
#line 298 "yaccfile.y"
            {   curr_scope = goto_parent_scope(curr_scope);   }
#line 1897 "yaccfile.tab.c"
    break;

  case 107:
#line 322 "yaccfile.y"
                              {trace("Return_Statement Call\n");}
#line 1903 "yaccfile.tab.c"
    break;

  case 118:
#line 352 "yaccfile.y"
                                                 { check_scope_error((yyvsp[-3].char_pointer)); parameter_check((yyvsp[-3].char_pointer)); is_function((yyvsp[-3].char_pointer)); /*sym_tab_insert(symbol_table, $1, curr_scope->scope_num, "Function", "", yylineno);trace("Function Call\n"); */}
#line 1909 "yaccfile.tab.c"
    break;

  case 119:
#line 356 "yaccfile.y"
                                                            {check_scope_error((yyvsp[-1].char_pointer));}
#line 1915 "yaccfile.tab.c"
    break;

  case 120:
#line 357 "yaccfile.y"
                                                                            {check_scope_error((yyvsp[-3].char_pointer));check_scope_error((yyvsp[-1].char_pointer));}
#line 1921 "yaccfile.tab.c"
    break;

  case 124:
#line 369 "yaccfile.y"
                           {sym_tab_insert(constant_table, (yyvsp[0].char_pointer), -1, "int", "", yylineno); trace("CONSTANT_INTEGER\n");}
#line 1927 "yaccfile.tab.c"
    break;

  case 125:
#line 370 "yaccfile.y"
                           {sym_tab_insert(constant_table, (yyvsp[0].char_pointer), -1, "float", "", yylineno); trace("CONSTANT_FLOAT\n");}
#line 1933 "yaccfile.tab.c"
    break;

  case 126:
#line 371 "yaccfile.y"
                           {sym_tab_insert(constant_table, (yyvsp[0].char_pointer), -1, "char", "", yylineno); trace("CONSTANT_CHAR\n");}
#line 1939 "yaccfile.tab.c"
    break;

  case 127:
#line 372 "yaccfile.y"
                           {sym_tab_insert(constant_table, (yyvsp[0].char_pointer), -1, "string", "", yylineno); trace("CONSTANT_STRING\n");}
#line 1945 "yaccfile.tab.c"
    break;

  case 128:
#line 373 "yaccfile.y"
                           {check_scope_error((yyvsp[0].char_pointer));trace("Primary Identifier\n");}
#line 1951 "yaccfile.tab.c"
    break;

  case 129:
#line 374 "yaccfile.y"
                           {check_scope_error((yyvsp[0].char_pointer));trace("Pointer Identifier\n");}
#line 1957 "yaccfile.tab.c"
    break;

  case 130:
#line 375 "yaccfile.y"
                           {check_scope_error((yyvsp[0].char_pointer));trace("Address of Identifier\n");}
#line 1963 "yaccfile.tab.c"
    break;

  case 135:
#line 380 "yaccfile.y"
                                        {check_scope_error((yyvsp[0].char_pointer));}
#line 1969 "yaccfile.tab.c"
    break;

  case 136:
#line 381 "yaccfile.y"
                                        {check_scope_error((yyvsp[-1].char_pointer));}
#line 1975 "yaccfile.tab.c"
    break;

  case 137:
#line 382 "yaccfile.y"
                                        {check_scope_error((yyvsp[0].char_pointer));}
#line 1981 "yaccfile.tab.c"
    break;

  case 138:
#line 383 "yaccfile.y"
                                        {check_scope_error((yyvsp[-1].char_pointer));}
#line 1987 "yaccfile.tab.c"
    break;


#line 1991 "yaccfile.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 387 "yaccfile.y"


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
