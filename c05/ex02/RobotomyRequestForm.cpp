/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:06:49 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:06:50 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <fstream>
#include <time.h>

std::string const RRF::_name = "RobotomyRequestForm";

RRF::RobotomyRequestForm( std::string const &target ) :
    Form( _name, 72, 45 ), _target( target ),
    _gradeToSign( Form::getGradeToSign() ),
    _gradeToExecute( Form::getGradeToExecute() )
{
}

RRF::RobotomyRequestForm( RRF const &src ) :
    Form( _name, src._gradeToSign, src._gradeToExecute ),
    _gradeToSign( src._gradeToSign ), _gradeToExecute( src._gradeToExecute ),
    _target( src._target )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RRF::~RobotomyRequestForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RRF &RRF::operator=( RRF const &rhs )
{
    ( void ) rhs;
    return *this;
}

std::ostream &operator<<( std::ostream &o, RobotomyRequestForm const &i )
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

void RRF::execute( Bureaucrat const &src ) const
{
    Form::execute( src );
    std::cout << "* drilling noises *" << std::endl;

    if ( rand() % 2 )
        std::cout << this->_target << " has been robotomized successfully."
                  << std::endl;
    else
        throw RobotomyException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &RRF::getTarget() const { return _target; }

/*
** --------------------------------- EXCEPTIONS -------------------------------
*/
const char *RRF::RobotomyException::what() const throw()
{
    return "Error: Robotomy failed.";
}
