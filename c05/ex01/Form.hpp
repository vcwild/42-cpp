#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form {

public:
    Form();
    Form( std::string const &name, int gradeToSign, int gradeToExecute );
    Form( Form const &src );
    ~Form();

    Form &operator=( Form const &rhs );

    void beSigned( Bureaucrat const &src );
    void signForm( Bureaucrat const &src );

    std::string const &getName() const;
    bool               getSigned() const;
    int                getGradeToSign() const;
    int                getGradeToExecute() const;

    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw();
    };

private:
    std::string const _name;
    bool              _signed = false;
    int const         _gradeToSign;
    int const         _gradeToExecute;
};

std::ostream &operator<<( std::ostream &o, Form const &i );

#endif
