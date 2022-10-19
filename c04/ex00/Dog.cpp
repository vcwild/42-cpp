/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:39 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:40 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() { this->_type = "Dog"; }

Dog::~Dog() {}

Dog &Dog::operator=( Dog const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The " << this->_type << " barks!" << std::endl;
}
