#ifndef MONSTER_H
#define MONSTER_H

#include "Living.h"

class Monster : public Living{
    int damageRange;
    int damageReduction;
    int evasion;

};


#endif
