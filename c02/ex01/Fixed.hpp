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

    Fixed &operator=( Fixed const &rightHandSide );

private:
    int              _rawBits;
    static const int _fractionalBits = 8;
};

std::ostream &operator<<( std::ostream &output, Fixed const &value );

#endif
