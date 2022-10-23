/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:26 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:37:45 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( Animal const &instance )
{
    *this = instance;
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

Animal &Animal::operator=( Animal const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

std::string Animal::getType() const { return this->_type; }

void Animal::setType( std::string type ) { this->_type = type; }

void Animal::makeSound() const
{
    std::cout << "The " << this->_type << " does not know how to sound!"
              << std::endl;
}
