/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:06 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:41:52 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    _brain      = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const &instance ) : Animal( instance )
{
    *this = instance;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destuctor called" << std::endl;
}

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
