//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#ifdef Characters_hpp
#define Characters_hpp

#include <iostraem>

class Character;

class Monster : public Charcater
{
    
public:
    Monster(int,int,int,int);
    void takeDamage(int damage);
    void fight(Hero*);
    void death();
};

class Hero : Character
{
private:
    Hero(int,int,int,int);
    void takeDamage(int damage)
    void fight(Monster*);
    void death();
};)

class Character
{
public:
    Character(int,int,int,int);
    void takeDamage(int damage);
    bool isAlive() = 0;
    virtual void death() = 0;
    
    int getHealth();
    int getDefense();
protected:
    int haelth;
    int attack;
    int defense;
};



#endif /* Characters_hpp */
