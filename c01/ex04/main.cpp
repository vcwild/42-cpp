#include "NoSed.hpp"
#include <iostream>

int main( int argc, char *argv[] )
{
    if ( argc != 4 ) {
        std::cout << "Usage: ./nosed <filename> <word> <replacement-word>"
                  << std::endl;
        return 1;
    }

    std::string filename( argv[1] );
    std::string word( argv[2] );
    std::string replacementWord( argv[3] );

    NoSed noSed( filename );
    noSed.doSed( word, replacementWord );
}
