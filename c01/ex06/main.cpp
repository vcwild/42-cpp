#include "Harl.hpp"

int main( int argc, char *argv[] )
{
    Harl harl;
    if ( argc != 2 )
        return (
            std::cout << "Error: invalid number of arguments" << std::endl, 1 );

    std::string input( argv[1] );
    harl.complain( input );

    return 0;
}
