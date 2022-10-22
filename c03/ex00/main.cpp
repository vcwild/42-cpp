/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:46 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 20:37:33 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cassert>
#include <limits.h>

int main( void )
{
    ClapTrap ct( "DaniCaus" );

    ct.inspect();
    assert( ct.getHp() == 10 );
    assert( ct.getEnergy() == 10 );
    assert( ct.getDamage() == 0 );

    std::cout << std::endl;
    ct.attack( "Betinho" );
    assert( ct.getHp() == 10 );
    assert( ct.getEnergy() == 9 );

    std::cout << std::endl;
    ct.takeDamage( 5 );
    ct.takeDamage( 6 );
    assert( ct.getHp() == 0 );

    std::cout << std::endl;
    ct.attack( "Betinho" );
    assert( ct.getEnergy() == 9 );

    std::cout << std::endl;
    ct.beRepaired( 5 );
    assert( ct.getEnergy() == 8 );
    assert( ct.getHp() == 5 );

    std::cout << std::endl;
    ct.attack( "Betinho" );
    assert( ct.getHp() == 5 );
    assert( ct.getEnergy() == 7 );

    std::cout << std::endl;
    ct.beRepaired( INT_MAX );
    assert( ct.getEnergy() == 7 );
    assert( ct.getHp() == 5 );

    std::cout << std::endl;
    while ( ct.getEnergy() > 0 )
        ct.beRepaired( 1 );
    assert( ct.getEnergy() == 0 );

    std::cout << std::endl;
    ct.beRepaired( 1 );
    assert( ct.getEnergy() == 0 );
}
