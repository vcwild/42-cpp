/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:09:18 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:09:19 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"
#include <cassert>

int main( int argc, char *argv[] )
{
    if ( argc != 2 ) {
        std::cout << "Usage: ./convert [value]" << std::endl;
        return 1;
    }

    std::string strArg( argv[1] );
    Parser      parser( strArg );

    try {
        parser.execute();
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
        return 1;
    }

    return 0;
}
