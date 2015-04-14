//
// Created by Alex Safatli on 15-04-14.
//

#ifndef SUBSCRIPT_SYMBOLTABLE_H
#define SUBSCRIPT_SYMBOLTABLE_H

#include "AttributeValue.h"

class SymbolTable {
private:
    map<int,AttributeValue&> table;
public:
    AttributeValue &getAttributeValueByIndex(int index) const;
};


#endif //SUBSCRIPT_SYMBOLTABLE_H
