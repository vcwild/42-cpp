/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:50 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:52 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <cassert>

void testConstructorCopy()
{
    Bureaucrat b1( "Bureaucrat1", 1 );
    Bureaucrat b2( b1 );
    assert( b1.getName() == b2.getName() );
    assert( b1.getGrade() == b2.getGrade() );
}

void testConstructorAssignment()
{
    Bureaucrat b1( "Bureaucrat1", 1 );
    Bureaucrat b2( "Bureaucrat2", 150 );
    b2 = b1;
    assert( b2.getGrade() == b1.getGrade() );
}

void testValidIncrement()
{
    Bureaucrat b1( "Bureaucrat1", 2 );
    b1.incrementGrade();
    assert( b1.getGrade() == 1 );
}

void testValidDecrement()
{
    Bureaucrat b1( "Bureaucrat1", 149 );
    b1.decrementGrade();
    assert( b1.getGrade() == 150 );
}

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
        Bureaucrat valid( "Valid", 42 );
        assert( valid.getName() == "Valid" );
        assert( valid.getGrade() == 42 );
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

    testCreateValidInstance();

    testConstructorCopy();

    testConstructorAssignment();

    testValidIncrement();

    testValidDecrement();
    return 0;
}
