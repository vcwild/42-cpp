#include "Fixed.hpp"
#include <cmath>
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
Fixed::Fixed( int const value )
{
    this->_rawBits = value << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const value )
{
    this->_rawBits = roundf( value * ( 1 << this->_fractionalBits ) );
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
    return ( ( float ) this->_rawBits )
        / ( ( float ) ( 1 << this->_fractionalBits ) );
}
int Fixed::toInt( void ) const
{
    return this->_rawBits >> this->_fractionalBits;
}

Fixed &Fixed::operator=( Fixed const &rightHandSide )
{
    this->_rawBits = rightHandSide.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::ostream &operator<<( std::ostream &output, Fixed const &value )
{
    output << value.toFloat();
    return output;
}
