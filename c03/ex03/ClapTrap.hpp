/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:48 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 22:27:05 by vwildner         ###   ########.fr       */
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

    virtual void attack( const std::string &target );
    void         takeDamage( unsigned int amount );
    void         beRepaired( unsigned int amount );

    std::string  getName() const;
    unsigned int getHp() const;
    unsigned int getEnergy() const;
    unsigned int getDamage() const;

protected:
    std::string  _name;
    unsigned int _hp;
    unsigned int _energy;
    unsigned int _damage;
};

#endif
