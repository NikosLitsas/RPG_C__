#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include "vector"

using namespace std;

class Utilities
{
    vector<string> * heronames ;
    vector<string> * monsternames;
    vector<string> * armornames;
    vector<string> * weaponnames;
    vector<string> * spellnames;
    vector<string> * potionnames;
public:
    Utilities();
    ~Utilities();

public:
    string generateName(string type);
    int getRandomInt(int a);
};





#endif
