/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:32 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:34 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() { this->_type = "Cat"; }

Cat::Cat( Cat const &instance ) : Animal( instance ) { *this = instance; }

Cat::~Cat() {}

Cat &Cat::operator=( Cat const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The " << this->_type << " meows!" << std::endl;
}
