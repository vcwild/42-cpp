/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:07:15 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:07:16 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() {}

Intern::Intern( const Intern &src ) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::_makeShrubberyCreationForm( std::string const &target )
{
    return new ShrubberyCreationForm( target );
}

Form *Intern::_makeRobotomyRequestForm( std::string const &target )
{
    return new RobotomyRequestForm( target );
}

Form *Intern::_makePresidentialPardonForm( std::string const &target )
{
    return new PresidentialPardonForm( target );
}

Form *Intern::makeForm( std::string const &formName, std::string const &target )
{
    std::string availableForms[3] = { SCF_NAME, RRF_NAME, PPF_NAME };

    Form *( Intern::*handle[3] )( std::string const &target )
        = { &Intern::_makeShrubberyCreationForm,
              &Intern::_makeRobotomyRequestForm,
              &Intern::_makePresidentialPardonForm };

    for ( int i = 0; i < 3; i++ ) {
        if ( formName == availableForms[i] ) {
            std::cout << "Intern creates " << formName << " form" << std::endl;
            return ( this->*handle[i] )( target );
        }
    }

    throw Intern::FormNotFoundException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Error: FormNotFoundException - Form not found";
}
