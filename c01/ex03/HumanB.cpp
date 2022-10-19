/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:37 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:41 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) { this->_name = name; }

HumanB::~HumanB() {}

void HumanB::setWeapon( Weapon &weapon ) { this->_weapon = &weapon; }

void HumanB::attack( void ) const
{
    if ( this->_weapon ) {
        std::cout << this->_name << " attacks with their "
                  << this->_weapon->getType() << std::endl;
    } else {
        std::cout << this->_name << " has no weapon" << std::endl;
    }
}
