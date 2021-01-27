#ifndef GAME_H
#define GAME_H


class Game {



public:
    int fight();


};


// Fight has turns
// Heroes strike first
// does not finish until heroes or monsters defeated (all of them)
// if Heroes win, they earn money(depending on their level + sum of monsters they defeated)
// Also, they gain Experience(depending on their level + sum of monsters they defeated)
// if monsters win, Heroes lose half of their money
// Every round if alive , Heroes/Monsters regain a portion of their HP
// Heroes also regain a portion of their MP
// if a Hero die during fight, Revive with half HP
// if(fight) && Heroes turn , they can attack/castSpell/use Potion or change Weapon/Armor
// Only one move per turn
// Every turn player can displayStats of every Monster/Hero

#endif
