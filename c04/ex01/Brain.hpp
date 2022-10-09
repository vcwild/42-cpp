#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

public:
    Brain();
    Brain( const Brain &src );
    ~Brain();

    std::string getIdea( int index ) const;

    std::string ideas[100];

private:
};

#endif
