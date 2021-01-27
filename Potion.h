#ifndef POTION_H
#define POTION_H

#include "Item.h"

class Potion : public Item{
    string type;
    string statistic;
public:
    Potion(const string &name, int price, int level, const string &statistic, const string &type);
};


#endif
