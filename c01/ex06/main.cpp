/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:45 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:46 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char *argv[] )
{
    Harl harl;
    if ( argc != 2 )
        return (
            std::cout << "Error: invalid number of arguments" << std::endl, 1 );

    std::string input( argv[1] );
    harl.complain( input );

    return 0;
}
