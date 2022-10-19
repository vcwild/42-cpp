/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:27 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:28 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() {}

AMateria::AMateria( const std::string &type ) { this->_type = type; }

AMateria::~AMateria() {}

std::string const &AMateria::getType() const { return this->_type; }

void AMateria::use( ICharacter &target )
{
    std::cout << "AMateria::use() called on " << target.getName() << std::endl;
}
