/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:12 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap diamond( "Shiny" );
    std::cout << "------------------ SETUP    -------------------" << std::endl;
    diamond.inspect();

    std::cout << "------------------ WHO AM I -------------------" << std::endl;
    diamond.whoAmI();

    std::cout << "------------------ ATTACK   -------------------" << std::endl;
    diamond.attack( "Jade" );

    std::cout << "------------------ DAMAGE   -------------------" << std::endl;
    diamond.takeDamage( 10 );

    std::cout << "------------------ REPAIR   -------------------" << std::endl;
    diamond.beRepaired( 10 );

    std::cout << "------------------ GUYS     -------------------" << std::endl;
    diamond.highFivesGuys();

    std::cout << "------------------ GATE     -------------------" << std::endl;
    diamond.guardGate();

    std::cout << "------------------ TEARDOWN -------------------" << std::endl;
}
