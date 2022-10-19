/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:07:21 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:07:22 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cassert>
#include <cstdlib>

void testCreateShrubbery()
{
    Intern intern;
    Form  *form = intern.makeForm( "shrubbery creation", "Igor" );

    assert( form != NULL );
    assert( form->getName() == "shrubbery creation" );
    assert( form->getTarget() == "Igor" );
    assert( form->getSigned() == false );
    assert( form->getGradeToSign() == 145 );
    assert( form->getGradeToExecute() == 137 );

    delete form;
}

void testCreateRobotomy()
{
    Intern intern;
    Form  *form = intern.makeForm( "robotomy request", "Igor" );

    assert( form != NULL );
    assert( form->getName() == "robotomy request" );
    assert( form->getTarget() == "Igor" );
    assert( form->getSigned() == false );
    assert( form->getGradeToSign() == 72 );
    assert( form->getGradeToExecute() == 45 );

    delete form;
}

void testCreatePresidentialPardon()
{
    Intern intern;
    Form  *form = intern.makeForm( "presidential pardon", "Igor" );

    assert( form != NULL );
    assert( form->getName() == "presidential pardon" );
    assert( form->getTarget() == "Igor" );
    assert( form->getSigned() == false );
    assert( form->getGradeToSign() == 25 );
    assert( form->getGradeToExecute() == 5 );

    delete form;
}

void testCreateUnavailableForm()
{
    Intern intern;
    try {
        Form *form = intern.makeForm( "shrubbery creation2", "Igor" );
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    testCreateShrubbery();
    testCreateRobotomy();
    testCreatePresidentialPardon();
    testCreateUnavailableForm();

    return 0;
}
