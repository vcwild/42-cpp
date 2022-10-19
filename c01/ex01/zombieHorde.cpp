/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:11 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:12 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *z       = Zombie::newZombie( name );
    z->zombiesCount = N;
    z->box          = new Zombie *[N];
    for ( int i = 0; i < N - 1; i++ ) {
        z->box[i] = Zombie::newZombie( name );
    }
    z->box[N - 1] = z;

    return z;
}

void disperseHorde( Zombie **box, int N )
{
    for ( int i = 0; i < N; i++ ) {
        delete box[i];
    }
    delete[] box;
}
