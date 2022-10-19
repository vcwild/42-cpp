/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:11:00 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:11:01 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template<typename T> void iterElements( Array<T> &arr )
{
    try {
        int i = 0;
        while ( true ) {
            std::cout << "Accessing element: " << arr[i++] << std::endl;
        }
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    {
        Array<int> arr;

        std::cout << "arrInt size: " << arr.size() << std::endl;
    }
    std::cout << std::endl;
    size_t     size = 2;
    Array<int> arrInt( size );
    {
        std::cout << "arrInt size: " << arrInt.size() << std::endl;
        iterElements( arrInt );

        try {
            arrInt[-1];
        } catch ( std::exception &e ) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        Array<int> arrInt( 2 );
        Array<int> arrIntCopy( arrInt );

        std::cout << "arrIntCopy size: " << arrIntCopy.size() << std::endl;
        iterElements( arrIntCopy );
    }
    std::cout << std::endl;
    {
        arrInt[0] = 42;
        arrInt[1] = 21;

        Array<int> arrIntCopy( arrInt );
        iterElements( arrIntCopy );
    }
    std::cout << std::endl;
    {
        Array<char> arrChar( 3 );

        arrChar[0] = '7';
        arrChar[1] = 'x';
        arrChar[2] = '1';

        Array<char> arrCharCopy( arrChar );

        iterElements( arrCharCopy );
    }
}
