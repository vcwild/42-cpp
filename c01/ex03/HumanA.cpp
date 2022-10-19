/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:30 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:31 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
    this->_name   = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA() {}

void HumanA::attack( void ) const
{
    std::cout << this->_name << " attacks with their "
              << this->_weapon->getType() << std::endl;
}
