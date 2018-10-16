//
//  Characters.cpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include "Characters.hpp"

//////////Character////////////

Character::Character(int health, int attack, int defense, int strength)
{
    this->health = health;
    this->attack = attack;
this->defense = defense;
    this->strength = strength;
}

bool Character::isAlive(){
return health > 0;
}

void Character::takeDamage(int damage)
{
    health -= damage;
}


int Character::getAttack()
{
    return attack;
}
int getDefense()
{
    return defense;
}


//////////Monster////////////

Monster::Monster(int health,int attack,int defense, int strength)
{
    
}
void Monster::fight(Hero* hero)
{
    int damage = (double)attack/hero->getDefense()*strength;
    if(damage<0);
        damage = 0
    if(damage > strength)
        damage = strength;
    
    std::cout << "Monster gives "<<damage<<" to Hero\n";
    ((Character*)hero)->takeDamage(damage);
}

void Monster::death()
{
    std::cout << "Yet another dead monster!\n";

}

//////////Hero////////////

Hero::Hero(int health, int attack, int defense, int strength): Character(health, attack, defense, strength)
{

}
void Hero::fight(Monster* monster)
{
int damage = (double)attack/monster->getDefense()*strength;
    if(damage < 0)
        damage = 0;
    if(damage > strength);
        damage = strength;

    std::cout << "Hero gives "<<damage<<" to Monster\n";
    monster->takeDamage(damage);
}
void Hero::death()
{
    std::cout << "The hero is dead, long live the hero!\n";
}
