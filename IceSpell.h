#ifndef ICESPELL_H
#define ICESPELL_H

#include "Spell.h"

class IceSpell : public Spell {
    int damageRangeReduction;
public:
    IceSpell(const string &type, int mana, int level, int price, int damage, int damageRangeReduction);
};


#endif
