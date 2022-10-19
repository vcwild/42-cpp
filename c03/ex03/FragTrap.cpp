/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:58 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:00 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name )
{

    this->_name   = name;
    this->_type   = "FragTrap";
    this->_hp     = 100;
    this->_energy = 100;
    this->_damage = 30;

    std::cout << this->_type << " constructor called" << std::endl;
}

FragTrap::FragTrap( void )
{
    this->_name   = "FragTrap";
    this->_type   = "FragTrap";
    this->_hp     = 100;
    this->_energy = 100;
    this->_damage = 30;

    std::cout << this->_type << " constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &instance ) : ClapTrap( instance )
{
    *this = instance;
    std::cout << this->_type << " constructor called via instance" << std::endl;
}

FragTrap::~FragTrap()
{

    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap const &right )
{
    this->_damage = right.getDamage();
    this->_energy = right.getEnergy();
    this->_hp     = right.getHp();
    this->_name   = right.getName();
    this->_type   = right.getType();

    return *this;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "ヘ( ^o^)ノ＼(^_^ )" << std::endl;
}
