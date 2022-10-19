/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:52 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:57:53 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.hpp"
#include <iostream>

int main()
{
    Zombie *zombie = zombieHorde( 10, "John" );
    zombie->announceParty();
    disperseHorde( zombie->box, 10 );

    return 0;
}
