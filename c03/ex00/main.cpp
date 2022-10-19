/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:46 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:48 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap ct( "DaniCaus" );

    ct.inspect();
    ct.attack( "Betinho" );
    ct.beRepaired( 20 );
}
