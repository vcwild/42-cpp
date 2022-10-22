/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:23 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 20:27:47 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    ClapTrap::_name = "FragTrap";
    this->_name     = "FragTrap";
    this->_hp       = 100;
    this->_energy   = 100;
    this->_damage   = 30;

    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
    this->_name   = name;
    this->_hp     = 100;
    this->_energy = 100;
    this->_damage = 30;

    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{

    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    if ( !this->_hp ) {
        std::cout << "ヘ( T-T)ノ_(T_T )" << std::endl;
        return;
    }
    std::cout << "ヘ( ^o^)ノ＼(^_^ )" << std::endl;
}
