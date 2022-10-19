/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:57 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:58 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { this->_type = "WrongAnimal"; }

WrongAnimal::WrongAnimal( WrongAnimal const &instance ) { *this = instance; }

WrongAnimal::~WrongAnimal() {}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

std::string WrongAnimal::getType() const { return this->_type; }

void WrongAnimal::setType( std::string type ) { this->_type = type; }

void WrongAnimal::makeSound() const
{
    std::cout << "The " << this->_type << " is simply wrong!" << std::endl;
}
