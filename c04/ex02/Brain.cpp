#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
    std::string activities[6] = {
        "sleep",
        "eat",
        "play",
        "run",
        "fight",
        "hunt",
    };

    for ( int i = 0; i < 100; i++ )
        this->ideas[i] = activities[rand() % 6];
}

Brain::Brain( const Brain &src ) { *this = src; }

Brain::~Brain() {}

std::string Brain::getIdea( int index ) const
{
    if ( index < 0 || index > 99 )
        index = 0;
    return this->ideas[index];
}
