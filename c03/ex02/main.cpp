/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:31 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 20:28:35 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <cassert>

int main( void )
{
    FragTrap ft( "Wellison" );

    assert( ft.getHp() == 100 );
    assert( ft.getEnergy() == 100 );
    assert( ft.getDamage() == 30 );

    ft.attack( "Betinho" );
    assert( ft.getHp() == 100 );
    assert( ft.getDamage() == 30 );
    assert( ft.getEnergy() == 99 );

    ft.beRepaired( 10 );
    assert( ft.getHp() == 110 );
    assert( ft.getEnergy() == 98 );
    assert( ft.getDamage() == 30 );

    ft.highFivesGuys();
    assert( ft.getEnergy() == 98 );
    assert( ft.getHp() == 110 );
    assert( ft.getDamage() == 30 );

    while ( ft.getHp() > 0 ) {
        ft.takeDamage( 30 );
    }
    assert( ft.getHp() == 0 );

    ft.attack( "Betinho" );
    ft.highFivesGuys();
}
