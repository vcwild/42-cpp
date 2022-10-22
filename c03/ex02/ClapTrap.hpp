/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:58 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 20:05:39 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

public:
    ClapTrap();
    ClapTrap( std::string name );
    ~ClapTrap();

    void attack( const std::string &target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void inspect( void );

    unsigned int const getEnergy( void ) const;
    unsigned int const getHp( void ) const;
    unsigned int const getDamage( void ) const;

protected:
    std::string  _name;
    unsigned int _hp;
    unsigned int _energy;
    unsigned int _damage;
};

#endif
