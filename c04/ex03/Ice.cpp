/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:00 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:43:47 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria( "ice" )
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice( const Ice &type ) : AMateria( type )
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice() { std::cout << "Ice destructor called" << std::endl; }

Ice &Ice::operator=( Ice const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

Ice *Ice::clone() const { return new Ice( *this ); }

void Ice::use( ICharacter &target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
              << std::endl;
}
