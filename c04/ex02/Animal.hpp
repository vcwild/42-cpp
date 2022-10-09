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
    void        printBrainAddress() const;
    void        printIdea( int index ) const;

    virtual void makeSound() const = 0; /* a pure function declaration turns a
                                           class into an abstract class */

    Animal &operator=( Animal const &rhs );

protected:
    std::string _type;
    Brain      *_brain;
};

typedef Animal AbstractAnimal;

#endif
