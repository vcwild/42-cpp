#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {

public:
    Cat();
    Cat( Cat const &instance );
    virtual ~Cat();

    Cat &operator=( Cat const &rhs );

    void makeSound() const;
};

#endif
