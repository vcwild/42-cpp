#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

std::string Zombie::_genZombieName( void )
{
    std::string zombieNames[10] = { "Charles",
        "David",
        "Zachias",
        "Richard",
        "Rob",
        "Luke",
        "Alphred",
        "Lisa",
        "Diana",
        "Gina" };

    return zombieNames[std::rand() % 10];
}

Zombie::Zombie( std::string name )
{
    if ( name == "" )
        name = this->_genZombieName();

    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " zombie has been destroyed!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::newZombie( std::string name )
{
    Zombie *zombie = new Zombie( name );
    return zombie;
}

void Zombie::randomChump( std::string name )
{
    if ( name == "" )
        name = Zombie::_genZombieName();
    Zombie *zombie = Zombie::newZombie( name );
    zombie->announce();
    delete zombie;
}
