/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:58 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:00 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>

class Fixed {

public:
    Fixed();
    Fixed( Fixed const &instanceToCopy );
    ~Fixed();

    int  getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed &operator=( Fixed const &rightHandSide );

private:
    int              _rawBits;
    static const int _fractionalBits = 8;
};

#endif
