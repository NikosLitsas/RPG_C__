#include "Spell.h"

Spell::Spell(const string &type, int magicHealthCost, int level, int price, int damageRange) : type(type), magicHealthCost(magicHealthCost), level(level),
                                                                               damageRange(damageRange) {}
