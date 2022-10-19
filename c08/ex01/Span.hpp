/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:11:32 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:11:35 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <string>

class Span {
public:
    Span();
    Span( unsigned int size );
    Span( Span const &src );
    ~Span();

    Span &operator=( Span const &rhs );

    void                      addNumber( int number );
    template<typename T> void addNumber( T begin, T end );

    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
    void         printItems() const;

    class NotEnoughSpaceException : public std::exception {
        virtual const char *what() const throw();
    };

    class NotEnoughItemsException : public std::exception {
        virtual const char *what() const throw();
    };

private:
    unsigned int  _size;
    std::set<int> _numbers;
};

#endif
