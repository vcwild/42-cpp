/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:06 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:07 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    _brain      = new Brain();
}

Cat::Cat( Cat const &instance ) : Animal( instance ) { *this = instance; }

Cat::~Cat() { delete this->_brain; }

Cat &Cat::operator=( Cat const &rhs )
{
    this->_type  = rhs.getType();
    this->_brain = new Brain();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The " << this->_type << " meows!" << std::endl;
}
