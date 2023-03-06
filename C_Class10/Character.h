#pragma once
#include <iostream>
using namespace std;

class Warrior 
{
protected:
    int hp;
    int dmg;

public:

    Warrior(int hp, int dmg)
    {
        this->hp = hp;
        this->dmg = dmg;
    }

    void SwordAttack() 
    {
        cout << "SWORD ATTAAACK!!!" << endl;
    }
};

class Mage 
{
protected:
    int faith;
    int mana;

public:

    Mage(int faith, int mana)
    {
        this->faith = faith;
        this->mana = mana;
    }

    void MageAttack() 
    {
        cout << "FIREBALL!" << endl;
    }
};

class Assasin 
{
protected:
    int agil;
    int sneak;

public:

    Assasin(int agil, int sneak)
    {
        this->agil = agil;
        this->sneak = sneak;
    }

    void SneakAttack()
    {
        cout << "sneak attack..." << endl;
    }
};

class Character : public Warrior, public Mage, public Assasin 
{
public:
    Character(int hp, int dmg, int faith, int mana, int agil, int sneak)
        :Warrior(hp, dmg), Mage(faith, mana), Assasin(agil, sneak) {}

    void Attack() 
    {
        Warrior::SwordAttack();
        Mage::MageAttack();
        Assasin::SneakAttack();
    }
};

