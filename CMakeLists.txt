cmake_minimum_required(VERSION 3.1)
project(Subscript)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Subscript ${SOURCE_FILES} Lexer/Lexer.cpp Lexer/Lexer.h Lexer/Token.cpp Lexer/Token.h Lexer/SymbolTable.cpp Lexer/SymbolTable.h Lexer/AttributeValue.cpp Lexer/AttributeValue.h Lexer/Type.cpp Lexer/Type.h)