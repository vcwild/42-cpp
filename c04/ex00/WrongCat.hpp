#ifndef WRONGCATCAT_HPP
#define WRONGCATCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat( WrongCat const &instance );
    virtual ~WrongCat();

    WrongCat &operator=( WrongCat const &rhs );

    void makeSound()
        const; /* this attribute is not overriding WrongAnimal makeSound,
                  because WrongAnimal::makeSound ins not virtual */
};

#endif
