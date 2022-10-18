#include "Span.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>

void show( std::string const &name, Span &span )
{
    span.printItems();
    std::cout << name << ": ( shortest - " << span.shortestSpan()
              << ", longest - " << span.longestSpan() << " )" << std::endl;
}

int main( void )
{
    std::srand( time( NULL ) );

    Span span = Span( 5 );
    span.addNumber( 5 );
    span.addNumber( 3 );
    span.addNumber( 17 );
    span.addNumber( 9 );
    span.addNumber( 11 );
    show( "5 Numbers", span );

    return 0;
}
