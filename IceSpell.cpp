#include "IceSpell.h"

IceSpell::IceSpell(const string &type, int mana, int level, int price, int damage, int damageRangeReduction) : Spell(
        type, mana, level, price, damage), damageRangeReduction(damageRangeReduction) {}
