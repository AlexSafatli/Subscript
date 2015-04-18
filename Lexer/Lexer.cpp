//
// Created by Alex Safatli on 15-04-14.
//

#include "Lexer.h"

bool Lexer::hasNextToken() {
    return (Lexer::source.in_avail() > 0);
}
