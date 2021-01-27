#include "Potion.h"

Potion::Potion(const string &name, int price, int level, const string &statistic, const string &type) : Item(name, price, level),
                                                                                    statistic(statistic), type(type) {}
