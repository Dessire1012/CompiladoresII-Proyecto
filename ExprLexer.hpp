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
    SinoSi = 292,
    
    Para = 293,
    Mientras = 294,
    Haga = 295,
    Llamar = 296,
    Repita = 297,
    Hasta = 298,
    Caso = 299,
    O = 300,
    Y = 301,
    No = 302,
    Div = 303,
    Mod = 304,
    Lea = 305,
    Retorne = 306,
    Tipo = 307,
    Es = 308,
    Registro = 309,
    Archivo = 310,
    Secuencial = 311,
    Abrir = 312,
    Como = 313,
    Lectura = 314,
    Escritura = 315,
    Cerrar = 316,
    Leer = 317,
    Escribir = 318,
    Verdadero = 319,
    Falso = 320,
    Caret = 321
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