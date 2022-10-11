#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
    Ice();
    Ice( Ice const &type );
    virtual ~Ice();

    Ice &operator=( Ice const &rhs );

    Ice *clone() const;
    void use( ICharacter &target );

private:
};

#endif
