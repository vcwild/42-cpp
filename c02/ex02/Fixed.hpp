/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:27 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:29 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>

class Fixed {

public:
    Fixed();
    Fixed( int const value );
    Fixed( float const value );
    Fixed( Fixed const &instanceToCopy );
    ~Fixed();

    int   getRawBits( void ) const;
    void  setRawBits( int const raw );
    float toFloat( void ) const;
    int   toInt( void ) const;

    Fixed &operator=( Fixed const &right );
    Fixed  operator+( Fixed const &right );
    Fixed  operator-( Fixed const &right );
    Fixed  operator*( Fixed const &right );
    Fixed  operator/( Fixed const &right );

    Fixed  operator++( int );
    Fixed &operator++( void );
    Fixed  operator--( int );
    Fixed &operator--( void );

    bool operator>( Fixed const &right ) const;
    bool operator<( Fixed const &right ) const;
    bool operator>=( Fixed const &right ) const;
    bool operator<=( Fixed const &right ) const;
    bool operator==( Fixed const &right ) const;
    bool operator!=( Fixed const &right ) const;

    static Fixed       &min( Fixed &left, Fixed &right );
    static const Fixed &min( Fixed const &left, Fixed const &right );
    static Fixed       &max( Fixed &left, Fixed &right );
    static const Fixed &max( Fixed const &left, Fixed const &right );

private:
    int              _rawBits;
    static const int _fractionalBits = 8;

    float _getFractionalLeftShift( void ) const;
};

std::ostream &operator<<( std::ostream &output, Fixed const &value );

#endif
