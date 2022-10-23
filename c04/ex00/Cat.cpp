/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:32 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:37:56 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat( Cat const &instance ) : Animal( instance )
{
    *this = instance;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

Cat &Cat::operator=( Cat const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The " << this->_type << " meows!" << std::endl;
}
