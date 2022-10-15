#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T> void iter( T *arr, size_t size, void ( *fn )( T const & ) )
{
    for ( size_t i = 0; i < size; i++ )
        fn( arr[i] );
};

template<typename T> void show( T const &value )
{
    std::cout << value << std::endl;
};

#endif
