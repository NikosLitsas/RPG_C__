#ifndef LIVING_H
#define LIVING_H

#include <iostream>
using namespace std;

class Living {
    int level;
    int healthPower;
    string type;
public:
    Living(int level, int healthPower, const string &type);

};


#endif
