#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal {

public:
    Animal();
    Animal( Animal const &instance );
    virtual ~Animal();

    std::string getType() const;
    void        setType( std::string type );
    Brain      &getBrain() const;

    virtual void makeSound() const;

    Animal &operator=( Animal const &rhs );

protected:
    std::string _type;
    Brain      *_brain;
};

#endif
