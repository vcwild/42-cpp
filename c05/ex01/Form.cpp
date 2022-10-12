#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form( std::string const &name, int gradeToSign, int gradeToExecute ) :
    _name( name ), _gradeToSign( gradeToSign ),
    _gradeToExecute( gradeToExecute )
{
    if ( gradeToSign > 150 || gradeToExecute > 150 )
        throw Form::GradeTooLowException();
    if ( gradeToSign < 1 || gradeToExecute < 1 )
        throw Form::GradeTooHighException();
}

Form::Form( const Form &src ) :
    _name( src._name ), _gradeToSign( src._gradeToSign ),
    _gradeToExecute( src._gradeToExecute )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=( Form const &rhs )
{
    // if ( this != &rhs )
    //{
    // this->_value = rhs.getValue();
    //}
    return *this;
}

std::ostream &operator<<( std::ostream &o, Form const &i )
{
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned( Bureaucrat const &src )
{
    if ( src.getGrade() > this->getGradeToSign() )
        throw Form::GradeTooLowException();
    this->_signed = true;
}

void Form::signForm( Bureaucrat const &src )
{
    try {
        this->beSigned( src );
        std::cout << src.getName() << " signs " << this->getName() << std::endl;
    } catch ( std::exception &e ) {
        std::cout << src.getName() << " cannot sign " << this->getName()
                  << " because " << e.what() << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Form::getName() const { return this->_name; }

bool Form::getSigned() const { return this->_signed; }

int Form::getGradeToSign() const { return this->_gradeToSign; }

int Form::getGradeToExecute() const { return this->_gradeToExecute; }

/*
** --------------------------------- EXCEPTIONS -------------------------------
*/

const char *Form::GradeTooHighException::what() const throw()
{
    return "Error: GradeTooHighException - Form grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Error: GradeTooLowException - Form grade is too low";
}
