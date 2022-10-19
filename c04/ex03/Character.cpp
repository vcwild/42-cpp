/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:35 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:37 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

int Character::_stashIndex = 0;

Character::Character( std::string const &name ) : _name( name )
{
    for ( int i = 0; i < 4; i++ ) {
        this->_inventory[i] = NULL;
    }

    for ( int i = 0; i < 16; i++ ) {
        this->_stash[i] = NULL;
    }
}

Character::~Character()
{
    for ( int i = 0; i < 4; i++ ) {
        if ( this->_inventory[i] ) {
            delete this->_inventory[i];
        }
    }
    for ( int i = 0; i < 16; i++ ) {
        delete this->_stash[i];
    }
}

Character &Character::operator=( Character const &rhs )
{
    AMateria *rhsMateria;

    this->_name = rhs.getName();
    for ( int i = 0; i < 4; i++ ) {
        rhsMateria = rhs.getMateria( i );
        this->equip( rhsMateria->clone() );
    }

    return *this;
}

std::string const &Character::getName() const { return this->_name; }

AMateria *Character::getMateria( int idx ) const
{
    if ( idx < 0 || idx > 3 ) {
        return NULL;
    }
    return this->_inventory[idx];
}

void Character::equip( AMateria *m )
{
    for ( int i = 0; i < 4; i++ ) {
        if ( this->_inventory[i] == NULL ) {
            this->_inventory[i] = m;
            return;
        }
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
