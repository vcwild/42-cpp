/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:57 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:38:35 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &instance )
{
    *this = instance;
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

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
