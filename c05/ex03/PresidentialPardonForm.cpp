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
}

PPF::PresidentialPardonForm( PPF const &src ) :
    Form( _name, src._gradeToSign, src._gradeToExecute ),
    _gradeToSign( src._gradeToSign ), _gradeToExecute( src._gradeToExecute ),
    _target( src._target )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PPF::~PresidentialPardonForm() {}

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
