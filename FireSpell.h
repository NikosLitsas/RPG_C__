#ifndef FIRESPELL_H
#define FIRESPELL_H

#include "Spell.h"

class FireSpell : public Spell{
    int armorReduction;
public:
    FireSpell(const string &type, int mana, int level, int price, int damage, int armorReduction);
};


#endif
