
%define parse.error verbose
%define api.pure full

%parse-param {ExprParser& parser}

%code top {

#include <iostream>
#include <stdexcept>
#include "ExprLexer.hpp"
#include "ExprParser.hpp"

#define yylex(v) static_cast<int>(parser.getLexer().nextToken(v))

void yyerror(const ExprParser& parser, const char *msg)
{
      throw std::runtime_error(msg);
}

}

%code requires {
#include <string>
#include <variant>
#include <unordered_map>

class ExprParser; // Forward declaration

using ParserValueType = std::variant<std::string, double>;

#define YYSTYPE ParserValueType
#define YYSTYPE_IS_DECLARED 1

}

%token OpAdd "+" 
%token OpSub "-" 
%token OpMult "*"
%token OpenPar "("
%token ClosePar ")"
%token Number "number"
%token Assign "<-"
%token ID "ID"
%token Entero "Entero"
%token Escriba "Escriba"
%token Comma ","

%token OpenBracket "["
%token CloseBracket "]"
%token Colon ":"
%token Lt "<"
%token Gt ">"
%token Eq "="
%token Neq "<>"
%token Leq "<="
%token Geq ">="

%token Inicio "Inicio"
%token Fin "Fin"
%token Caracter "Caracter"
%token Booleano "Booleano"
%token Cadena "Cadena"
%token Char "Char"
%token Arreglo "Arreglo"

%token De "De"
%token Funcion "Funcion"
%token Procedimiento "Procedimiento"
%token Var "Var"
%token Si "Si"
%token Entonces "Entonces"
%token Sino "Sino"
%token Para "Para"
%token Mientras "Mientras"
%token Haga "Haga"
%token Llamar "Llamar"
%token Repita "Repita"
%token Hasta "Hasta"
%token Caso "Caso"
%token O "O"
%token Y "Y"
%token No "No"
%token Div "Div"
%token Mod "Mod"
%token Lea "Lea"
%token Retorne "Retorne"
%token Tipo "Tipo"
%token Es "Es"
%token Registro "Registro"
%token Archivo "Archivo"
%token Secuencial "Secuencial"
%token Abrir "Abrir"
%token Como "Como"
%token Lectura "Lectura"
%token Escritura "Escritura"
%token Cerrar "Cerrar"
%token Leer "Leer"
%token Escribir "Escribir"
%token Verdadero "Verdadero"
%token Falso "Falso"
%token Caret "^"

%%

input: declarationList inicio
      | inicio
;

inicio: Inicio sentencesList Fin
       | Inicio Fin
       | instancesList Inicio sentencesList Fin
;

declarationList: declarationList declaration
                | declaration
;

declaration: instances
           | Procedimiento proc
           | Funcion func 
           | type
;

instancesList: instancesList instances
                | instances
;

instances: dataT idList
;

dataT: Entero
      | Caracter
      | Booleano
      | arreglo
      | varDataT
      | ID
;

varDataT: Var dataT
;

type: Tipo ID Es typeSpecifier
;

typeSpecifier: Entero
            | Caracter
            | Booleano
            | arreglo
;

idList: idList Comma ID
      | ID
;

func: ID OpenPar procList ClosePar Colon dataT inicio
      | ID Colon dataT inicio
;


proc: ID OpenPar procList ClosePar inicio
      | ID inicio
;

procList: procList Comma dataT ID
        | dataT ID

;

arreglo: Arreglo OpenBracket expr CloseBracket De dataT
;


sentencesList: sentencesList sentence 
             | sentence
;

sentence: loops
         | singles
;

loops: for
      | if
      | while
;

define: ID Assign expr
;

for: Para define Hasta expr Haga sentencesList Fin Para
;


if: Si expr Entonces sentencesList elsePartList Fin Si
;

elsePartList: elsePartList Sino Si expr Entonces sentencesList
           | elsePartList Sino sentencesList
           | 
;

while: Mientras expr Haga sentencesList Fin Mientras
;

singles: print
        | assign
        | llamar
        | retorne
        | leer
        |
;

leer: Lea ID
      | Lea ID OpenBracket expr CloseBracket
;

retorne: Retorne ID listExpr { }
      | Retorne ID { }
      | Retorne listExpr { }
;

llamar: Llamar ID OpenPar paramList ClosePar
      | Llamar ID
;

paramList: paramList Comma expr
         | expr
         |
;

print: Escriba ID { }
      | Escriba Cadena { }
      | Escriba ID  OpenBracket expr CloseBracket  { }
      | Escriba expr { }
      | Escriba ID OpenPar listExpr ClosePar { }
      | Escriba listExpr { }
;

listExpr: listExpr Comma expr
         | listExpr expr
         | expr
         | 
;  

assign: ID Assign assignType { }
      | ID OpenBracket expr CloseBracket Assign assignType { }
      | ID Assign ID OpenPar listExpr ClosePar {}
;

assignType: expr
          | Char
          | bool
;           

bool: Verdadero { }
    | Falso { }
;

expr: expr OpAdd term { }
      | expr OpSub term { }
      | expr Mod term { }
      | expr Div term { }
      | expr Caret term { }
      | expr Lt term { }
      | expr Gt term { }
      | expr Eq term { }
      | expr Neq term { }
      | expr Leq term { }
      | expr Geq term { }
      | expr O term { }
      | expr Y term { }
      | No expr { }
      | term { }
;

term: term OpMult factor { }
      | factor { }
;

factor: OpenPar listExpr ClosePar { }
      | ID OpenBracket expr CloseBracket { }
      | ID OpenPar listExpr ClosePar {}
      | Number { }
      | ID { }
      | Cadena { }
      | Char { }
      | bool { }
;