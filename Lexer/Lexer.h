//
// Created by Alex Safatli on 15-04-14.
//

#ifndef SUBSCRIPT_LEXER_H
#define SUBSCRIPT_LEXER_H

#include <fstream>
#include <vector>
#include "Token.h"
using namespace std;

class Lexer {
private:
    const char* fname;
    filebuf source;
    vector<Token> tokens;
public:
    Lexer(const char* filename) {
        source.open(filename,ios::in);
        fname = filename;
    }
    bool hasNextToken();
    Token &getNextToken() const;
};


#endif //SUBSCRIPT_LEXER_H
