#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    _brain      = new Brain();
}

Cat::Cat( Cat const &instance ) : Animal( instance ) { *this = instance; }

Cat::~Cat() { delete this->_brain; }

Cat &Cat::operator=( Cat const &rhs )
{
    this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The " << this->_type << " meows!" << std::endl;
}
