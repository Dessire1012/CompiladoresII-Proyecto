#include <iostream>
#include <fstream>
#include "ExprLexer.hpp"
#include "ExprParser.hpp"

int main(int argc, char *argv[]) 
{
    if (argc != 3) {
        std::cerr << "Not enough CLI arguments\n";
        return 1;
    }
    std::ifstream in(argv[1], std::ios::in);

    if (!in.is_open()) {
        std::cerr << "Cannot open file\n";
        return 1;
    }

    ExprLexer lexer(in);
    ExprParser parser(lexer, argv[2]);
     try {
        parser.parse();
        std::cout << "Compiled with no errors" << std::endl;
        return 0;
    }
    catch (const std::runtime_error& ex) {
        std::cerr << ex.what() << '\n';
        return 1;
    }
}
