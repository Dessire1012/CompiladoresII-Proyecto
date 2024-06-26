/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 7 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"


#include <iostream>
#include <stdexcept>
#include "ExprLexer.hpp"
#include "ExprParser.hpp"

#define yylex(v) static_cast<int>(parser.getLexer().nextToken(v))

void yyerror(const ExprParser& parser, const char *msg)
{
      throw std::runtime_error(msg);
}


#line 84 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"




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

#include "ExprParserImpl.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OpAdd = 3,                      /* "+"  */
  YYSYMBOL_OpSub = 4,                      /* "-"  */
  YYSYMBOL_OpMult = 5,                     /* "*"  */
  YYSYMBOL_OpenPar = 6,                    /* "("  */
  YYSYMBOL_ClosePar = 7,                   /* ")"  */
  YYSYMBOL_Number = 8,                     /* "number"  */
  YYSYMBOL_Assign = 9,                     /* "<-"  */
  YYSYMBOL_ID = 10,                        /* "ID"  */
  YYSYMBOL_Entero = 11,                    /* "Entero"  */
  YYSYMBOL_Escriba = 12,                   /* "Escriba"  */
  YYSYMBOL_Comma = 13,                     /* ","  */
  YYSYMBOL_OpenBracket = 14,               /* "["  */
  YYSYMBOL_CloseBracket = 15,              /* "]"  */
  YYSYMBOL_Colon = 16,                     /* ":"  */
  YYSYMBOL_Lt = 17,                        /* "<"  */
  YYSYMBOL_Gt = 18,                        /* ">"  */
  YYSYMBOL_Eq = 19,                        /* "="  */
  YYSYMBOL_Neq = 20,                       /* "<>"  */
  YYSYMBOL_Leq = 21,                       /* "<="  */
  YYSYMBOL_Geq = 22,                       /* ">="  */
  YYSYMBOL_Inicio = 23,                    /* "Inicio"  */
  YYSYMBOL_Fin = 24,                       /* "Fin"  */
  YYSYMBOL_Caracter = 25,                  /* "Caracter"  */
  YYSYMBOL_Booleano = 26,                  /* "Booleano"  */
  YYSYMBOL_Cadena = 27,                    /* "Cadena"  */
  YYSYMBOL_Char = 28,                      /* "Char"  */
  YYSYMBOL_Arreglo = 29,                   /* "Arreglo"  */
  YYSYMBOL_De = 30,                        /* "De"  */
  YYSYMBOL_Funcion = 31,                   /* "Funcion"  */
  YYSYMBOL_Procedimiento = 32,             /* "Procedimiento"  */
  YYSYMBOL_Var = 33,                       /* "Var"  */
  YYSYMBOL_Si = 34,                        /* "Si"  */
  YYSYMBOL_Entonces = 35,                  /* "Entonces"  */
  YYSYMBOL_Sino = 36,                      /* "Sino"  */
  YYSYMBOL_SinoSi = 37,                    /* "Sino Si"  */
  YYSYMBOL_Para = 38,                      /* "Para"  */
  YYSYMBOL_Mientras = 39,                  /* "Mientras"  */
  YYSYMBOL_Haga = 40,                      /* "Haga"  */
  YYSYMBOL_Llamar = 41,                    /* "Llamar"  */
  YYSYMBOL_Repita = 42,                    /* "Repita"  */
  YYSYMBOL_Hasta = 43,                     /* "Hasta"  */
  YYSYMBOL_Caso = 44,                      /* "Caso"  */
  YYSYMBOL_O = 45,                         /* "O"  */
  YYSYMBOL_Y = 46,                         /* "Y"  */
  YYSYMBOL_No = 47,                        /* "No"  */
  YYSYMBOL_Div = 48,                       /* "Div"  */
  YYSYMBOL_Mod = 49,                       /* "Mod"  */
  YYSYMBOL_Lea = 50,                       /* "Lea"  */
  YYSYMBOL_Retorne = 51,                   /* "Retorne"  */
  YYSYMBOL_Tipo = 52,                      /* "Tipo"  */
  YYSYMBOL_Es = 53,                        /* "Es"  */
  YYSYMBOL_Registro = 54,                  /* "Registro"  */
  YYSYMBOL_Archivo = 55,                   /* "Archivo"  */
  YYSYMBOL_Secuencial = 56,                /* "Secuencial"  */
  YYSYMBOL_Abrir = 57,                     /* "Abrir"  */
  YYSYMBOL_Como = 58,                      /* "Como"  */
  YYSYMBOL_Lectura = 59,                   /* "Lectura"  */
  YYSYMBOL_Escritura = 60,                 /* "Escritura"  */
  YYSYMBOL_Cerrar = 61,                    /* "Cerrar"  */
  YYSYMBOL_Leer = 62,                      /* "Leer"  */
  YYSYMBOL_Escribir = 63,                  /* "Escribir"  */
  YYSYMBOL_Verdadero = 64,                 /* "Verdadero"  */
  YYSYMBOL_Falso = 65,                     /* "Falso"  */
  YYSYMBOL_Caret = 66,                     /* "^"  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_input = 68,                     /* input  */
  YYSYMBOL_start = 69,                     /* start  */
  YYSYMBOL_declarationList = 70,           /* declarationList  */
  YYSYMBOL_declarations = 71,              /* declarations  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_genDeclaration = 73,            /* genDeclaration  */
  YYSYMBOL_sentencesList = 74,             /* sentencesList  */
  YYSYMBOL_sentence = 75,                  /* sentence  */
  YYSYMBOL_singles = 76,                   /* singles  */
  YYSYMBOL_print = 77,                     /* print  */
  YYSYMBOL_assign = 78,                    /* assign  */
  YYSYMBOL_assignArray = 79,               /* assignArray  */
  YYSYMBOL_bool = 80,                      /* bool  */
  YYSYMBOL_llamar = 81,                    /* llamar  */
  YYSYMBOL_paramList = 82,                 /* paramList  */
  YYSYMBOL_retorne = 83,                   /* retorne  */
  YYSYMBOL_leer = 84,                      /* leer  */
  YYSYMBOL_loops = 85,                     /* loops  */
  YYSYMBOL_if = 86,                        /* if  */
  YYSYMBOL_else = 87,                      /* else  */
  YYSYMBOL_elseIf = 88,                    /* elseIf  */
  YYSYMBOL_for = 89,                       /* for  */
  YYSYMBOL_define = 90,                    /* define  */
  YYSYMBOL_while = 91,                     /* while  */
  YYSYMBOL_types = 92,                     /* types  */
  YYSYMBOL_typeSentence = 93,              /* typeSentence  */
  YYSYMBOL_dataType = 94,                  /* dataType  */
  YYSYMBOL_Id = 95,                        /* Id  */
  YYSYMBOL_prcfucId = 96,                  /* prcfucId  */
  YYSYMBOL_paraT = 97,                     /* paraT  */
  YYSYMBOL_declFuncProc = 98,              /* declFuncProc  */
  YYSYMBOL_procedimiento = 99,             /* procedimiento  */
  YYSYMBOL_procedimientoBody = 100,        /* procedimientoBody  */
  YYSYMBOL_funcion = 101,                  /* funcion  */
  YYSYMBOL_funcionBody = 102,              /* funcionBody  */
  YYSYMBOL_funcionDeclList = 103,          /* funcionDeclList  */
  YYSYMBOL_boolExpr = 104,                 /* boolExpr  */
  YYSYMBOL_boolTerm = 105,                 /* boolTerm  */
  YYSYMBOL_boolFact = 106,                 /* boolFact  */
  YYSYMBOL_boolOp = 107,                   /* boolOp  */
  YYSYMBOL_expr = 108,                     /* expr  */
  YYSYMBOL_term = 109,                     /* term  */
  YYSYMBOL_factor = 110                    /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   107,   107,   109,   110,   111,   112,   113,   114,   117,
     118,   120,   121,   124,   125,   128,   129,   132,   133,   136,
     137,   139,   140,   141,   142,   143,   144,   147,   148,   149,
     150,   151,   152,   153,   156,   157,   158,   161,   162,   163,
     166,   167,   170,   173,   174,   177,   180,   181,   184,   185,
     186,   189,   190,   191,   194,   195,   198,   201,   204,   207,
     210,   211,   214,   215,   218,   219,   220,   221,   224,   225,
     226,   229,   230,   233,   234,   237,   238,   239,   240,   243,
     244,   245,   246,   250,   253,   254,   255,   258,   261,   262,
     263,   264,   265,   268,   269,   272,   273,   276,   277,   280,
     281,   284,   285,   286,   287,   288,   289,   292,   293,   294,
     297,   298,   299,   300,   303,   304,   305
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"+\"", "\"-\"",
  "\"*\"", "\"(\"", "\")\"", "\"number\"", "\"<-\"", "\"ID\"",
  "\"Entero\"", "\"Escriba\"", "\",\"", "\"[\"", "\"]\"", "\":\"", "\"<\"",
  "\">\"", "\"=\"", "\"<>\"", "\"<=\"", "\">=\"", "\"Inicio\"", "\"Fin\"",
  "\"Caracter\"", "\"Booleano\"", "\"Cadena\"", "\"Char\"", "\"Arreglo\"",
  "\"De\"", "\"Funcion\"", "\"Procedimiento\"", "\"Var\"", "\"Si\"",
  "\"Entonces\"", "\"Sino\"", "\"Sino Si\"", "\"Para\"", "\"Mientras\"",
  "\"Haga\"", "\"Llamar\"", "\"Repita\"", "\"Hasta\"", "\"Caso\"", "\"O\"",
  "\"Y\"", "\"No\"", "\"Div\"", "\"Mod\"", "\"Lea\"", "\"Retorne\"",
  "\"Tipo\"", "\"Es\"", "\"Registro\"", "\"Archivo\"", "\"Secuencial\"",
  "\"Abrir\"", "\"Como\"", "\"Lectura\"", "\"Escritura\"", "\"Cerrar\"",
  "\"Leer\"", "\"Escribir\"", "\"Verdadero\"", "\"Falso\"", "\"^\"",
  "$accept", "input", "start", "declarationList", "declarations",
  "declaration", "genDeclaration", "sentencesList", "sentence", "singles",
  "print", "assign", "assignArray", "bool", "llamar", "paramList",
  "retorne", "leer", "loops", "if", "else", "elseIf", "for", "define",
  "while", "types", "typeSentence", "dataType", "Id", "prcfucId", "paraT",
  "declFuncProc", "procedimiento", "procedimientoBody", "funcion",
  "funcionBody", "funcionDeclList", "boolExpr", "boolTerm", "boolFact",
  "boolOp", "expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,  -196,  -196,   531,  -196,  -196,    11,    49,    64,    66,
     148,  -196,   135,  -196,   115,     6,  -196,   106,   142,  -196,
    -196,   198,    61,   234,   169,   234,   173,   181,   253,   238,
    -196,  -196,   139,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,   253,    27,    28,   156,  -196,   531,   152,  -196,
     172,   203,   531,   200,  -196,  -196,   531,  -196,  -196,    13,
     253,   253,  -196,    14,  -196,  -196,  -196,  -196,   218,     0,
    -196,   234,    73,    77,   155,  -196,  -196,   541,   208,   185,
     191,  -196,   225,   218,  -196,  -196,   124,    53,    85,   569,
    -196,   577,   531,  -196,   328,   256,  -196,   531,  -196,   274,
     531,   292,  -196,  -196,  -196,  -196,   218,    58,   266,   567,
     253,   253,   253,   253,   253,   253,     1,   594,   567,   253,
     531,   234,   234,   253,   253,   253,   253,   253,   253,   253,
     253,   531,   253,  -196,   218,   202,   227,   162,   231,   631,
      91,   239,  -196,   218,   241,   122,   311,   259,  -196,  -196,
     317,  -196,   336,  -196,   258,  -196,  -196,   177,   271,    79,
       0,     0,  -196,  -196,  -196,  -196,   116,   103,   155,  -196,
     218,   218,   218,   218,   218,   218,   218,    50,   354,   121,
     569,   569,   263,   269,   277,   280,   577,  -196,   531,   597,
    -196,   253,  -196,  -196,    16,  -196,  -196,    60,  -196,   265,
     531,   234,   -10,  -196,   531,   261,  -196,   291,   607,   288,
     297,  -196,   569,  -196,   218,   372,   531,   614,   278,  -196,
    -196,   218,  -196,   390,   112,   275,  -196,   408,  -196,  -196,
     531,   152,   287,   281,   302,   624,  -196,   426,   531,   290,
     284,   531,  -196,   294,   444,  -196,  -196,   531,   569,   298,
     531,   313,  -196,   462,   569,  -196,   531,  -196,  -196,   480,
     324,   569,   498,   531,  -196,  -196,  -196,  -196,   327,  -196,
     516,  -196,  -196
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    67,    64,     0,    65,    66,     0,     0,     0,     0,
       0,     2,     0,    10,    13,     0,    61,     0,     0,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,    21,    22,    23,    24,    25,    26,    20,    48,
      49,    50,     0,     0,     0,     0,     1,     0,     9,    12,
       0,     0,     0,     0,    60,    16,     0,    81,    82,     0,
       0,     0,   115,    68,    27,    29,   116,    69,    28,   109,
     113,     0,    68,     0,    96,    98,   100,     0,     0,     0,
       0,    42,    46,    45,     3,    17,     0,     0,     0,     0,
      87,     0,     0,    83,     0,     0,    11,     0,    15,     0,
       0,     0,    35,    40,    41,    36,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    30,     0,     0,    68,     0,     0,
       0,     0,    74,    44,     0,     0,     0,     0,    62,     4,
       0,     5,     0,     7,     0,   114,    71,     0,    44,     0,
     107,   108,   110,   111,   112,    99,     0,     0,    95,    97,
     101,   102,   103,   104,   105,   106,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      84,     0,     8,     6,     0,    72,    33,    32,    70,     0,
       0,     0,     0,    55,     0,     0,    47,     0,     0,     0,
       0,    75,     0,    73,    43,     0,     0,     0,     0,    38,
      39,    37,    51,     0,     0,     0,    54,     0,    59,    14,
       0,    93,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,    53,     0,     0,    10,    94,     0,     0,     0,
       0,     0,    86,     0,     0,    52,    56,    57,    91,     0,
       0,     0,     0,     0,    85,    63,    90,    77,     0,    92,
       0,    78,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,     3,  -196,   -11,  -196,   -45,   -29,  -196,
    -196,  -196,  -196,   146,  -196,   109,  -196,  -196,  -196,  -196,
    -196,   145,  -196,  -196,  -196,  -196,   329,   -79,   333,  -196,
     179,   351,   -12,  -196,    -5,  -196,  -195,   -21,   248,   249,
    -196,   128,   123,   178
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,   231,    48,    13,    14,    29,    30,    31,
      32,    33,    34,   105,    35,   157,    36,    37,    38,    39,
     202,   203,    40,    79,    41,    15,    16,    17,    66,    67,
     142,    18,    19,    93,    20,    90,   232,    73,    74,    75,
      76,    77,    69,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    49,    95,    12,    80,   113,    57,    99,   165,   141,
     144,   101,   141,    58,   225,   148,     1,     2,    53,    61,
     109,    62,    61,    72,    62,    42,    72,   201,   110,    52,
     141,     4,     5,    88,    91,     6,   246,    96,    57,   141,
     251,   102,    49,    89,   219,    58,   121,   146,   114,   115,
     116,    92,   150,   111,   112,   152,   111,   112,     9,    43,
     184,   111,   112,   -70,   -70,   -70,    85,    61,   135,    62,
      85,    63,    85,   154,    44,   167,    45,   103,   104,   118,
     103,   104,   111,   112,     1,     2,   178,   119,    64,    65,
     204,    61,   136,    62,   197,   137,     2,     3,   185,     4,
       5,   207,   208,     6,   186,     7,     8,   141,   -70,   -70,
       4,     5,   120,    21,   138,    22,    55,    85,   139,   111,
     112,    85,   121,    85,   111,   112,     9,   199,    51,   189,
      61,   198,    62,   235,    72,   186,   206,    23,    85,   200,
     201,    24,    25,   215,    26,     1,     2,   241,    46,    85,
      68,   133,    86,    27,    28,   223,    83,   121,    47,   227,
       4,     5,     1,     2,     6,    56,     7,     8,   118,   260,
      87,   237,   -67,     7,     8,   265,   119,     4,     5,    78,
     224,     6,   268,    72,   195,   244,    85,   106,   107,   108,
     186,    82,   217,   253,    85,    97,   256,   140,    85,   117,
     145,   122,   259,     7,     8,   262,    49,    59,    85,    94,
       1,     2,    60,    98,   134,    85,   143,   129,   270,   143,
     245,   111,   112,   100,    85,     4,     5,    85,   130,     6,
      85,   131,   180,    85,   160,   161,   121,   158,   159,   132,
      71,    85,    62,   181,    72,   182,   143,   166,    21,   187,
      22,   170,   171,   172,   173,   174,   175,   176,   177,    61,
     179,    62,    84,    72,   188,   191,    21,   194,    22,   111,
     112,   209,    23,   155,   111,   112,    24,    25,   196,    26,
     149,   111,   112,   210,    21,   239,    22,   211,    27,    28,
      23,   162,   163,   164,    24,    25,   212,    26,   151,   222,
     228,   229,    21,   233,    22,   234,    27,    28,    23,   242,
     247,   248,    24,    25,   214,    26,   153,   249,   255,   218,
     254,    21,   221,    22,    27,    28,    23,    21,   261,    22,
      24,    25,   257,    26,   267,   190,   263,   271,     1,     2,
     220,   192,    27,    28,    54,    23,    21,   226,    22,    24,
      25,    23,    26,     4,     5,    24,    25,   147,    26,    81,
     193,    27,    28,    50,    21,   213,    22,    27,    28,   168,
      23,   169,     0,     0,    24,    25,     0,    26,   205,     0,
       0,     0,    21,     0,    22,     0,    27,    28,    23,     0,
       0,     0,    24,    25,     0,    26,   236,     0,     0,     0,
      21,     0,    22,     0,    27,    28,    23,     0,     0,     0,
      24,    25,     0,    26,   240,     0,     0,     0,    21,     0,
      22,     0,    27,    28,    23,     0,     0,     0,    24,    25,
       0,    26,   243,     0,     0,     0,    21,     0,    22,     0,
      27,    28,    23,     0,     0,     0,    24,    25,     0,    26,
     252,     0,     0,     0,    21,     0,    22,     0,    27,    28,
      23,     0,     0,     0,    24,    25,     0,    26,   258,     0,
       0,     0,    21,     0,    22,     0,    27,    28,    23,     0,
       0,     0,    24,    25,     0,    26,   264,     0,     0,     0,
      21,     0,    22,     0,    27,    28,    23,     0,     0,     0,
      24,    25,     0,    26,   266,     0,     0,     0,    21,     0,
      22,     0,    27,    28,    23,     0,     0,     0,    24,    25,
       0,    26,   269,     0,     0,     0,    21,     0,    22,     0,
      27,    28,    23,     0,     0,     0,    24,    25,     0,    26,
     272,    21,     0,    22,   111,   112,     0,     0,    27,    28,
      23,     0,     0,     0,    24,    25,     0,    26,   123,   124,
     125,   126,   127,   128,     0,    23,    27,    28,     0,    24,
      25,     0,    26,    61,   156,    62,     0,   137,     2,     1,
       2,    27,    28,    61,     0,    62,     0,   137,     2,     0,
       0,     0,     4,     5,     4,     5,   138,   111,   112,     0,
     139,   155,     4,     5,     0,     0,   138,     1,     2,     0,
     139,   123,   124,   125,   126,   127,   128,     1,     2,     0,
     216,     0,     4,     5,     1,     2,     6,     0,     0,     0,
     230,     0,     4,     5,     1,     2,     6,   238,     0,     4,
       5,     1,     2,     6,     0,     0,     0,   250,     0,     4,
       5,     0,     0,     6,     0,     0,     4,     5,     0,     0,
     183
};

