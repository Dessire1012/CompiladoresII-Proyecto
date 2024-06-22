#include "ExprParser.hpp"
#include "ExprParserImpl.hpp"

int ExprParser::parse()
{
    return yyparse(*this);
}

void ExprParser::createAsm(const std::string& program)
{
    std::ofstream file;
    
    file.open(codeASM, std::ios::out);

    if(!file) {
        std::cerr << "Error in creating asm file!" << std::endl;
    }

    std::cout << ".asm file created successfully" << std::endl;

    file << program;
    file.close();
}