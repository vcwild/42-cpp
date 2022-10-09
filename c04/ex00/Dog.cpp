#include "Dog.hpp"

Dog::Dog() { this->_type = "Dog"; }

Dog::~Dog() {}

Dog &Dog::operator=( Dog const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The " << this->_type << " barks!" << std::endl;
}
