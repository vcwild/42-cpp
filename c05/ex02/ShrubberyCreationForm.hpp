/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:06:59 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:07:00 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

class ShrubberyCreationForm : public Form {

public:
    ShrubberyCreationForm( std::string const &target );
    ShrubberyCreationForm( ShrubberyCreationForm const &src );
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=( ShrubberyCreationForm const &rhs );

    void execute( Bureaucrat const &src ) const;

    std::string const &getTarget() const;
    std::string const &getTree() const;

    class FileOpenException : public std::exception {
        virtual const char *what() const throw();
    };

    class FileWriteException : public std::exception {
        virtual const char *what() const throw();
    };

private:
    static std::string const _name;
    static std::string const _tree;
    std::string const        _target;
    bool                     _signed = false;
    int const                _gradeToSign;
    int const                _gradeToExecute;
};

typedef ShrubberyCreationForm SCF;

std::ostream &operator<<( std::ostream &o, ShrubberyCreationForm const &i );

#endif
