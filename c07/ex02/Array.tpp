/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:10:57 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:10:58 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstddef>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template<typename T> Array<T>::Array() : _length( 0 ), _elements( NULL ) {}

template<typename T> Array<T>::Array( size_t size ) :
    _length( size ), _elements( NULL )
{
    this->_elements = new T[size]();
}

template<typename T> Array<T>::Array( const Array<T> &src ) :
    _length( src.size() ), _elements( NULL )
{
    if ( src.size() > 0 ) {
        this->_elements = new T[src.size()]();
        for ( size_t i = 0; i < src.size(); i++ ) {
            this->_elements[i] = src._elements[i];
        }
    }
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template<typename T> Array<T>::~Array()
{
    if ( this->_length > 0 )
        delete[] this->_elements;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template<typename T> Array<T> &Array<T>::operator=( Array<T> const &rhs )
{
    if ( this->size() > 0 )
        delete[] this->_elements;

    this->_elements = NULL;

    if ( rhs.size() > 0 ) {
        this->_elements = new T[rhs.size()]();
        for ( size_t i = 0; i < rhs.size(); i++ ) {
            this->_elements[i] = rhs._elements[i];
        }
        this->_length = rhs.size();
    }

    return *this;
}

template<typename T> T &Array<T>::operator[]( size_t index )
{
    if ( index > this->size() )
        throw Array::OutOfRangeException();

    return this->_elements[index];
}

template<typename T> T const &Array<T>::operator[]( size_t index ) const
{
    return operator[]( index );
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
template<typename T> size_t Array<T>::size() const { return this->_length; }

/*
** --------------------------------- EXCEPTION --------------------------------
*/
template<typename T> const char *Array<T>::OutOfRangeException::what() const
    throw()
{
    return "Error: OutOfRangeException - The array index is out of range";
}

/* **************************************************************************
 */
