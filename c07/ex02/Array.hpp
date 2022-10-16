#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cctype>
#include <iostream>
#include <string>

template<typename T> class Array {

public:
    Array();
    Array( size_t size );
    Array( Array const &src );
    virtual ~Array();

    Array   &operator=( Array const &rhs );
    T const &operator[]( size_t index ) const;
    T       &operator[]( size_t index );

    size_t size() const;

    class OutOfRangeException : public std::exception {
        virtual const char *what() const throw();
    };

private:
    size_t _length;
    T     *_elements;
};

#include "Array.tpp"

#endif
