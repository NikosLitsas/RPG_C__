#ifndef SPELL_H
#define SPELL_H

#include <iostream>

using namespace std;

class Spell {
    //damage * dexterity + range
    string type;
    int magicHealthCost;
    int level;
    int damageRange;
    int price;
public:
    Spell(const string &type, int magicHealthCost, int level, int price, int damageRange);
};


#endif
