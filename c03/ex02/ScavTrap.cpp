#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name   = "ScavTrap";
    this->_type   = "ScavTrap";
    this->_hp     = 100;
    this->_energy = 50;
    this->_damage = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
    this->_name   = name;
    this->_type   = "ScavTrap";
    this->_hp     = 100;
    this->_energy = 50;
    this->_damage = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << this->_name << " is now guarding the gate!"
              << std::endl;
}
