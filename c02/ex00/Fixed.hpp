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
