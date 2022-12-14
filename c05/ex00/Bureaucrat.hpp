/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:46 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:48 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

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
    void               incrementGrade();
    void               decrementGrade();

protected:
    std::string const _name;
    int               _grade;
};

std::ostream &operator<<( std::ostream &o, Bureaucrat const &src );

#endif
