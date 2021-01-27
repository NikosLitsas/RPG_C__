#include "LightingSpell.h"

LightingSpell::LightingSpell(const string &type, int mana, int level, int price, int damage, int evasionReduction)
        : Spell(type, mana, level, price, damage), evasionReduction(evasionReduction) {}
