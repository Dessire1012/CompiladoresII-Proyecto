/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_DESSI_DOWNLOADS_COMPILADORESII_PROYECTO_BUILD_EXPRPARSERIMPL_HPP_INCLUDED
# define YY_YY_HOME_DESSI_DOWNLOADS_COMPILADORESII_PROYECTO_BUILD_EXPRPARSERIMPL_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 23 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprParserImpl.y"

#include <string>
#include <variant>
#include "ExprAst.hpp"

class ExprParser; // Forward declaration

using ParserValueType = ASTNode*;

#define YYSTYPE ParserValueType
#define YYSTYPE_IS_DECLARED 1


#line 63 "/home/dessi/Downloads/CompiladoresII-Proyecto/build/ExprParserImpl.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OpAdd = 258,                   /* "+"  */
    OpSub = 259,                   /* "-"  */
    OpMult = 260,                  /* "*"  */
    OpenPar = 261,                 /* "("  */
    ClosePar = 262,                /* ")"  */
    Number = 263,                  /* "number"  */
    Assign = 264,                  /* "<-"  */
    ID = 265,                      /* "ID"  */
    Entero = 266,                  /* "Entero"  */
    Escriba = 267,                 /* "Escriba"  */
    Comma = 268,                   /* ","  */
    OpenBracket = 269,             /* "["  */
    CloseBracket = 270,            /* "]"  */
    Colon = 271,                   /* ":"  */
    Lt = 272,                      /* "<"  */
    Gt = 273,                      /* ">"  */
    Eq = 274,                      /* "="  */
    Neq = 275,                     /* "<>"  */
    Leq = 276,                     /* "<="  */
    Geq = 277,                     /* ">="  */
    Inicio = 278,                  /* "Inicio"  */
    Fin = 279,                     /* "Fin"  */
    Caracter = 280,                /* "Caracter"  */
    Booleano = 281,                /* "Booleano"  */
    Cadena = 282,                  /* "Cadena"  */
    Char = 283,                    /* "Char"  */
    Arreglo = 284,                 /* "Arreglo"  */
    De = 285,                      /* "De"  */
    Funcion = 286,                 /* "Funcion"  */
    Procedimiento = 287,           /* "Procedimiento"  */
    Var = 288,                     /* "Var"  */
    Si = 289,                      /* "Si"  */
    Entonces = 290,                /* "Entonces"  */
    Sino = 291,                    /* "Sino"  */
    SinoSi = 292,                  /* "Sino Si"  */
    Para = 293,                    /* "Para"  */
    Mientras = 294,                /* "Mientras"  */
    Haga = 295,                    /* "Haga"  */
    Llamar = 296,                  /* "Llamar"  */
    Repita = 297,                  /* "Repita"  */
    Hasta = 298,                   /* "Hasta"  */
    Caso = 299,                    /* "Caso"  */
    O = 300,                       /* "O"  */
    Y = 301,                       /* "Y"  */
    No = 302,                      /* "No"  */
    Div = 303,                     /* "Div"  */
    Mod = 304,                     /* "Mod"  */
    Lea = 305,                     /* "Lea"  */
    Retorne = 306,                 /* "Retorne"  */
    Tipo = 307,                    /* "Tipo"  */
    Es = 308,                      /* "Es"  */
    Registro = 309,                /* "Registro"  */
    Archivo = 310,                 /* "Archivo"  */
    Secuencial = 311,              /* "Secuencial"  */
    Abrir = 312,                   /* "Abrir"  */
    Como = 313,                    /* "Como"  */
    Lectura = 314,                 /* "Lectura"  */
    Escritura = 315,               /* "Escritura"  */
    Cerrar = 316,                  /* "Cerrar"  */
    Leer = 317,                    /* "Leer"  */
    Escribir = 318,                /* "Escribir"  */
    Verdadero = 319,               /* "Verdadero"  */
    Falso = 320,                   /* "Falso"  */
    Caret = 321                    /* "^"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (ExprParser& parser);


#endif /* !YY_YY_HOME_DESSI_DOWNLOADS_COMPILADORESII_PROYECTO_BUILD_EXPRPARSERIMPL_HPP_INCLUDED  */
