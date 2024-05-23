#ifndef __ExprLexer_HPP__
#define __ExprLexer_HPP__

#include <iosfwd>
#include <string>
#include "ExprParserImpl.hpp"

enum class Token: int {
    Eof = 0,
    Error = 256,
    Undef = 257,
    OpAdd = 258,
    OpSub = 259,
    OpMult = 260,
    OpenPar = 261,
    ClosePar = 262,
    Number = 263,
    Assign = 264,
    ID = 265,
    Entero = 266,
    Escriba = 267,
    Comma = 268,

    OpenBracket = 269,
    CloseBracket = 270,
    Colon = 271,
    Lt = 272,
    Gt = 273,
    Eq = 274,
    Neq = 275,
    Leq = 276,
    Geq = 277,

    Inicio = 278,
    Fin = 279,
    Caracter = 280,
    Booleano = 281,
    Cadena = 282,
    Char = 283,
    Arreglo = 284,
    
    De = 285,
    Funcion = 286,
    Procedimiento = 287,
    Var = 288,
    Si = 289,
    Entonces = 290,
    Sino = 291,
    Para = 292,
    Mientras = 293,
    Haga = 294,
    Llamar = 295,
    Repita = 296,
    Hasta = 297,
    Caso = 298,
    O = 299,
    Y = 300,
    No = 301,
    Div = 302,
    Mod = 303,
    Lea = 304,
    Retorne = 305,
    Tipo = 306,
    Es = 307,
    Registro = 308,
    Archivo = 309,
    Secuencial = 310,
    Abrir = 311,
    Como = 312,
    Lectura = 313,
    Escritura = 314,
    Cerrar = 315,
    Leer = 316,
    Escribir = 317,
    Verdadero = 318,
    Falso = 319,
    Caret = 320
};

class ExprLexer
{
public:
    using yyscan_t = void*;

    ExprLexer(std::istream& _in);
    ~ExprLexer();

    Token nextToken(ParserValueType *lval)
    { return nextTokenHelper(yyscanner, lval); }

    std::string text() const;

    int getLine() const;

    static const char *tokenString(Token tk);

private:
    Token nextTokenHelper(yyscan_t yyscanner, ParserValueType *lval);
    std::istream& in;
    yyscan_t yyscanner;
};

#endif