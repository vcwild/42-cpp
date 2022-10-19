/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:11:10 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:11:11 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    {
        std::vector<int> vec;
        int              items[] = { 2, 4, 1, 7, 12 };
        unsigned int     arrsize = ( sizeof( items ) / sizeof( *items ) );
        for ( int i = 0; i < arrsize; i++ )
            vec.push_back( items[i] );
        std::vector<int>::iterator it  = easyfind( vec, 1 );
        int                        pos = it - vec.begin();
        std::cout << "Found " << *it << " at index " << pos << std::endl;
    }
}
