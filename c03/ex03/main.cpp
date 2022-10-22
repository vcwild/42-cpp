/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 22:34:10 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <cassert>

int main( void )
{
    DiamondTrap em( "Emmanuel" );
    FragTrap    ft( "FragTrap" );
    ScavTrap    st( "ScavTrap" );

    assert( em.getHp() == ft.getHp() );
    assert( em.getEnergy() == st.getEnergy() );
    assert( em.getDamage() == ft.getDamage() );

    em.whoAmI();
    em.highFivesGuys();

    em.guardGate();
    em.attack( "Victor" );
    assert( em.getEnergy() == st.getEnergy() - 1 );

    em.takeDamage( 10 );
    assert( em.getHp() == ft.getHp() - 10 );

    em.beRepaired( 10 );
    assert( em.getHp() == ft.getHp() );
    assert( em.getEnergy() == st.getEnergy() - 2 );

    while ( em.getHp() > 0 ) {
        em.takeDamage( 17 );
    }
    assert( em.getHp() == 0 );
    assert( em.getEnergy() == st.getEnergy() - 2 );

    em.guardGate();
    em.attack( "Victor" );
    em.highFivesGuys();

    return 0;
}
