/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:12 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:42:10 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    _brain      = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( Dog const &instance ) : Animal( instance )
{
    *this = instance;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=( Dog const &rhs )
{
    this->_type  = rhs.getType();
    this->_brain = new Brain();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The " << this->_type << " barks!" << std::endl;
}
