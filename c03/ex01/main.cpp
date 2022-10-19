/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:01 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:01:02 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap ct( "Adorilson" );

    ct.inspect();

    std::cout << "...................................." << std::endl;

    ScavTrap st( "Gaius" );

    st.inspect();
    st.attack( "Prof Bruno" );
    st.beRepaired( 15 );

    st.guardGate();
}
