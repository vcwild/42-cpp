/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:24 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:26 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

float Fixed::_getFractionalLeftShift( void ) const
{
    return ( float ) ( 1 << this->_fractionalBits );
}

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
Fixed::Fixed( int const value )
{
    this->_rawBits = value << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const value )
{
    this->_rawBits = roundf( value * this->_getFractionalLeftShift() );
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}
void Fixed::setRawBits( int const raw ) { this->_rawBits = raw; }

float Fixed::toFloat( void ) const
{
    return ( ( float ) this->_rawBits ) / this->_getFractionalLeftShift();
}
int Fixed::toInt( void ) const
{
    return this->_rawBits >> this->_fractionalBits;
}

Fixed &Fixed::operator=( Fixed const &right )
{
    this->_rawBits = right.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::ostream &operator<<( std::ostream &output, Fixed const &value )
{
    output << value.toFloat();
    return output;
}

Fixed Fixed::operator+( Fixed const &right )
{
    int sum = this->getRawBits() + right.getRawBits();
    this->setRawBits( sum );
    return *this;
}

Fixed Fixed::operator-( Fixed const &right )
{
    int sum = this->getRawBits() - right.getRawBits();
    this->setRawBits( sum );
    return *this;
}

Fixed Fixed::operator*( Fixed const &right )
{
    long sum = ( long ) this->getRawBits()
        * ( long ) ( right.getRawBits() / this->_getFractionalLeftShift() );
    this->setRawBits( ( int ) sum );
    return *this;
}

Fixed Fixed::operator/( Fixed const &right )
{
    long sum = ( long ) this->getRawBits()
        * ( ( long ) this->_getFractionalLeftShift()
            / ( long ) right.getRawBits() );
    this->setRawBits( ( int ) sum );
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed instance = *this;
    this->_rawBits++;
    return instance;
}

Fixed &Fixed::operator++( void )
{
    this->_rawBits++;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed instance = *this;
    this->_rawBits--;
    return instance;
}

Fixed &Fixed::operator--( void )
{
    this->_rawBits--;
    return *this;
}

bool Fixed::operator>( Fixed const &right ) const
{
    return this->getRawBits() > right.getRawBits();
}

bool Fixed::operator<( Fixed const &right ) const
{
    return this->getRawBits() < right.getRawBits();
}

bool Fixed::operator>=( Fixed const &right ) const
{
    return this->getRawBits() >= right.getRawBits();
}

bool Fixed::operator<=( Fixed const &right ) const
{
    return this->getRawBits() <= right.getRawBits();
}

bool Fixed::operator==( Fixed const &right ) const
{
    return this->getRawBits() == right.getRawBits();
}

bool Fixed::operator!=( Fixed const &right ) const
{
    return this->getRawBits() != right.getRawBits();
}

Fixed const &Fixed::min( Fixed const &left, Fixed const &right )
{
    if ( left > right )
        return right;
    return left;
}

Fixed &Fixed::min( Fixed &left, Fixed &right )
{
    if ( left > right )
        return right;
    return left;
}

Fixed const &Fixed::max( Fixed const &left, Fixed const &right )
{
    if ( left > right )
        return left;
    return right;
}

Fixed &Fixed::max( Fixed &left, Fixed &right )
{
    if ( left > right )
        return left;
    return right;
}
