/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:29 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:31 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl harl;

    harl.complain( "DEBUG" );
    harl.complain( "INFO" );
    harl.complain( "WARNING" );
    harl.complain( "ERROR" );
    return 0;
}
