#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal( WrongAnimal const &instance );
    virtual ~WrongAnimal();

    std::string getType() const;
    void        setType( std::string type );
    void makeSound() const; /* if member function is not virtual, it will be
                               replicated in the inheritance */

    WrongAnimal &operator=( WrongAnimal const &rhs );

protected:
    std::string _type;
};

#endif
