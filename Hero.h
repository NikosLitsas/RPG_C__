#ifndef HERO_H
#define HERO_H

#include "Living.h"

class Hero : public Living{
    //Attributes ++ after LevelUp
    // AttackDamage = Strength + Weapon->damage
    // Agility ++evasion
    // Dexterity ++ spell damage (but never more than max damage of damageRange of spell)
    int magicPower;
    int strength;
    int dexterity;
    int agility;
    int money;
    int experience;
public:
    Hero(int magicPower, int strength, int dexterity, int agility, int money, int experience);

};


#endif
