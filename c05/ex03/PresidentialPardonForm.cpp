/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:08:58 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 13:59:21 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <fstream>
#include <time.h>

std::string const PPF::_name = PPF_NAME;

PPF::PresidentialPardonForm( std::string const &target ) :
    Form( _name, 25, 5 ), _target( target ),
    _gradeToSign( Form::getGradeToSign() ),
    _gradeToExecute( Form::getGradeToExecute() )
{
    std::cout << "PresidentialPardonForm " << _name
              << " created with grade to sign " << _gradeToSign
              << " and grade to execute " << _gradeToExecute << std::endl;
}

PPF::PresidentialPardonForm( PPF const &src ) :
    Form( _name, src._gradeToSign, src._gradeToExecute ),
    _gradeToSign( src._gradeToSign ), _gradeToExecute( src._gradeToExecute ),
    _target( src._target )
{
    std::cout << "PresidentialPardonForm reference " << _name
              << " created with grade to sign " << _gradeToSign
              << " and grade to execute " << _gradeToExecute << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PPF::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm " << _name << " destroyed"
              << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PPF &PPF::operator=( PPF const &rhs )
{
    ( void ) rhs;
    return *this;
}

std::ostream &operator<<( std::ostream &o, PresidentialPardonForm const &i )
{
    o << "Form " << i.getName() << " has a grade to sign of "
      << i.getGradeToSign() << " and a grade to execute of "
      << i.getGradeToExecute() << ". It is " << ( i.getSigned() ? "" : "not " )
      << "signed." << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PPF::execute( Bureaucrat const &src ) const
{
    Form::execute( src );
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox."
              << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &PPF::getTarget() const { return _target; }
