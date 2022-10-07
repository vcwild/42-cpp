#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
    this->_name   = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA() {}

void HumanA::attack( void ) const
{
    std::cout << this->_name << " attacks with their "
              << this->_weapon->getType() << std::endl;
}
