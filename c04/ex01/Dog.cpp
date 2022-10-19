/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:33 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:03:35 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    _brain      = new Brain();
}

Dog::Dog( Dog const &instance ) : Animal( instance ) { *this = instance; }

Dog::~Dog() { delete this->_brain; }

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
