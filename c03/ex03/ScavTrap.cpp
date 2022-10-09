#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name   = "ScavTrap";
    this->_type   = "ScavTrap";
    this->_hp     = 100;
    this->_energy = 50;
    this->_damage = 20;
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

ScavTrap::ScavTrap( ScavTrap const &instance ) : ClapTrap( instance )
{
    *this = instance;
    std::cout << "ScavTrap constructor called via instance" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &right )
{
    this->_name   = right.getName();
    this->_type   = right.getType();
    this->_hp     = right.getHp();
    this->_energy = right.getEnergy();
    this->_damage = right.getDamage();

    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << this->_name << " is now guarding the gate!"
              << std::endl;
}
