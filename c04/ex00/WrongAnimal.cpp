#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { this->_type = "WrongAnimal"; }

WrongAnimal::WrongAnimal( WrongAnimal const &instance ) { *this = instance; }

WrongAnimal::~WrongAnimal() {}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

std::string WrongAnimal::getType() const { return this->_type; }

void WrongAnimal::setType( std::string type ) { this->_type = type; }

void WrongAnimal::makeSound() const
{
    std::cout << "The " << this->_type << " is simply wrong!" << std::endl;
}
