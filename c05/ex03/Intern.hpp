/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:07:18 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:07:19 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Intern {

public:
    Intern();
    Intern( Intern const &src );
    ~Intern();

    Form *makeForm( std::string const &formName, std::string const &target );

    class FormNotFoundException : public std::exception {
        virtual const char *what() const throw();
    };

private:
    Form *_makeShrubberyCreationForm( std::string const &target );
    Form *_makeRobotomyRequestForm( std::string const &target );
    Form *_makePresidentialPardonForm( std::string const &target );
};

#endif
