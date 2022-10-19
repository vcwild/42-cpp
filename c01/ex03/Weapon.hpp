/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:02 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:03 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:
    Weapon( std::string type );
    ~Weapon();

    void               setType( std::string type );
    std::string const &getType() const;

private:
    std::string _type;

    std::string _genRandomWeaponType( void );
};

#endif
