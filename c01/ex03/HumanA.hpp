/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:33 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:35 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

public:
    HumanA( std::string name, Weapon &weapon );
    ~HumanA();

    void attack( void ) const;

private:
    std::string _name;
    Weapon     *_weapon;
};

#endif
