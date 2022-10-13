#include "ShrubberyCreationForm.hpp"
#include <fstream>

std::string const SCF::_name = SCF_NAME;

std::string const SCF::_tree = "       # #### ####\n"
                               "     ### \\/#|### |/####\n"
                               "     ##\\/#/ \\||/##/_/##/_#\n"
                               "   ###  \\/###|/ \\/ # ###\n"
                               " ##_\\_#\\_\\## | #/###_/_####\n"
                               " ## #### # \\ #| /  #### ##/##\n"
                               "  __#_--###`  |{,###---###-~\n"
                               "             \\ }{\n"
                               "              }}{\n"
                               "              }}{\n"
                               "              {{}\n"
                               "  ~~~~{__--~~ .\\}\\\n"
                               "             `\\ }{\n"
                               "              }}{\n"
                               "              }}{\n"
                               "              {{}\n"
                               "              {{}\n"
                               "              {{}\n"
                               " ~~~~~~~{__--~~ .\\}\n";

SCF::ShrubberyCreationForm( std::string const &target ) :
    Form( _name, 145, 137 ), _target( target ),
    _gradeToSign( Form::getGradeToSign() ),
    _gradeToExecute( Form::getGradeToExecute() )
{
}

SCF::ShrubberyCreationForm( SCF const &src ) :
    Form( _name, src._gradeToSign, src._gradeToExecute ),
    _gradeToSign( src._gradeToSign ), _gradeToExecute( src._gradeToExecute ),
    _target( src._target )
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SCF::~ShrubberyCreationForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SCF &SCF::operator=( SCF const &rhs )
{
    ( void ) rhs;
    return *this;
}

std::ostream &operator<<( std::ostream &o, ShrubberyCreationForm const &i )
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

void SCF::execute( Bureaucrat const &src ) const
{
    Form::execute( src );
    std::string const filename = this->getTarget() + "_shrubbery";
    std::ofstream     out( filename.c_str(), std::ios::out | std::ios::app );
    if ( !out.is_open() )
        throw FileOpenException();
    out << this->_tree;
    out.close();
    if ( out.bad() )
        throw FileWriteException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &SCF::getTarget() const { return _target; }

std::string const &SCF::getTree() const { return _tree; }

/*
** --------------------------------- EXCEPTIONS -------------------------------
*/
const char *SCF::FileOpenException::what() const throw()
{
    return "Error: File could not be opened";
}

const char *SCF::FileWriteException::what() const throw()
{
    return "Error: File could not be written to";
}