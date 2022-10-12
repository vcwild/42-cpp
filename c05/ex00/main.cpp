#include "Bureaucrat.hpp"

void testInstanceLowerBounds()
{
    try {
        std::cout << "Trying to instantiate Caesar with grade 0" << std::endl;
        Bureaucrat caesar( "Caesar", 0 );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testInstanceUpperBounds()
{
    try {
        std::cout << "Trying to instantiate Paulo with grade 151" << std::endl;
        Bureaucrat paulo( "Paulo", 151 );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testIncrementToUpperBounds()
{
    try {
        std::cout << "Trying to instantiate Lucas with grade 150" << std::endl;
        Bureaucrat lucas( "Lucas", 150 );
        std::cout << lucas << std::endl;
        std::cout << "Trying to increment Lucas's grade" << std::endl;
        lucas.incrementGrade();
        std::cout << lucas << std::endl;
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testDecrementToLowerBounds()
{
    try {
        std::cout << "Trying to instantiate Diego with grade 1" << std::endl;
        Bureaucrat diego( "Diego", 1 );
        std::cout << diego << std::endl;
        std::cout << "Trying to decrement Diego's grade" << std::endl;
        diego.decrementGrade();
        std::cout << diego << std::endl;
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

void testCreateValidInstance()
{
    try {
        std::cout << "Trying to instantiate a valid Bureaucrat" << std::endl;
        Bureaucrat valid( "Valid", 42 );
        std::cout << valid << std::endl;
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "--- Testing a new instance with grade 0 ---" << std::endl;

    testInstanceLowerBounds();

    std::cout << "--- Testing a new instance with grade 151" << std::endl;
    testInstanceUpperBounds();

    std::cout << "--- Testing incrementing a new instance with grade 150 ---"
              << std::endl;
    testIncrementToUpperBounds();

    std::cout << " --- Testing decrementing a new instance with grade 1 ---"
              << std::endl;
    testDecrementToLowerBounds();

    std::cout << "--- Testing a new instance with grade 42 ---" << std::endl;
    testCreateValidInstance();

    return 0;
}
