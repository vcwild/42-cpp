/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:18 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:41:33 by vwildner         ###   ########.fr       */
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
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
    for ( int i = 0; i < 100; i++ )
        this->ideas[i] = src.ideas[i];
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

std::string Brain::getIdea( int index ) const
{
    if ( index < 0 || index > 99 )
        index = 0;
    return this->ideas[index];
}

void Brain::setIdea( int index, std::string idea )
{
    if ( index < 0 || index > 99 ) {
        std::cout << "Index out of range" << std::endl;
        return;
    }
    this->ideas[index] = idea;
}
