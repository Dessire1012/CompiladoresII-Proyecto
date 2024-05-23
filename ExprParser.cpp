#include "ExprParser.hpp"
#include "ExprParserImpl.hpp"

int ExprParser::parse()
{
    return yyparse(*this);
}
