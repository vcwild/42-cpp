#include "Base.hpp"
#include <cstdlib>

void generateTest( int const seedNumber )
{
    std::srand( seedNumber );

    Base *randomPointer   = generate();
    Base &randomReference = *randomPointer;

    identify( randomPointer );
    identify( randomReference );

    delete randomPointer;
}

int main()
{
    generateTest( 2 );
    std::cout << std::endl;
    generateTest( 1 );
    std::cout << std::endl;
    generateTest( 11 );
}
