/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:50 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:52 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon( "crude spiked club" );

        HumanA bob( "Bob", club );
        bob.attack();
        club.setType( "some other type of club" );
        bob.attack();
    }
    {
        Weapon club = Weapon( "crude spiked club" );

        HumanB jim( "Jim" );
        jim.setWeapon( club );
        jim.attack();
        club.setType( "some other type of club" );
        jim.attack();
    }
    return 0;
}
