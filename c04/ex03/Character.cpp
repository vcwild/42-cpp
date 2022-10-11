
#include "Character.hpp"
#include <iostream>

int Character::_inventoryIndex = 0;
int Character::_stashIndex     = 0;

Character::Character( std::string const &name ) : _name( name )
{
    for ( int i = 0; i < 4; i++ ) {
        this->_inventory[i] = NULL;
    }
}

Character::~Character() {}

Character &Character::operator=( Character const &rhs )
{
    AMateria *rhsMateria;

    this->_name = rhs.getName();
    for ( int i = 0; i < Character::_inventoryIndex; i++ ) {
        rhsMateria = rhs.getMateria( i );
        this->equip( rhsMateria->clone() );
    }

    return *this;
}

std::string const &Character::getName() const { return this->_name; }

AMateria *Character::getMateria( int idx ) const
{
    if ( idx < 0 || idx >= Character::_inventoryIndex ) {
        return NULL;
    }
    return this->_inventory[idx];
}

void Character::equip( AMateria *m )
{
    if ( Character::_inventoryIndex < 4 ) {
        this->_inventory[Character::_inventoryIndex++] = m;
        return;
    }

    std::cerr << "Error: Inventory is full!" << std::endl;
}

void Character::unequip( int idx )
{
    if ( idx < 0 || idx > 3 ) {
        std::cerr << "Error: Invalid index!" << std::endl;
        return;
    }

    if ( this->_inventory[idx] != NULL ) {
        this->_stash[this->_stashIndex++] = this->_inventory[idx];
        this->_inventory[idx]             = NULL;
        Character::_inventoryIndex--;
        return;
    }

    std::cerr << "Error: No item at index " << idx << std::endl;
}

void Character::use( int idx, ICharacter &target )
{
    if ( idx < 0 || idx > 3 ) {
        std::cerr << "Error: Invalid index!" << std::endl;
        return;
    }

    if ( this->_inventory[idx] != NULL ) {
        this->_inventory[idx]->use( target );
        return;
    }

    std::cerr << "Error: No item at index " << idx << std::endl;
}
