#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() {}

AMateria::AMateria( const std::string &type ) { this->_type = type; }

AMateria::~AMateria() {}

std::string const &AMateria::getType() const { return this->_type; }

void AMateria::use( ICharacter &target )
{
    std::cout << "AMateria::use() called on " << target.getName() << std::endl;
}
