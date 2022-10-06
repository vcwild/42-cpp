#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie *zombie = Zombie::newZombie( "John" );
    zombie->announce();
    delete zombie;
    Zombie::randomChump( "Carlos" );
    Zombie::randomChump( "" );
    return 0;
}
