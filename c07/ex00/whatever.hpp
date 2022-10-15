#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T> void _swap( T &first, T &second )
{
    T temp;

    temp   = first;
    first  = second;
    second = temp;
}

template<typename T> T min( T first, T second )
{
    if ( first < second )
        return first;
    return second;
}

template<typename T> T max( T first, T second )
{
    if ( first < second )
        return second;
    return first;
}

#endif
