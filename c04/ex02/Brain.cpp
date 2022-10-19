/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:59 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:00 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
    std::string activities[6] = {
        "sleep",
        "eat",
        "play",
        "run",
        "fight",
        "hunt",
    };

    for ( int i = 0; i < 100; i++ )
        this->ideas[i] = activities[rand() % 6];
}

Brain::Brain( const Brain &src ) { *this = src; }

Brain::~Brain() {}

std::string Brain::getIdea( int index ) const
{
    if ( index < 0 || index > 99 )
        index = 0;
    return this->ideas[index];
}
