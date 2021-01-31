#include "Utilities.h"

Utilities::Utilities()
{
    /* Insertion of Hero Names in Vector  */

    FILE * file = fopen("HeroNames.txt", "r") ;
    if(!file)
    {
        cout << "Error reading File" << endl;
        exit(-1);
    }

    heronames = new vector<string> ();
    char* line = nullptr;
    size_t size = 0 ;

    while(getline(&line,&size,file)!=EOF)
    {
        heronames->push_back(line);
    }

    fclose(file);


    /* Insertion of Monster Names in Vector  */

    file = fopen("MonsterNames","r");
    if(!file)
    {
        cout << "Error reading File" << endl;
        exit(-1);
    }

    monsternames = new vector<string> ();
    line = nullptr;
    size =0 ;

    while(getline(&line,&size,file)!=EOF)
    {
        monsternames->push_back(line);
    }

    fclose(file);


    /* Insertion of Armor Names in Vector  */

    file = fopen("ArmorNames","r");
    if(!file)
    {
        cout << "Error reading File" << endl;
        exit(-1);
    }

    armornames = new vector<string> ();
    line = nullptr;
    size =0 ;

    while(getline(&line,&size,file)!=EOF)
    {
        armornames->push_back(line);
    }

    fclose(file);


    /* Insertion of Weapon Names in Vector  */

    file = fopen("WeaponNames","r");
    if(!file)
    {
        cout << "Error reading File" << endl;
        exit(-1);
    }

    weaponnames = new vector<string> ();
    line = nullptr;
    size =0 ;

    while(getline(&line,&size,file)!=EOF)
    {
        weaponnames->push_back(line);
    }

    fclose(file);


    /* Insertion of Spell Names in Vector  */

    file = fopen("SpellNames.txt","r");
    if(!file)
    {
        cout << "Error reading File" << endl;
        exit(-1);
    }

    spellnames = new vector<string> ();
    line = nullptr;
    size =0 ;

    while(getline(&line,&size,file)!=EOF)
    {
        spellnames->push_back(line);
    }

    fclose(file);


    /* Insertion of Potion Names in Vector  */

    file = fopen("PotionNames.txt","r");
    if(!file)
    {
        cout << "Error reading File" << endl;
        exit(-1);
    }

    potionnames = new vector<string> ();
    line = nullptr;
    size =0 ;

    while(getline(&line,&size,file)!=EOF)
    {
        potionnames->push_back(line);
    }

    fclose(file);

}

Utilities::~Utilities() {

    delete heronames;
    delete monsternames;
    delete armornames;
    delete weaponnames;
    delete spellnames;
    delete potionnames;
}

int Utilities::getRandomInt(int max)
{
    return rand()%max;
}


string Utilities::generateName(string type)         //Returns a random name from Vector
{
    int pos;
    string name;
    if(type == "Weapon")                            //Returns a random Weapon name
    {
        pos = getRandomInt((int)weaponnames->size());
        vector<string>::iterator iter = weaponnames->begin()+pos ;
        name = weaponnames->at(pos);
        weaponnames->erase(iter);
        return name;
    }

    if(type == "Armor")                             //Returns a random Armor name
    {
        pos = getRandomInt((int)armornames->size());
        vector<string>::iterator iter = armornames->begin()+pos ;
        name = armornames->at(pos);
        armornames->erase(iter);
        return name;
    }

    if(type == "Hero")                             //Returns a random Hero name
    {
        pos = getRandomInt((int)heronames->size());
        vector<string>::iterator iter = heronames->begin()+pos ;
        name = heronames->at(pos);
        heronames->erase(iter);
        return name;
    }

    if(type == "Spell")                             //Returns a random Spell name
    {
        pos = getRandomInt((int)spellnames->size());
        vector<string>::iterator iter = spellnames->begin()+pos ;
        name = spellnames->at(pos);
        spellnames->erase(iter);
        return name;
    }

    if(type == "Potion")                             //Returns a random Potion name
    {
        pos = getRandomInt((int)potionnames->size());
        vector<string>::iterator iter = potionnames->begin()+pos ;
        name = potionnames->at(pos);
        potionnames->erase(iter);
        return name;
    }

    if(type == "Monster")                             //Returns a random monster name
    {
        pos = getRandomInt((int)monsternames->size());
        vector<string>::iterator iter = monsternames->begin()+pos ;
        name = monsternames->at(pos);
        monsternames->erase(iter);
        return name;
    }
}