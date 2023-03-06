#include <iostream>
#include "Character.h"

int main()
{
    Warrior warrior(100, 20);
    Mage mage(20, 100);
    Assasin archer(13, 60);
    Character player(100, 20, 20, 100, 13, 60);

    player.Attack();
}
