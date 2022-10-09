#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{

    this->_name   = name;
    this->_type   = "ClapTrap";
    this->_hp     = 10;
    this->_energy = 10;
    this->_damage = 0;

    std::cout << this->_type << " constructor called" << std::endl;
}

ClapTrap::ClapTrap( void )
{
    this->_name   = "ClapTrap";
    this->_type   = "ClapTrap";
    this->_hp     = 10;
    this->_energy = 10;
    this->_damage = 0;

    std::cout << this->_type << " constructor called" << std::endl;
}

void ClapTrap::inspect()
{
    std::cout << "You see " << this->_name << ", it is a " << this->_type
              << std::endl;
    std::cout << "HP: " << this->_hp << std::endl;
    std::cout << "ENERGY: " << this->_energy << std::endl;
    std::cout << "DAMAGE: " << this->_damage << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &right )
{
    this->_damage = right.getDamage();
    this->_energy = right.getEnergy();
    this->_hp     = right.getHp();
    this->_name   = right.getName();
    this->_type   = right.getType();

    return *this;
}

void ClapTrap::attack( const std::string &target )
{

    if ( this->_damage <= 0 || this->_energy <= 0 || this->_hp <= 0 ) {
        std::cout << "Cannot attack!" << std::endl;
        return;
    }

    std::cout << this->_type << " " << this->_name << " attacks " << target
              << ", causing " << this->_damage << " points of damage!"
              << std::endl;
    this->_energy--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if ( this->_damage <= 0 || this->_energy <= 0 || this->_hp <= 0 ) {
        std::cout << "Cannot take damage!" << std::endl;
        return;
    }

    std::cout << this->_type << " " << this->_name << " takes " << amount
              << " points of damage!" << std::endl;
    this->_hp -= amount;
}

void ClapTrap::beRepaired( unsigned int amount )
{

    if ( amount <= 0 || this->_energy <= 0 ) {
        std::cout << "cannot repair!" << std::endl;
        return;
    }

    std::cout << this->_type << " " << this->_name << " repairs itself for "
              << amount << " points!" << std::endl;

    this->_hp += amount;
    this->_energy--;
}

std::string ClapTrap::getName() const { return this->_name; }

std::string ClapTrap::getType() const { return this->_type; }

unsigned int ClapTrap::getHp() const
{
    if ( this->_hp )
        return this->_hp;
    return 0;
}
unsigned int ClapTrap::getEnergy() const
{
    if ( this->_energy )
        return this->_energy;
    return 0;
}
unsigned int ClapTrap::getDamage() const
{
    if ( this->_damage )
        return this->_damage;
    return 0;
}
