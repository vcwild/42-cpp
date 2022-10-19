/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:58 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:59 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Error: GradeTooHighException - Bureaucrat grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Error: GradeTooLowException - Bureaucrat grade is too low";
}

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( std::string const &name, int grade ) :
    _name( name ), _grade( grade )
{
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) :
    _name( src._name ), _grade( src._grade )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rhs )
{
    this->_grade = rhs.getGrade();
    return *this;
}

std::ostream &operator<<( std::ostream &o, Bureaucrat const &src )
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::decrementGrade()
{
    if ( this->getGrade() + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::incrementGrade()
{
    if ( this->getGrade() - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }
