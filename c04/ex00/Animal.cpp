#include "Animal.hpp"

Animal::Animal() { this->_type = "Animal"; }

Animal::Animal( Animal const &instance ) { *this = instance; }

Animal::~Animal() {}

Animal &Animal::operator=( Animal const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

std::string Animal::getType() const { return this->_type; }

void Animal::setType( std::string type ) { this->_type = type; }

void Animal::makeSound() const
{
    std::cout << "The " << this->_type << " does not know how to sound!"
              << std::endl;
}