#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <string>

class Cure : public AMateria {

public:
    Cure();
    Cure( Cure const &type );
    virtual ~Cure();

    Cure &operator=( Cure const &rhs );

    Cure *clone() const;
    void  use( ICharacter &target );

private:
};

#endif
