#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item {

    string name;
    int price;
    int level;
public:
    Item(const string &name, int price, int level);

};


#endif
