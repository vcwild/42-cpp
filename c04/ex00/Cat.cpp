#include "Cat.hpp"

Cat::Cat() { this->_type = "Cat"; }

Cat::Cat( Cat const &instance ) : Animal( instance ) { *this = instance; }

Cat::~Cat() {}

Cat &Cat::operator=( Cat const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The " << this->_type << " meows!" << std::endl;
}
