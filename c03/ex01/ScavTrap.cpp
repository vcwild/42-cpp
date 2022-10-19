/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:01:08 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
