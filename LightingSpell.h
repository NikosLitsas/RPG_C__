#ifndef LIGHTINGSPELL_H
#define LIGHTINGSPELL_H

#include "Spell.h"

class LightingSpell : public Spell{
    int evasionReduction;
public:
    LightingSpell(const string &type, int mana, int level, int price, int damage, int evasionReduction);

};


#endif
