#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    virtual ~Dog();

    Dog &operator=( Dog const &rhs );

    void makeSound() const;

private:
    Brain *_brain;
};

#endif
