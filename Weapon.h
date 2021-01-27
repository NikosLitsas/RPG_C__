#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item{
    int damage;
    bool oneHanded;
public:
    Weapon(const string &name, int price, int level, int damage, bool oneHanded);
};


#endif