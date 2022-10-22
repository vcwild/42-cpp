/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:40 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 20:38:43 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits.h>

ClapTrap::ClapTrap() :
    _name( "ClapTrap" ), _hp( 10 ), _energy( 10 ), _damage( 0 )
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :
    _name( name ), _hp( 10 ), _energy( 10 ), _damage( 0 )
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

void ClapTrap::inspect()
{
    std::cout << "---------------------------------" << std::endl;
    std::cout << "You see " << _name << std::endl;
    std::cout << "HP: " << _hp << std::endl;
    std::cout << "ENERGY: " << _energy << std::endl;
    std::cout << "DAMAGE: " << _damage << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{

    if ( !amount || !this->_hp ) {
        std::cout << "Cannot take damage!" << std::endl;
        return;
    }

    if ( amount > INT_MAX ) {
        std::cout << "Damage amount is overflown" << std::endl;
        return;
    }

    if ( amount > this->_hp ) {
        std::cout << this->_name << " could only handle " << this->_hp
                  << " points of damage!" << std::endl;
        this->_hp = 0;
        return;
    }

    this->_hp -= amount;
    std::cout << this->_name << " takes " << amount << " points of damage!"
              << std::endl;
}

void ClapTrap::attack( const std::string &target )
{

    if ( !this->_energy || !this->_hp ) {
        std::cout << "Cannot attack!" << std::endl;
        return;
    }

    std::cout << this->_name << " attacks " << target << ", causing "
              << this->_damage << " points of damage!" << std::endl;
    this->_energy--;
}

void ClapTrap::beRepaired( unsigned int amount )
{

    if ( !amount || !this->_energy ) {
        std::cout << "cannot repair!" << std::endl;
        return;
    }

    if ( amount > INT_MAX || ( amount + this->_hp ) > INT_MAX ) {
        std::cout << "Repair amount is overflown" << std::endl;
        return;
    }

    ( !this->_hp ) ? std::cout
            << this->_name << " is brought back to life and repairs itself for "
            << amount << " points!" << std::endl
                   : std::cout << this->_name << " repairs itself for "
                               << amount << " points!" << std::endl;

    this->_hp += amount;
    this->_energy--;
}

unsigned int const ClapTrap::getEnergy( void ) const { return this->_energy; }

unsigned int const ClapTrap::getHp( void ) const { return this->_hp; }

unsigned int const ClapTrap::getDamage( void ) const { return this->_damage; }
