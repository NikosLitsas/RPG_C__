#include "Square.h"

Square::Square(const string type) : type(type)
{
    if(type=="nonAccessible")
    {
        cout << "This Square is Unavailable, please choose another direction" << endl;
    }
    else if(type=="Market")
    {

        //cout << Game().getArmors() << endl;
        //cout << Game().getWeapons() << endl;
    }
    else
        Game().fight();
}
