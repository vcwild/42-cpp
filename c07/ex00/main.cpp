/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:10:25 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:10:27 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap( c, d );
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

int tests()
{
    std::cout << "max(2,4) = " << max<int>( 2, 4 ) << std::endl;
    std::cout << "max(2,2) = " << max<int>( 2, 2 ) << std::endl;
    std::cout << "max(4,2) = " << max<int>( 4, 2 ) << std::endl;
    std::cout << "max(python,javascript) = "
              << max<std::string>( "python", "javascript" ) << std::endl;

    std::cout << std::endl;

    std::cout << "min(2,4) = " << min<int>( 2, 4 ) << std::endl;
    std::cout << "min(2,2) = " << min<int>( 2, 2 ) << std::endl;
    std::cout << "min(4,2) = " << min<int>( 4, 2 ) << std::endl;
    std::cout << "min(python,js) = " << min<std::string>( "python", "js" )
              << std::endl;

    {
        std::string s1 = "python";
        std::string s2 = "js";

        std::cout << "pre s1: " << s1 << std::endl;
        std::cout << "pre s2: " << s2 << std::endl << std::endl;

        ::swap<std::string>( s1, s2 );

        std::cout << "pos s1: " << s1 << std::endl;
        std::cout << "pos s2: " << s2 << std::endl << std::endl;
    }

    {
        int s1 = 2;
        int s2 = 22;

        std::cout << "pre s1: " << s1 << std::endl;
        std::cout << "pre s2: " << s2 << std::endl << std::endl;

        ::swap<int>( s1, s2 );

        std::cout << "pos s1: " << s1 << std::endl;
        std::cout << "pos s2: " << s2 << std::endl << std::endl;
    }

    return 0;
}
