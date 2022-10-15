#include "iter.hpp"

#define i_size( x ) sizeof( x ) / sizeof( x[0] )

int main( void )
{
    int         ints[]    = { 1, 2, 3 };
    double      doubles[] = { 1.232, -21323.34, 22345.453634 };
    std::string strings[] = { "nevermind", "tgg", "bug", "binno", "7x1" };

    iter<int>( ints, 3, show );
    std::cout << std::endl;
    iter<double>( doubles, i_size( doubles ), show );
    std::cout << std::endl;
    iter<std::string>( strings, i_size( strings ), show );
}