static const yytype_int16 yycheck[] =
{
      29,    12,    47,     0,    25,     5,    18,    52,     7,    88,
      89,    56,    91,    18,    24,    94,    10,    11,    15,     6,
       6,     8,     6,    10,     8,    14,    10,    37,    14,    23,
     109,    25,    26,     6,     6,    29,   231,    48,    50,   118,
     235,    28,    53,    16,    28,    50,    45,    92,    48,    49,
      71,    23,    97,     3,     4,   100,     3,     4,    52,    10,
     139,     3,     4,     3,     4,     5,    95,     6,    15,     8,
      99,    10,   101,    15,    10,   120,    10,    64,    65,     6,
      64,    65,     3,     4,    10,    11,   131,    14,    27,    28,
      40,     6,     7,     8,    15,    10,    11,    23,     7,    25,
      26,   180,   181,    29,    13,    31,    32,   186,    48,    49,
      25,    26,    35,    10,    29,    12,    10,   146,    33,     3,
       4,   150,    45,   152,     3,     4,    52,    24,    13,     7,
       6,    15,     8,   212,    10,    13,    15,    34,   167,    36,
      37,    38,    39,   188,    41,    10,    11,    35,     0,   178,
      22,    27,    13,    50,    51,   200,    28,    45,    23,   204,
      25,    26,    10,    11,    29,    23,    31,    32,     6,   248,
      42,   216,    10,    31,    32,   254,    14,    25,    26,    10,
     201,    29,   261,    10,     7,   230,   215,    59,    60,    61,
      13,    10,   189,   238,   223,    23,   241,    88,   227,    71,
      91,    46,   247,    31,    32,   250,   217,     9,   237,    53,
      10,    11,    14,    10,    86,   244,    88,     9,   263,    91,
     231,     3,     4,    23,   253,    25,    26,   256,    43,    29,
     259,    40,    30,   262,   111,   112,    45,   109,   110,    14,
       6,   270,     8,    16,    10,    14,   118,   119,    10,    10,
      12,   123,   124,   125,   126,   127,   128,   129,   130,     6,
     132,     8,    24,    10,    23,     6,    10,     9,    12,     3,
       4,     8,    34,     7,     3,     4,    38,    39,     7,    41,
      24,     3,     4,    14,    10,     7,    12,    10,    50,    51,
      34,   113,   114,   115,    38,    39,    16,    41,    24,    34,
      39,    10,    10,    15,    12,     8,    50,    51,    34,    34,
      23,    30,    38,    39,   186,    41,    24,    15,    34,   191,
      30,    10,   194,    12,    50,    51,    34,    10,    30,    12,
      38,    39,    38,    41,    10,    24,    23,    10,    10,    11,
     194,    24,    50,    51,    15,    34,    10,   202,    12,    38,
      39,    34,    41,    25,    26,    38,    39,    29,    41,    26,
      24,    50,    51,    12,    10,   186,    12,    50,    51,   121,
      34,   122,    -1,    -1,    38,    39,    -1,    41,    24,    -1,
      -1,    -1,    10,    -1,    12,    -1,    50,    51,    34,    -1,
      -1,    -1,    38,    39,    -1,    41,    24,    -1,    -1,    -1,
      10,    -1,    12,    -1,    50,    51,    34,    -1,    -1,    -1,
      38,    39,    -1,    41,    24,    -1,    -1,    -1,    10,    -1,
      12,    -1,    50,    51,    34,    -1,    -1,    -1,    38,    39,
      -1,    41,    24,    -1,    -1,    -1,    10,    -1,    12,    -1,
      50,    51,    34,    -1,    -1,    -1,    38,    39,    -1,    41,
      24,    -1,    -1,    -1,    10,    -1,    12,    -1,    50,    51,
      34,    -1,    -1,    -1,    38,    39,    -1,    41,    24,    -1,
      -1,    -1,    10,    -1,    12,    -1,    50,    51,    34,    -1,
      -1,    -1,    38,    39,    -1,    41,    24,    -1,    -1,    -1,
      10,    -1,    12,    -1,    50,    51,    34,    -1,    -1,    -1,
      38,    39,    -1,    41,    24,    -1,    -1,    -1,    10,    -1,
      12,    -1,    50,    51,    34,    -1,    -1,    -1,    38,    39,
      -1,    41,    24,    -1,    -1,    -1,    10,    -1,    12,    -1,
      50,    51,    34,    -1,    -1,    -1,    38,    39,    -1,    41,
      24,    10,    -1,    12,     3,     4,    -1,    -1,    50,    51,
      34,    -1,    -1,    -1,    38,    39,    -1,    41,    17,    18,
      19,    20,    21,    22,    -1,    34,    50,    51,    -1,    38,
      39,    -1,    41,     6,     7,     8,    -1,    10,    11,    10,
      11,    50,    51,     6,    -1,     8,    -1,    10,    11,    -1,
      -1,    -1,    25,    26,    25,    26,    29,     3,     4,    -1,
      33,     7,    25,    26,    -1,    -1,    29,    10,    11,    -1,
      33,    17,    18,    19,    20,    21,    22,    10,    11,    -1,
      23,    -1,    25,    26,    10,    11,    29,    -1,    -1,    -1,
      23,    -1,    25,    26,    10,    11,    29,    23,    -1,    25,
      26,    10,    11,    29,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    25,    26,    -1,    -1,
      29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    11,    23,    25,    26,    29,    31,    32,    52,
      68,    69,    70,    72,    73,    92,    93,    94,    98,    99,
     101,    10,    12,    34,    38,    39,    41,    50,    51,    74,
      75,    76,    77,    78,    79,    81,    83,    84,    85,    86,
      89,    91,    14,    10,    10,    10,     0,    23,    71,    72,
      98,    13,    23,    70,    93,    10,    23,    99,   101,     9,
      14,     6,     8,    10,    27,    28,    95,    96,   108,   109,
     110,     6,    10,   104,   105,   106,   107,   108,    10,    90,
     104,    95,    10,   108,    24,    75,    13,   108,     6,    16,
     102,     6,    23,   100,    53,    74,    72,    23,    10,    74,
      23,    74,    28,    64,    65,    80,   108,   108,   108,     6,
      14,     3,     4,     5,    48,    49,   104,   108,     6,    14,
      35,    45,    46,    17,    18,    19,    20,    21,    22,     9,
      43,    40,    14,    27,   108,    15,     7,    10,    29,    33,
      82,    94,    97,   108,    94,    82,    74,    29,    94,    24,
      74,    24,    74,    24,    15,     7,     7,    82,   108,   108,
     109,   109,   110,   110,   110,     7,   108,    74,   105,   106,
     108,   108,   108,   108,   108,   108,   108,   108,    74,   108,
      30,    16,    14,    29,    94,     7,    13,    10,    23,     7,
      24,     6,    24,    24,     9,     7,     7,    15,    15,    24,
      36,    37,    87,    88,    40,    24,    15,    94,    94,     8,
      14,    10,    16,    97,   108,    74,    23,    70,   108,    28,
      80,   108,    34,    74,   104,    24,    88,    74,    39,    10,
      23,    70,   103,    15,     8,    94,    24,    74,    23,     7,
      24,    35,    34,    24,    74,    72,   103,    23,    30,    15,
      23,   103,    24,    74,    30,    34,    74,    38,    24,    74,
      94,    30,    74,    23,    24,    94,    24,    10,    94,    24,
      74,    10,    24
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    69,    69,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    79,    79,    79,
      80,    80,    81,    82,    82,    83,    84,    84,    85,    85,
      85,    86,    86,    86,    87,    87,    88,    89,    90,    91,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    96,    82,    82,    97,    97,    97,    97,    98,
      98,    98,    98,    99,   100,   100,   100,   101,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   107,   107,   108,   108,   108,
     109,   109,   109,   109,   110,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     4,     4,     5,     4,     5,     2,
       1,     2,     1,     1,     7,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     3,     5,     5,     3,     3,     3,     6,     6,     6,
       1,     1,     2,     3,     1,     2,     2,     5,     1,     1,
       1,     6,     8,     7,     2,     1,     4,     8,     3,     6,
       2,     1,     4,     9,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     3,     1,     3,     2,     7,     8,     1,
       1,     2,     2,     3,     3,     7,     6,     3,     5,     9,
       8,     7,     8,     1,     2,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (parser, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ExprParser& parser)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (parser);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ExprParser& parser)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parser);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, ExprParser& parser)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ExprParser& parser)
{
  YY_USE (yyvaluep);
  YY_USE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (ExprParser& parser)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* input: start  */
#line 107 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
             { parser.createAsm(yyvsp[0]->genProgramCode()); }
#line 1727 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 4: /* start: declarationList "Inicio" sentencesList "Fin"  */
#line 110 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                                 { yyval = new Program((DeclareListStmt*)yyvsp[-3], (Stmt*)yyvsp[-1]); }
#line 1733 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 9: /* declarationList: declarationList declarations  */
#line 117 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                              {  }
#line 1739 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 10: /* declarationList: declaration  */
#line 118 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                              {}
#line 1745 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 11: /* declarations: declarations declaration  */
#line 120 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                        { yyval = new DeclareListStmt((DeclareListStmt*)yyvsp[-1], (DeclareStmt*)yyvsp[0]);  }
#line 1751 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 12: /* declarations: declaration  */
#line 121 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                    { yyval = yyvsp[0]; }
#line 1757 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 13: /* declaration: genDeclaration  */
#line 124 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                            { yyval = yyvsp[0]; }
#line 1763 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 15: /* genDeclaration: genDeclaration "," "ID"  */
#line 128 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                        { yyval = new DeclareList((DeclareList*)yyvsp[-2], new DeclareVar((IdExpr*)yyvsp[0])); }
#line 1769 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 16: /* genDeclaration: dataType "ID"  */
#line 129 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                    { yyval = new DeclareVar((IdExpr*)yyvsp[0]); }
#line 1775 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 17: /* sentencesList: sentencesList sentence  */
#line 132 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                      { yyval = new BlockStmt(yyvsp[-1], yyvsp[0]); }
#line 1781 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 18: /* sentencesList: sentence  */
#line 133 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                 { yyval = yyvsp[0]; }
#line 1787 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 28: /* print: "Escriba" expr  */
#line 148 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                     { yyval = new PrintStmt((Expr*)yyvsp[0]); }
#line 1793 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 32: /* print: "Escriba" "ID" "[" expr "]"  */
#line 152 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                                  { }
#line 1799 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 34: /* assign: "ID" "<-" expr  */
#line 156 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                       {  yyval = new AssignStmt((IdExpr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 1805 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 51: /* if: "Si" boolExpr "Entonces" sentencesList "Fin" "Si"  */
#line 189 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                               { yyval = new IfStmt((Expr*)yyvsp[-4], (Stmt*)yyvsp[-2], (Stmt*)nullptr); }
#line 1811 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 52: /* if: "Si" boolExpr "Entonces" sentencesList "Sino" sentencesList "Fin" "Si"  */
#line 190 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                                                   { yyval = new IfStmt((Expr*)yyvsp[-6], (Stmt*)yyvsp[-4], (Stmt*)yyvsp[-2]); }
#line 1817 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 53: /* if: "Si" boolExpr "Entonces" sentencesList else "Fin" "Si"  */
#line 191 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                                    { yyval = new IfStmt((Expr*)yyvsp[-5], (Stmt*)yyvsp[-3], (Stmt*)yyvsp[-2]); }
#line 1823 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 54: /* else: else elseIf  */
#line 194 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                  { yyval = new BlockStmt((Stmt*)yyvsp[-1], (Stmt*)yyvsp[0]); }
#line 1829 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 55: /* else: elseIf  */
#line 195 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
               { yyval = yyvsp[0]; }
#line 1835 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 57: /* for: "Para" define "Hasta" expr "Haga" sentencesList "Fin" "Para"  */
#line 201 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                                        { yyval =new ForStmt((AssignStmt*)yyvsp[-6], (Expr*)yyvsp[-4], (Stmt*)yyvsp[-2]); }
#line 1841 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 59: /* while: "Mientras" boolExpr "Haga" sentencesList "Fin" "Mientras"  */
#line 207 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                                         { yyval = new  WhileStmt((Expr*)yyvsp[-4], (Stmt*)yyvsp[-2]); }
#line 1847 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 95: /* boolExpr: boolExpr "O" boolTerm  */
#line 272 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                              { }
#line 1853 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 96: /* boolExpr: boolTerm  */
#line 273 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                 {  yyval = yyvsp[0]; }
#line 1859 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 97: /* boolTerm: boolTerm "Y" boolFact  */
#line 276 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                              { }
#line 1865 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 98: /* boolTerm: boolFact  */
#line 277 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                 {  yyval = yyvsp[0]; }
#line 1871 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 99: /* boolFact: "(" boolExpr ")"  */
#line 280 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                                    { }
#line 1877 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 100: /* boolFact: boolOp  */
#line 281 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
               {  yyval = yyvsp[0]; }
#line 1883 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 101: /* boolOp: expr "<" expr  */
#line 284 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                     { }
#line 1889 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 102: /* boolOp: expr ">" expr  */
#line 285 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                     { }
#line 1895 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 103: /* boolOp: expr "=" expr  */
#line 286 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                     { }
#line 1901 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 104: /* boolOp: expr "<>" expr  */
#line 287 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                      { }
#line 1907 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 105: /* boolOp: expr "<=" expr  */
#line 288 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                      { }
#line 1913 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 106: /* boolOp: expr ">=" expr  */
#line 289 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                      { }
#line 1919 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 107: /* expr: expr "+" term  */
#line 292 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                      {  yyval = new AddExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 1925 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 108: /* expr: expr "-" term  */
#line 293 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                        {  yyval = new SubExpr((Expr*)yyvsp[-2], (Expr*)yyvsp[0]); }
#line 1931 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 109: /* expr: term  */
#line 294 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
             { yyval = yyvsp[0]; }
#line 1937 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 110: /* term: term "*" factor  */
#line 297 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                         { }
#line 1943 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 111: /* term: term "Div" factor  */
#line 298 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                        { }
#line 1949 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 112: /* term: term "Mod" factor  */
#line 299 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                        { }
#line 1955 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 113: /* term: factor  */
#line 300 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
               {  yyval = yyvsp[0]; }
#line 1961 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 114: /* factor: "(" expr ")"  */
#line 303 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
                              { }
#line 1967 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 115: /* factor: "number"  */
#line 304 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
               {  yyval = yyvsp[0]; }
#line 1973 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;

  case 116: /* factor: Id  */
#line 305 "/home/jorge/CompiladoresII-Proyecto/ExprParserImpl.y"
            {  yyval = yyvsp[0]; }
#line 1979 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"
    break;


#line 1983 "/home/jorge/CompiladoresII-Proyecto/build/ExprParserImpl.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (parser, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                      yytoken, &yylval, parser);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

