/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:44 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:46 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

public:
    HumanB( std::string name );
    ~HumanB();

    void attack( void ) const;
    void setWeapon( Weapon &weapon );

private:
    std::string _name;
    Weapon     *_weapon;
};

#endif
