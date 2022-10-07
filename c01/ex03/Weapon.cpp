#include "Weapon.hpp"
#include <cstdlib>

Weapon::Weapon( std::string type ) { this->setType( type ); }

Weapon::~Weapon() {}

std::string Weapon::_genRandomWeaponType( void )
{
    std::string weaponNames[10] = { "shovel",
        "axe",
        "club",
        "dagger",
        "frying pan",
        "lance",
        "machete",
        "pitchfork",
        "scythe",
        "sword" };

    return weaponNames[std::rand() % 10];
}

void Weapon::setType( std::string type )
{
    if ( type == "" )
        type = this->_genRandomWeaponType();
    this->_type = type;
}

std::string const &Weapon::getType() const { return this->_type; }
