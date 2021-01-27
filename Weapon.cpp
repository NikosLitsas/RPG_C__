#include "Weapon.h"

Weapon::Weapon(const string &name, int price, int level, int damage, bool oneHanded) : Item(name, price, level),
                                                                                       damage(damage),
                                                                                       oneHanded(oneHanded) {}
