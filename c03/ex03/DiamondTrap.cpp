/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:52 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:01:53 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
    this->_name     = "DiamondTrap";
    ClapTrap::_name = this->_name + "_clap_name";
    this->_type     = "DiamondTrap";
    this->_hp       = FragTrap::getHp();
    this->_energy   = ScavTrap::getEnergy();
    this->_damage   = FragTrap::getDamage();

    std::cout << this->_type << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
{
    this->_name     = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_type     = "DiamondTrap";
    this->_hp       = FragTrap::getHp();
    this->_energy   = ScavTrap::getEnergy();
    this->_damage   = FragTrap::getDamage();

    std::cout << this->_type << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &instance ) :
    ClapTrap( instance ), FragTrap( instance ), ScavTrap( instance )
{
    *this = instance;
    std::cout << this->_type << " constructor called via instance" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->_name << " and my ClapTrap name is "
              << ClapTrap::getName() << std::endl;
}
