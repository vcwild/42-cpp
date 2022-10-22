/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 22:35:48 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    ClapTrap::_name = "ScavTrap";
    this->_name     = "ScavTrap";
    this->_hp       = 100;
    this->_energy   = 50;
    this->_damage   = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
    this->_name   = name;
    this->_hp     = 100;
    this->_energy = 50;
    this->_damage = 20;

    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack( const std::string &target )
{
    if ( !this->_energy || !this->_hp ) {
        std::cout << "Cannot attack!" << std::endl;
        return;
    }
    std::cout << this->_name << " swiftly hits " << target << ", causing "
              << this->_damage << " points of damage!" << std::endl;
    this->_energy--;
}

void ScavTrap::guardGate()
{
    if ( !this->_hp ) {
        std::cout << "Cannot guard gate!" << std::endl;
        return;
    }

    std::cout << this->_name << " is now guarding the gate!" << std::endl;
}
