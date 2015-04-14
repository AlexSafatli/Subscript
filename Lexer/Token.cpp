//
// Created by Alex Safatli on 15-04-14.
//

#include "Token.h"

AttributeValue &Token::getAttributeValue(SymbolTable &table) const {
    return table.getAttributeValueByIndex(attrValueIndex);
}