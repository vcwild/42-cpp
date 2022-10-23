/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:42 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:43:26 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria( "cure" )
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure( const Cure &type ) : AMateria( type )
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure() { std::cout << "Cure destructor called" << std::endl; }

Cure &Cure::operator=( Cure const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

Cure *Cure::clone() const { return new Cure( *this ); }

void Cure::use( ICharacter &target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
