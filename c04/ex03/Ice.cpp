/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:00 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:02 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria( "ice" ) {}

Ice::Ice( const Ice &type ) : AMateria( type ) {}

Ice::~Ice() {}

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
