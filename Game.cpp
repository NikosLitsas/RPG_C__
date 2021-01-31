#include "Game.h"


Game::Game()
{
    armors = new list <Armor>();
    weapons = new list <Weapon>();


    //Hero team is bigger than (<=)1, less than (>=)3

    // max level 50
    Utilities util;
    int itemPrice=500;
    int itemLevel=5;
    for(int i=1;i<=10;i++)
    {
        for(int j=0;j<5;j++)
        {
            auto *armor = new Armor(util.generateName("Armor"),itemPrice*i,itemLevel*i,i*10);
            armors->push_back(*armor);
        }
        for(int j=0;j<3;j++)
        {
            auto *weaponOH = new Weapon(util.generateName("Weapon"),itemPrice*i,itemLevel*i,i*20,true); //if true One handed
            weapons->push_back(*weaponOH);
            auto *weaponTH = new Weapon(util.generateName("Weapon"),itemPrice*i,itemLevel*i,i*20,false); //if false two handed
            weapons->push_back(*weaponTH);
        }
    }


}


int Game::fight()
{
    // Number of Heroes

// Fight has turns
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

    int hpAllMonsters;
    int hpHeroes;


    //while(team)         //team = numofheroes
    //{    }

    bool flag=true;
    bool win;

    while((!hpAllMonsters)||(!hpHeroes))
    {
        if(flag)                // Heroes strike first
        {
            //for() all team
            //attack
            //cast spell
            //potion
            //change weapon or armor
        }
        else
            //Monster attack

        if((!hpAllMonsters)||(!hpHeroes))
        {
            giveHP();
            giveMP();
        }

        if(win)
        {
            //exp++  level + sum of monsters
            //money++ x+level+sum of monsters
        }
        else
        {
            // lose half money
        }
    }

}

void Game::giveHP()
{

}

void Game::giveMP()
{

}

list<Armor> *Game::getArmors() const {
    return armors;
}

list<Weapon> *Game::getWeapons() const {
    return weapons;
}




