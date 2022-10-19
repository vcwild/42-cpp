#include "Span.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>

void show( std::string const &name, Span &span )
{
    std::cout << name << "\t";
    span.printItems();
    std::cout << name << "\tSpan: shortest: " << span.shortestSpan()
              << " | longest: " << span.longestSpan() << std::endl
              << std::endl;
}

int main( void )
{
    std::srand( time( NULL ) );

    Span span( 5 );
    span.addNumber( 5 );
    span.addNumber( 3 );
    span.addNumber( 17 );
    span.addNumber( 9 );
    span.addNumber( 11 );
    show( "5 Numbers", span );

    {
        Span spanCopy( span );
        show( "Copy", spanCopy );
        try {
            spanCopy.addNumber( 23 );
        } catch ( std::exception &e ) {
            std::cout << e.what() << std::endl << std::endl;
        }
    }
    {
        Span spanAssign = span;
        show( "Assign", spanAssign );
        try {
            spanAssign.addNumber( 23 );
        } catch ( std::exception &e ) {
            std::cout << e.what() << std::endl << std::endl;
        }
    }
    return 0;
}
