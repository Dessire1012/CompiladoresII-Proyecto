cmake_minimum_required(VERSION 3.14)
project(Expr)

find_package(FLEX)
find_package(BISON)

add_custom_command (
  OUTPUT ExprAst.cpp ExprAst.hpp
  COMMAND ${TREECC} -o ExprAst.cpp -h ExprAst.hpp ${PROJECT_SOURCE_DIR}/ExprAst.tc
  MAIN_DEPENDENCY ${PROJECT_SOURCE_DIR}/ExprAst.tc
  )

FLEX_TARGET(ExprLexer ExprLexerImpl.l
            ${CMAKE_CURRENT_BINARY_DIR}/ExprLexerImpl.cpp
            DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/ExprLexerImpl.h
            )

BISON_TARGET(ExprParser ExprParserImpl.y
            ${CMAKE_CURRENT_BINARY_DIR}/ExprParserImpl.cpp
            DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/ExprParserImpl.hpp
            )

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(${CMAKE_SOURCE_DIR})

add_executable(${PROJECT_NAME}
    ${FLEX_ExprLexer_OUTPUTS}
    ${BISON_ExprParser_OUTPUTS}
    ExprLexer.hpp
    ExprLexer.cpp
    ExprParser.hpp
    ExprParser.cpp
    ExprAst.hpp
    ExprAst.cpp
    main.cpp
 )