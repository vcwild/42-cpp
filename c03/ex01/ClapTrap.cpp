/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:54 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:56 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "---------------------------------" << std::endl;
    std::cout << "You see " << this->_name << ", it is a " << this->_type
              << std::endl;
    std::cout << "HP: " << this->_hp << std::endl;
    std::cout << "ENERGY: " << this->_energy << std::endl;
    std::cout << "DAMAGE: " << this->_damage << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_type << " destructor called" << std::endl;
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
