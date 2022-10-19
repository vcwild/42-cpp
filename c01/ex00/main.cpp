/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:35 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:57:37 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie *zombie = Zombie::newZombie( "John" );
    zombie->announce();
    delete zombie;
    Zombie::randomChump( "Carlos" );
    Zombie::randomChump( "" );
    return 0;
}
