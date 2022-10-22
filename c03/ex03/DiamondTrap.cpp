/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:52 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 22:27:12 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap()
{
    FragTrap::_hp     = 100;
    ScavTrap::_energy = 50;
    FragTrap::_damage = 30;

    this->_name     = "DiamondTrap";
    this->_hp       = FragTrap::getHp();
    this->_energy   = ScavTrap::getEnergy();
    this->_damage   = FragTrap::getDamage();
    ClapTrap::_name = this->_name + "_clap_name";

    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) :
    ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
    FragTrap::_hp     = 100;
    ScavTrap::_energy = 50;
    FragTrap::_damage = 30;

    this->_name     = name;
    this->_hp       = FragTrap::getHp();
    this->_energy   = ScavTrap::getEnergy();
    this->_damage   = FragTrap::getDamage();
    ClapTrap::_name = this->_name + "_clap_name";

    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::inspect() const
{
    std::cout << "---------------------------------" << std::endl;
    std::cout << "You see " << _name << std::endl;
    std::cout << "HP: " << _hp << std::endl;
    std::cout << "ENERGY: " << _energy << std::endl;
    std::cout << "DAMAGE: " << _damage << std::endl;
    std::cout << "---------------------------------" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->_name << " and my ClapTrap name is "
              << ClapTrap::getName() << std::endl;
}
