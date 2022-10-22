/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:11 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 23:58:31 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal";
    _brain      = new Brain();
}

Animal::Animal( Animal const &instance )
{
    this->_type  = instance.getType();
    this->_brain = new Brain( instance.getBrain() );
}

Animal::~Animal() { delete _brain; }

Animal &Animal::operator=( Animal const &rhs )
{
    this->_type  = rhs.getType();
    this->_brain = new Brain();
    return *this;
}

std::string Animal::getType() const { return this->_type; }

void Animal::setType( std::string type ) { this->_type = type; }

void Animal::makeSound() const
{
    std::cout << "The " << this->_type << " does not know how to sound!"
              << std::endl;
}

Brain &Animal::getBrain() const { return *this->_brain; }

void Animal::printBrainAddress() const
{
    std::cout << this->getType() << " brain address: " << &this->_brain
              << std::endl;
}

void Animal::printIdea( int index ) const
{
    std::cout << this->getType() << " idea: " << this->_brain->getIdea( index )
              << std::endl;
}
