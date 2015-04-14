//
// Created by Alex Safatli on 15-04-14.
//

#ifndef SUBSCRIPT_LEXER_H
#define SUBSCRIPT_LEXER_H

#include <string>
#include <vector>
#include "Token.h"
using namespace std;

class Lexer {
private:
    string source;
    int position;
    vector<Token> tokens;
public:
    Token &getNextToken() const;
};


#endif //SUBSCRIPT_LEXER_H
