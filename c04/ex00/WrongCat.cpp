/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:04 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:03:05 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() { this->_type = "WrongCat"; }

WrongCat::WrongCat( WrongCat const &instance ) : WrongAnimal( instance )
{
    *this = instance;
}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator=( WrongCat const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "The " << this->_type << " meows!" << std::endl;
}
