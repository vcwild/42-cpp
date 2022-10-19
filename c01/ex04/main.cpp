/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:06 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:07 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NoSed.hpp"
#include <iostream>

int main( int argc, char *argv[] )
{
    if ( argc != 4 ) {
        std::cerr << "Usage: ./nosed <filename> <word> <replacement-word>"
                  << std::endl;
        return 1;
    }

    std::string filename( argv[1] );
    std::string word( argv[2] );
    std::string replacementWord( argv[3] );

    NoSed noSed( filename );
    noSed.doSed( word, replacementWord );
}
