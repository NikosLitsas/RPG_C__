#ifndef SQUARE_H
#define SQUARE_H

#include "Grid.h"
#include "Game.h"

class Square  {
    // nonAccessible Horoes cant access
    // Market  Heroes can buy Items/Spells (if enough money) sell Items/Spells for half cost
    // Market Buy/Sell Menu ALL Items/Spells (with Info(price/level of use))
    // common Chance of fighting Monsters of same level //if(chance) instant fight
    string type;
    bool accessible;
public:
    Square(const string type);

};


#endif
