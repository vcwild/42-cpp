/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:09:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:09:08 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public Form {

public:
    RobotomyRequestForm( std::string const &target );
    RobotomyRequestForm( RobotomyRequestForm const &src );
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=( RobotomyRequestForm const &rhs );

    void execute( Bureaucrat const &src ) const;

    std::string const &getTarget() const;

    class RobotomyException : public std::exception {
        virtual const char *what() const throw();
    };

private:
    static std::string const _name;
    std::string const        _target;
    bool                     _signed = false;
    int const                _gradeToSign;
    int const                _gradeToExecute;
};

typedef RobotomyRequestForm RRF;
#define RRF_NAME "robotomy request"

std::ostream &operator<<( std::ostream &o, RobotomyRequestForm const &i );

#endif
