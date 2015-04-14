//
// Created by Alex Safatli on 15-04-14.
//

#ifndef SUBSCRIPT_TOKEN_H
#define SUBSCRIPT_TOKEN_H

#include <string>
#include "AttributeValue.h"
#include "SymbolTable.h"

using namespace std;

class Token {
private:
    string name;
    int attrValueIndex;
public:
    string &getName() const {
        return name;
    }
    AttributeValue &getAttributeValue(SymbolTable &table) const;
};

#endif //SUBSCRIPT_TOKEN_H
