#include "Zombie.hpp"
#include "zombieHorde.hpp"
#include <iostream>

int main()
{
    Zombie *zombie = zombieHorde( 10, "John" );
    zombie->announceParty();
    disperseHorde( zombie->box, 10 );

    return 0;
}
