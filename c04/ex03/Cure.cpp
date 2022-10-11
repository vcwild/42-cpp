#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria( "cure" ) {}

Cure::Cure( const Cure &type ) : AMateria( type ) {}

Cure::~Cure() {}

Cure &Cure::operator=( Cure const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

Cure *Cure::clone() const { return new Cure( *this ); }

void Cure::use( ICharacter &target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
