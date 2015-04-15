//
// Created by Alex Safatli on 15-04-14.
//

#ifndef SUBSCRIPT_SYMBOLTABLE_H
#define SUBSCRIPT_SYMBOLTABLE_H

#include <unordered_map>
#include "AttributeValue.h"

using namespace std;

class SymbolTable {
private:
    unordered_map<int,AttributeValue> table;
public:
    AttributeValue &getAttributeValueByIndex(int index) const;
};


#endif //SUBSCRIPT_SYMBOLTABLE_H
