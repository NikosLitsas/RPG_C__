#include "FireSpell.h"

FireSpell::FireSpell(const string &type, int mana, int level, int price, int damage, int armorPenetration) : Spell(type,
                                                                                                                   mana,
                                                                                                                   level,
                                                                                                                   price,
                                                                                                                   damage),
                                                                                                             armorReduction(
                                                                                                                     armorReduction) {}
