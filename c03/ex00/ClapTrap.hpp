/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:43 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:44 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

public:
    ClapTrap( std::string name );
    ~ClapTrap();

    void attack( const std::string &target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

    void inspect( void );

private:
    std::string  _name;
    std::string  _type;
    unsigned int _hp;
    unsigned int _energy;
    unsigned int _damage;
};

#endif
