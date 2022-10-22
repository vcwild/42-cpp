/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:01 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 20:40:23 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cassert>

int main( void )
{
    ClapTrap ct( "Adorilson" );

    assert( ct.getHp() == 10 );
    assert( ct.getEnergy() == 10 );
    assert( ct.getDamage() == 0 );

    ScavTrap st( "Gaius" );

    st.inspect();
    assert( st.getHp() == 100 );
    assert( st.getEnergy() == 50 );
    assert( st.getDamage() == 20 );

    st.attack( "Adorilson" );
    assert( st.getEnergy() == 49 );
    assert( st.getHp() == 100 );
    assert( st.getDamage() == 20 );

    st.beRepaired( 10 );
    assert( st.getEnergy() == 48 );
    assert( st.getHp() == 110 );
    assert( st.getDamage() == 20 );

    st.guardGate();
    assert( st.getEnergy() == 48 );
    assert( st.getHp() == 110 );
    assert( st.getDamage() == 20 );

    while ( st.getHp() > 0 ) {
        st.takeDamage( 27 );
    }
    assert( st.getHp() == 0 );
    assert( st.getEnergy() == 48 );
    assert( st.getDamage() == 20 );

    st.attack( "Adorilson" );
    st.guardGate();
    assert( st.getHp() == 0 );
    assert( st.getEnergy() == 48 );
    assert( st.getDamage() == 20 );

    st.beRepaired( 10 );
    assert( st.getEnergy() == 47 );
    assert( st.getHp() == 10 );

    st.guardGate();
    st.attack( "Daciuk" );

    while ( st.getEnergy() > 0 ) {
        st.beRepaired( 1 );
    }
    assert( st.getEnergy() == 0 );
    assert( st.getHp() == 56 );
}
