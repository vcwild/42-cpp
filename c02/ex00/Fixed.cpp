/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:54 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:56 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->_rawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &instanceToCopy )
{
    *this = instanceToCopy;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}
void Fixed::setRawBits( int const raw ) { this->_rawBits = raw; }

Fixed &Fixed::operator=( Fixed const &rightHandSide )
{
    this->_rawBits = rightHandSide.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}
