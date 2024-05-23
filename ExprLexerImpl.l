%option noyywrap
%option reentrant
%option yylineno
%option case-insensitive
%option extra-type = "std::istream *"

%{
#include <iostream>
#include <cstdlib>
#include "ExprLexer.hpp"
#include <string>

#define YY_DECL Token ExprLexer::nextTokenHelper(yyscan_t yyscanner, ParserValueType *lval)
#define yyterminate() return Token::Eof

#define YY_INPUT(buf, result, max_size) \
    { \
        auto *in = yyget_extra(yyscanner); \
        in->read(buf, max_size); \
        result = in->gcount(); \
    }
%}

%x comment

%%
[ \t\n]	{  }
"//"[^\n]*\n { }
"/*"    { BEGIN(comment); }
"+"		{ return Token::OpAdd; }
"-"		{ return Token::OpSub; }
"*"		{ return Token::OpMult; }
"("		{ return Token::OpenPar; }
")"		{ return Token::ClosePar; }
"<-"     { return Token::Assign; }
","     { return Token::Comma; }

"["    { return Token::OpenBracket; }   
"]"    { return Token::CloseBracket; }
":"    { return Token::Colon; } 
"<"    { return Token::Lt; } 
">"    { return Token::Gt; }
"="    { return Token::Eq; }
"<>"    { return Token::Neq; } 
"<="    { return Token::Leq; }   
">="    { return Token::Geq; }

-?[0-9]+ { *lval = std::atof(yytext); return Token::Number; }
\".*\" { *lval = std::string(yytext); return Token::Cadena; }
'.' { return Token::Char; }


"escriba" { return Token::Escriba; }
"entero" { return Token::Entero; }
"inicio" { return Token::Inicio; }
"fin" { return Token::Fin; }
"caracter" { return Token::Caracter; }
"booleano" { return Token::Booleano; }

"arreglo" { return Token::Arreglo; }
"de" { return Token::De; }
"funcion" { return Token::Funcion; }
"procedimiento" { return Token::Procedimiento; }
"var" { return Token::Var; }
"si" { return Token::Si; }
"entonces" { return Token::Entonces; }
"sino" { return Token::Sino; }
"para" { return Token::Para; }
"mientras" { return Token::Mientras; }
"haga" { return Token::Haga; }
"llamar" { return Token::Llamar; }
"repita" { return Token::Repita; }
"hasta" { return Token::Hasta; }
"caso" { return Token::Caso; }
"o" { return Token::O; }
"y" { return Token::Y; }
"no" { return Token::No; }
"div" { return Token::Div; }
"mod" { return Token::Mod; }
"lea" { return Token::Lea; }
"retorne" { return Token::Retorne; }
"tipo" { return Token::Tipo; }
"es" { return Token::Es; }
"registro" { return Token::Registro; }
"archivo" { return Token::Archivo; }
"secuencial" { return Token::Secuencial; }
"abrir" { return Token::Abrir; }
"como" { return Token::Como; }
"lectura" { return Token::Lectura; }
"escritura" { return Token::Escritura; }
"cerrar" { return Token::Cerrar; }
"leer" { return Token::Leer; }
"escribir" { return Token::Escribir; }
"verdadero" { return Token::Verdadero; }
"falso" { return Token::Falso; }
"^" { return Token::Caret; }

[a-zA-Z_][a-zA-Z0-9_]*	{ *lval = std::string(yytext); return Token::ID; }
.		{ std::cerr << "Invalid symbol: " << yytext[0] << '\n'; return Token::Error; }

<comment>"*/" { BEGIN(INITIAL); }
<comment>.|\n { /* Nothing */ }
<comment><<EOF>> { std::cerr << "Warning: Block comment without close\n";  }
%%
