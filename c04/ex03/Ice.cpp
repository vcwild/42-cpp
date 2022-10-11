#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria( "ice" ) {}

Ice::Ice( const Ice &type ) : AMateria( type ) {}

Ice::~Ice() {}

Ice &Ice::operator=( Ice const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

Ice *Ice::clone() const { return new Ice( *this ); }

void Ice::use( ICharacter &target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"
              << std::endl;
}
