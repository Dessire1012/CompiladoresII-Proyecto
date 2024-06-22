
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
#include "ExprAst.hpp"

class ExprParser; // Forward declaration

using ParserValueType = ASTNode*;

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
%token SinoSi "Sino Si"
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

input: start { parser.createAsm($1->genProgramCode()); }

start: Inicio sentencesList Fin
      | declarationList Inicio sentencesList Fin { $$ = new Program((DeclareListStmt*)$1, (Stmt*)$3); }
      | types Inicio sentencesList Fin
      | types declarationList Inicio sentencesList Fin
      | declFuncProc Inicio sentencesList Fin
      | declarationList declFuncProc Inicio sentencesList Fin
;

declarationList: declarationList declarations {  }
                | declaration {}

declarations: declarations declaration  { $$ = new DeclareListStmt((DeclareListStmt*)$1, (DeclareStmt*)$2);  }
      | declaration { $$ = $1; }
;

declaration: genDeclaration { $$ = $1; }
      | Arreglo OpenBracket expr CloseBracket De dataType ID
;

genDeclaration: genDeclaration Comma ID { $$ = new DeclareList((DeclareList*)$1, new DeclareVar((IdExpr*)$3)); }
      | dataType ID { $$ = new DeclareVar((IdExpr*)$2); }
;

sentencesList: sentencesList sentence { $$ = new BlockStmt($1, $2); }
      | sentence { $$ = $1; }
;

sentence: singles
           | loops

singles: print
        | assign
        | assignArray
        | llamar
        | retorne
        | leer
;

print: Escriba Cadena
      | Escriba expr { $$ = new PrintStmt((Expr*)$2); }
      | Escriba Char
      | print Comma expr
      | print Comma Cadena
      | Escriba ID OpenBracket expr CloseBracket  { }
      | Escriba ID OpenPar expr ClosePar
;

assign: ID Assign expr {  $$ = new AssignStmt((IdExpr*)$1, (Expr*)$3); }
      | ID Assign Char
      | ID Assign bool
;

assignArray: ID OpenBracket expr CloseBracket Assign expr
      | ID OpenBracket expr CloseBracket Assign Char
      | ID OpenBracket expr CloseBracket Assign bool
;

bool: Verdadero
    | Falso
;

llamar: Llamar Id
;

paramList: paramList Comma expr
         | expr
;

retorne: Retorne expr
;

leer: Lea ID
      | Lea ID OpenBracket expr CloseBracket
;

loops: if
        | for
        | while
;

if: Si boolExpr Entonces sentencesList Fin Si  { $$ = new IfStmt((Expr*)$2, (Stmt*)$4, (Stmt*)nullptr); }
   | Si boolExpr Entonces sentencesList Sino sentencesList Fin Si  { $$ = new IfStmt((Expr*)$2, (Stmt*)$4, (Stmt*)$6); }
   | Si boolExpr Entonces sentencesList else Fin Si { $$ = new IfStmt((Expr*)$2, (Stmt*)$4, (Stmt*)$5); }
;

else: else elseIf { $$ = new BlockStmt((Stmt*)$1, (Stmt*)$2); }
      | elseIf { $$ = $1; }
;

elseIf: SinoSi boolExpr Entonces sentencesList
;

for: Para define Hasta expr Haga sentencesList Fin Para { $$ =new ForStmt((AssignStmt*)$2, (Expr*)$4, (Stmt*)$6); }
;

define: ID Assign expr
;

while: Mientras boolExpr Haga sentencesList Fin Mientras { $$ = new  WhileStmt((Expr*)$2, (Stmt*)$4); }
;

types: types typeSentence
      | typeSentence
;

typeSentence: Tipo ID Es dataType
      | Tipo ID Es Arreglo OpenPar expr ClosePar De dataType
;

dataType: Entero
          | Caracter
          | Booleano
          | ID 
;

Id: ID
  | prcfucId
  | ID OpenBracket expr CloseBracket
;

prcfucId: ID OpenPar ClosePar
      | ID OpenPar paramList ClosePar
;

paramList: paramList Comma paraT
      | paraT
;

paraT: Var dataType ID
      | dataType ID
      | Arreglo OpenBracket Number CloseBracket De dataType ID
      | Var Arreglo OpenBracket Number CloseBracket De dataType ID
;

declFuncProc: declFuncProc procedimiento
      | declFuncProc funcion
      | procedimiento
      | funcion
;

procedimiento: Procedimiento ID Inicio sentencesList Fin
        | Procedimiento ID OpenPar paramList ClosePar declarationList Inicio sentencesList Fin
        | Procedimiento ID OpenPar paramList ClosePar Inicio sentencesList Fin     
;

funcion: Funcion ID Colon dataType Inicio sentencesList Fin 
       | Funcion ID OpenPar paramList ClosePar Colon dataType Inicio sentencesList Fin
       | Funcion ID OpenPar ClosePar Colon dataType Inicio sentencesList Fin
       | Funcion ID OpenPar ClosePar Colon dataType declarationList Inicio sentencesList Fin
       | Funcion ID OpenPar paramList ClosePar Colon dataType declarationList Inicio sentencesList Fin
;

boolExpr: boolExpr O boolTerm { }
      | boolTerm {  $$ = $1; }
;

boolTerm: boolTerm Y boolFact { }
      | boolFact {  $$ = $1; }
;

boolFact: OpenPar boolExpr ClosePar { }
      | boolOp {  $$ = $1; }
;

boolOp: expr Lt expr { }
      | expr Gt expr { }
      | expr Eq expr { }
      | expr Neq expr { }
      | expr Leq expr { }
      | expr Geq expr { }
;

expr: expr OpAdd term {  $$ = new AddExpr((Expr*)$1, (Expr*)$3); }
      | expr OpSub term {  $$ = new SubExpr((Expr*)$1, (Expr*)$3); }
      | term { $$ = $1; }
;

term: term OpMult factor { }
      | term Div factor { }
      | term Mod factor { }
      | factor {  $$ = $1; }
;

factor: OpenPar expr ClosePar { }
      | Number {  $$ = $1; }
      | Id  {  $$ = $1; } 
;