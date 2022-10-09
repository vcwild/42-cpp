#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
    std::string animalNames[] = {
        "Dog",
        "Cat",
        "Horse",
        "Cow",
        "Chicken",
        "Pig",
        "Sheep",
        "Goat",
    };

    for ( int i = 0; i < 100; i++ )
        this->ideas[i] = animalNames[rand() % 8];
}

Brain::Brain( const Brain &src ) { *this = src; }

Brain::~Brain() {}

std::string Brain::getIdea( int index ) const
{
    if ( index < 0 || index > 99 )
        index = 0;
    return this->ideas[index];
}
