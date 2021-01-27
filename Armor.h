#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"

class Armor : public Item{
    int damageReduction;
public:
    Armor(const string &name, int price, int level, int damageReduction);
};


#endif
