#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <map>

class ValueNotFoundException : public std::exception {
public:
    virtual const char *what() const throw()
    {
        return "Error: ValueNotFoundException - The target was not found for "
               "this collection";
    }
};

template<typename T> typename T::iterator easyfind( T &container, int number )
{
    typename T::iterator it = std::find( container.begin(), container.end(), number );

    if ( it == container.end() )
        throw ValueNotFoundException();

    return it;
};

template<typename kT, typename vT>
typename std::map<kT, vT>::iterator easyfind( std::map<kT, vT> &container, int number )
{
    typename std::map<kT, vT>::iterator it = container.begin();

    while ( it != container.end() ) {
        if ( it->second == number )
            return it;
        it++;
    }
    throw ValueNotFoundException();
};

#endif
