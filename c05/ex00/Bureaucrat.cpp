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
        throw Bureaucrat::GradeTooHighException();
    if ( grade < 1 )
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &src ) { *this = src; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rhs )
{
    if ( this != &rhs ) {
        this->_grade = rhs.getGrade();
    }
    return *this;
}

std::string const &Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::incrementGrade()
{
    if ( this->getGrade() + 1 > 150 )
        throw Bureaucrat::GradeTooHighException();
    this->_grade++;
}

void Bureaucrat::decrementGrade()
{
    if ( this->getGrade() - 1 < 1 )
        throw Bureaucrat::GradeTooLowException();
    this->_grade--;
}

std::ostream &operator<<( std::ostream &o, Bureaucrat const &src )
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}
