#include "MutantStack.hpp"
#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>

template<typename T> void iterate( MutantStack<T> &mutantStack )
{
    typename MutantStack<T>::iterator bottom = mutantStack.begin();
    typename MutantStack<T>::iterator top    = mutantStack.end();

    std::cout << "iterate:\t\t\t";
    while ( top != bottom ) {
        std::cout << *bottom << " ";
        bottom++;
    }
    std::cout << std::endl;
}

template<typename T> void constIterate( MutantStack<T> &mutantStack )
{
    typename MutantStack<T>::const_iterator bottom = mutantStack.begin();
    typename MutantStack<T>::const_iterator top    = mutantStack.end();

    std::cout << "const iterate:\t\t\t";
    while ( top != bottom ) {
        std::cout << *bottom << " ";
        bottom++;
    }
    std::cout << std::endl;
}

template<typename T> void reverseIterate( MutantStack<T> &mutantStack )
{
    typename MutantStack<T>::reverse_iterator bottom = mutantStack.rbegin();
    typename MutantStack<T>::reverse_iterator top    = mutantStack.rend();

    std::cout << "reverse iterate:\t\t";
    while ( top != bottom ) {
        std::cout << *bottom << " ";
        bottom++;
    }
    std::cout << std::endl;
}

template<typename T> void reverseConstIterate( MutantStack<T> &mutantStack )
{
    typename MutantStack<T>::const_reverse_iterator bottom
        = mutantStack.rbegin();
    typename MutantStack<T>::const_reverse_iterator top = mutantStack.rend();

    std::cout << "reverse const iterate:\t\t";
    while ( top != bottom ) {
        std::cout << *bottom << " ";
        bottom++;
    }
    std::cout << std::endl;
}

template<typename T>
void iterateSuit( std::string const &testName, MutantStack<T> &mutantStack )
{
    std::cout
        << "----------------------------------------------------------------- "
        << std::endl
        << testName << std::endl;
    iterate( mutantStack );
    constIterate( mutantStack );
    reverseIterate( mutantStack );
    reverseConstIterate( mutantStack );
    T t = mutantStack.top();
    mutantStack.pop();
    iterate( mutantStack );
    mutantStack.push( t );
    iterate( mutantStack );
    t = mutantStack.begin()[0];

    mutantStack.push( t );
    iterate( mutantStack );
    std::cout << "Stack final size: \t\t" << mutantStack.size() << std::endl;
}

int main( void )
{
    {
        std::string      testName = "5 NUMBERS";
        MutantStack<int> mutantStack;
        mutantStack.push( 5 );
        mutantStack.push( 3 );
        mutantStack.push( 17 );
        mutantStack.push( 9 );
        mutantStack.push( 11 );

        iterateSuit( testName, mutantStack );
    }
    {
        std::string              testName = "5 STRINGS";
        MutantStack<std::string> mutantStack;
        mutantStack.push( "five" );
        mutantStack.push( "three" );
        mutantStack.push( "seventeen" );
        mutantStack.push( "nine" );
        mutantStack.push( "eleven" );

        iterateSuit( testName, mutantStack );
    }
    {
        std::string        testName = "5 FLOATING POINT NUMBERS";
        MutantStack<float> mutantStack;
        mutantStack.push( 5.1f );
        mutantStack.push( 3.2f );
        mutantStack.push( 17.3f );
        mutantStack.push( 9.4f );
        mutantStack.push( 11.5f );

        iterateSuit( testName, mutantStack );
        {
            MutantStack<float> mutantStackCopy( mutantStack );
            iterateSuit( "COPY CONSTRUCTOR", mutantStackCopy );
        }
        {
            MutantStack<float> mutantStackAssign;
            mutantStackAssign = mutantStack;
            iterateSuit( "ASSIGN OPERATOR", mutantStackAssign );
        }
    }
    return 0;
}
