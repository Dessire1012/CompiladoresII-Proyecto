#ifndef __EXPR_PARSER_HPP__
#define __EXPR_PARSER_HPP__
#include <iostream>

#include "ExprLexer.hpp"

class ExprParser {
public:
    ExprParser(ExprLexer& lexer) :lexer(lexer){
       
    }

    int parse();

    ExprLexer& getLexer() const
    { return lexer; }

    double constValue(const std::string& cname) const;

    void addVal(const std::string& key, double value) {
        vars[key] = value;
    }

    double getVal(const std::string& key) {
        return vars[key];
    }

    double printVal(const std::string& key) {
        std::cout << vars[key] << "\n";
        return vars[key];
    }

    std::string printS (const std::string& cadena) {
        std::cout << cadena << "\n";
        return cadena;
    }

private:
    ExprLexer& lexer;
    std::unordered_map<std::string, double> vars;
};
#endif
