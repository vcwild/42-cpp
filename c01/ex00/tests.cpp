#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie zombie = Zombie( "John" );
    zombie.announce();
    Zombie::randomChump( "Carlos" );
    Zombie::randomChump( "" );
    return 0;
}
