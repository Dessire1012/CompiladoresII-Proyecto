#ifndef __EXPR_PARSER_HPP__
#define __EXPR_PARSER_HPP__
#include <iostream>

#include "ExprLexer.hpp"
#include <vector>
#include <unordered_map>
#include <iostream>
#include <fstream>

class ExprParser {
public:
    ExprParser(ExprLexer& lexer, const std::string& codeASM)
      : lexer(lexer), codeASM(codeASM)
    {}

    int parse();

    ExprLexer& getLexer() const
    { return lexer; }

    void createAsm(const std::string& program);

private:
    ExprLexer& lexer;
    const std::string& codeASM;
    std::vector<ASTNode*> stmts;
};
#endif