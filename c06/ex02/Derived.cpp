#include "Base.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

class B : public Base {};

class C : public Base {};

class A : public Base {};

Base *generate( void )
{
    unsigned int randomNumber = std::rand() % 3;

    switch ( randomNumber ) {
    case 0:
        return ( std::cout << "Generated class A" << std::endl, new A() );
    case 1:
        return ( std::cout << "Generated class B" << std::endl, new B() );
    case 2:
        return ( std::cout << "Generated class C" << std::endl, new C() );
    }
    std::cout << "Error: no valid seed detected" << std::endl;
    return ( NULL );
};

void ofTypePointer( A const *a )
{
    if ( a != NULL )
        std::cout << "Type is A." << std::endl;
}

void ofTypePointer( B const *b )
{
    if ( b != NULL )
        std::cout << "Type is B." << std::endl;
}

void ofTypePointer( C const *c )
{
    if ( c != NULL )
        std::cout << "Type is C." << std::endl;
}

void identify( Base *p )
{
    ofTypePointer( dynamic_cast<A *>( p ) );
    ofTypePointer( dynamic_cast<B *>( p ) );
    ofTypePointer( dynamic_cast<C *>( p ) );
}

void identify( Base &p )
{
    Base *b = &p;

    identify( b );
}
