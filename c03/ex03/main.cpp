/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 22:40:52 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <cassert>

int main( void )
{
    DiamondTrap em( "7x1" );
    FragTrap    ft( "FragTrap" );
    ScavTrap    st( "ScavTrap" );

    assert( em.getHp() == ft.getHp() );
    assert( em.getEnergy() == st.getEnergy() );
    assert( em.getDamage() == ft.getDamage() );

    em.whoAmI();
    em.highFivesGuys();

    em.guardGate();
    em.attack( "Marvin" );
    assert( em.getEnergy() == st.getEnergy() - 1 );

    em.takeDamage( 10 );
    assert( em.getHp() == ft.getHp() - 10 );

    em.beRepaired( 10 );
    assert( em.getHp() == ft.getHp() );
    assert( em.getEnergy() == st.getEnergy() - 2 );

    while ( em.getHp() > 0 ) {
        em.takeDamage( 27 );
    }
    assert( em.getHp() == 0 );
    assert( em.getEnergy() == st.getEnergy() - 2 );

    em.guardGate();
    em.attack( "Marvin" );
    em.highFivesGuys();

    em.beRepaired( 10 );
    assert( em.getHp() == 10 );
    em.guardGate();
    em.attack( "Marvin" );
    em.highFivesGuys();

    return 0;
}
