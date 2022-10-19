/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:10:12 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:10:13 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

void generateTest( int const seedNumber )
{
    std::srand( seedNumber );

    Base *randomPointer   = generate();
    Base &randomReference = *randomPointer;

    identify( randomPointer );
    identify( randomReference );

    delete randomPointer;
}

int main()
{
    generateTest( 2 );
    std::cout << std::endl;
    generateTest( 1 );
    std::cout << std::endl;
    generateTest( 11 );
}
