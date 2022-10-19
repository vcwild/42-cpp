/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:11:54 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:12:00 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T> MutantStack<T>::MutantStack() {};

template<typename T> MutantStack<T>::MutantStack( MutantStack const &src ) :
    std::stack<T>( src ) {};

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T> MutantStack<T>::~MutantStack() {};

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template<typename T>
MutantStack<T> &MutantStack<T>::operator=( MutantStack<T> const &rhs )
{
    std::stack<T>::operator=( rhs );
    return *this;
};

/*
** --------------------------------- METHODS ----------------------------------
*/

template<typename T> void MutantStack<T>::push( T const &value )
{
    std::stack<T>::push( value );
};

template<typename T> void MutantStack<T>::pop() { std::stack<T>::pop(); };

template<typename T> T MutantStack<T>::top() const
{
    return std::stack<T>::top();
}

template<typename T> size_t MutantStack<T>::size() const
{
    return std::stack<T>::size();
};

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::c.begin();
}

template<typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return std::stack<T>::c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return std::stack<T>::c.end();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return std::stack<T>::c.rbegin();
};

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return std::stack<T>::c.rend();
};

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return std::stack<T>::c.rbegin();
};

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return std::stack<T>::c.rend();
};

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
