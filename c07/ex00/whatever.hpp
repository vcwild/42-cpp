/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:10:35 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:10:37 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T> void swap( T &first, T &second )
{
    T temp;

    temp   = first;
    first  = second;
    second = temp;
}

template<typename T> T min( T first, T second )
{
    if ( first < second )
        return first;
    return second;
}

template<typename T> T max( T first, T second )
{
    if ( first < second )
        return second;
    return first;
}

#endif
