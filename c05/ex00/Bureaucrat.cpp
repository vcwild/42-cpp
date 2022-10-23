/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:42 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 13:54:58 by vwildner         ###   ########.fr       */
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

Bureaucrat::Bureaucrat( std::string const &name, int grade ) :
    _name( name ), _grade( grade )
{
    if ( grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    if ( grade < 1 )
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat " << _name << " created with grade " << _grade
              << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) :
    _name( src._name ), _grade( src._grade )
{
    std::cout << "Bureaucrat reference " << _name << " created with grade "
              << _grade << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << _name << " destroyed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rhs )
{
    this->_grade = rhs.getGrade();
    return *this;
}

std::string const &Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

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

std::ostream &operator<<( std::ostream &o, Bureaucrat const &src )
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}
