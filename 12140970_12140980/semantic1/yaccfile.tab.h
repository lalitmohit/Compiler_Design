/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 111 "yaccfile.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACCFILE_TAB_H_INCLUDED  */
