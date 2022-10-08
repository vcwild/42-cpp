#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name )
{

    this->_name   = name;
    this->_type   = "FragTrap";
    this->_hp     = 100;
    this->_energy = 100;
    this->_damage = 30;

    std::cout << this->_type << " constructor called" << std::endl;
}

FragTrap::FragTrap( void )
{
    this->_name   = "FragTrap";
    this->_type   = "FragTrap";
    this->_hp     = 100;
    this->_energy = 100;
    this->_damage = 30;

    std::cout << this->_type << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{

    std::cout << this->_type << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "ヘ( ^o^)ノ＼(^_^ )" << std::endl;
}
