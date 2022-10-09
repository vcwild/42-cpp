#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    _brain      = new Brain();
}

Dog::Dog( Dog const &instance ) : Animal( instance ) { *this = instance; }

Dog::~Dog() { delete this->_brain; }

Dog &Dog::operator=( Dog const &rhs )
{
    this->_type  = rhs.getType();
    this->_brain = new Brain();
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The " << this->_type << " barks!" << std::endl;
}
