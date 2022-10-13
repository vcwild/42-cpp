#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;
#include "Form.hpp"
#include <iostream>
#include <string>

class Bureaucrat {
private:
    Bureaucrat();

public:
    Bureaucrat( std::string const &name, int grade );
    Bureaucrat( Bureaucrat const &src );
    ~Bureaucrat();

    Bureaucrat &operator=( Bureaucrat const &rhs );

    class GradeTooHighException : public std::exception {
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw();
    };

    std::string const &getName() const;
    int                getGrade() const;
    bool               getExecutedForm() const;

    void incrementGrade();
    void decrementGrade();

    void executeForm( Form const &form );

protected:
    std::string const _name;
    int               _grade;
    bool              _executedForm = false;
};

std::ostream &operator<<( std::ostream &o, Bureaucrat const &src );

#endif
