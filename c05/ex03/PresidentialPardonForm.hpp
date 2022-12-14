/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:09:01 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:09:02 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public Form {

public:
    PresidentialPardonForm( std::string const &target );
    PresidentialPardonForm( PresidentialPardonForm const &src );
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );

    void execute( Bureaucrat const &src ) const;

    std::string const &getTarget() const;

private:
    static std::string const _name;
    std::string const        _target;
    bool                     _signed = false;
    int const                _gradeToSign;
    int const                _gradeToExecute;
};

typedef PresidentialPardonForm PPF;
#define PPF_NAME "presidential pardon"

std::ostream &operator<<( std::ostream &o, PresidentialPardonForm const &i );

#endif
