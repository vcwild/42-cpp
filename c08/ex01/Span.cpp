/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:11:25 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:11:30 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size( 0 ) {}

Span::Span( unsigned int size ) : _size( size ) {}

Span::Span( const Span &src ) : _size( src._size )
{
    this->_numbers.clear();
    this->_numbers = src._numbers;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() { this->_numbers.clear(); }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=( Span const &rhs )
{
    this->_size    = rhs._size;
    this->_numbers = rhs._numbers;

    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber( int number )
{
    if ( this->_numbers.size() < this->_size ) {
        this->_numbers.insert( number );
        return;
    }
    throw Span::NotEnoughSpaceException();
}

template<typename T> void Span::addNumber( T begin, T end )
{
    if ( this->_numbers.size() > this->_size )
        throw Span::NotEnoughSpaceException();
    while ( begin != end ) {
        this->_numbers.insert( *begin );
        begin++;
    }
}

unsigned int Span::shortestSpan() const
{
    if ( this->_numbers.size() < 2 )
        throw Span::NotEnoughItemsException();

    std::set<int>::iterator it  = this->_numbers.begin(),
                            it2 = this->_numbers.begin();
    it2++;
    unsigned int diff = *it2 - *it;
    while ( it2 != this->_numbers.end() ) {
        if ( *it2 - *it < diff )
            diff = *it2 - *it;
        it++;
        it2++;
    }
    return diff;
}

unsigned int Span::longestSpan() const
{
    if ( this->_numbers.size() > 1 ) {
        return *( --this->_numbers.end() ) - *this->_numbers.begin();
    }
    throw Span::NotEnoughItemsException();
}

void Span::printItems() const
{
    std::set<int>::iterator it = this->_numbers.begin();

    std::cout << "Items: ";
    while ( it != this->_numbers.end() ) {
        std::cout << *it++ << " ";
    }
    std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char *Span::NotEnoughSpaceException::what() const throw()
{
    return "Error: NotEnoughSpaceException - Not enough space in the container";
}

const char *Span::NotEnoughItemsException::what() const throw()
{
    return "Error: NotEnoughItemsException - Not enough items to compare in "
           "the container";
}

/* ************************************************************************** */
