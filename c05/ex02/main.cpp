/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:06:36 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:06:37 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cassert>
#include <cstdlib>

void testShrubberyTreeCreation()
{
    SCF        form( "test" );
    Bureaucrat b( "b", 1 );
    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == true );
}

void testShrubberyTreeCreationFailByExecute()
{
    SCF        form( "test" );
    Bureaucrat b( "b", 138 );

    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == false );
}

void testShrubberyTreeCreationFailBySigned()
{
    SCF        form( "test" );
    Bureaucrat b( "b", 146 );

    try {
        form.signForm( b );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( form.getSigned() == false );
}

void testCopyShrubberyTreeCreationNotSigned()
{
    SCF        form( "test" );
    Bureaucrat b( "b", 1 );
    form.signForm( b );
    SCF form2( form );
    try {
        assert( form.getSigned() == true );
        b.executeForm( form2 );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( form2.getSigned() == false );
}

void testCopyShrubberyTreeCreationSigned()
{
    SCF        form( "test" );
    Bureaucrat b( "b", 1 );
    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        SCF form2( form );
        assert( form2.getSigned() == false );
        form2.signForm( b );
        assert( form2.getSigned() == true );
        b.executeForm( form2 );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == true );
}

void testRobotomyRequestForm()
{
    RRF        form( "test" );
    Bureaucrat b( "b", 1 );
    srand( 0 );
    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == true );
}

void testRobotomyRequestFormFailBySeed()
{
    RRF        form( "test" );
    Bureaucrat b( "b", 45 );

    srand( 12 );
    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == false );
}

void testRobotomyRequestFormFailByExecute()
{
    RRF        form( "test" );
    Bureaucrat b( "b", 46 );

    srand( 0 );
    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == false );
}

void testRobotomyRequestFormFailBySigned()
{
    RRF        form( "test" );
    Bureaucrat b( "b", 138 );

    srand( 0 );

    try {
        form.signForm( b );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( form.getSigned() == false );
}

void testPresidentialPardonForm()
{
    PPF        form( "test" );
    Bureaucrat b( "b", 1 );
    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );

    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == true );
}

void testPresidentialPardonFormFailByExecute()
{
    PPF        form( "test" );
    Bureaucrat b( "b", 6 );

    try {
        form.signForm( b );
        assert( form.getSigned() == true );
        b.executeForm( form );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( b.getExecutedForm() == false );
}

void testPresidentialPardonFormFailBySigned()
{
    PPF        form( "test" );
    Bureaucrat b( "b", 26 );

    try {
        form.signForm( b );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
    assert( form.getSigned() == false );
}

int main()
{
    testShrubberyTreeCreation();
    testShrubberyTreeCreationFailByExecute();
    testShrubberyTreeCreationFailBySigned();
    testCopyShrubberyTreeCreationNotSigned();
    testCopyShrubberyTreeCreationSigned();

    testRobotomyRequestForm();
    testRobotomyRequestFormFailBySeed();
    testRobotomyRequestFormFailByExecute();
    testRobotomyRequestFormFailBySigned();

    testPresidentialPardonForm();
    testPresidentialPardonFormFailByExecute();
    testPresidentialPardonFormFailBySigned();

    return 0;
}
