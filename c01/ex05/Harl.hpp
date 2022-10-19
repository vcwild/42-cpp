/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:59:25 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:59:27 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {

public:
    Harl();
    ~Harl();

    void complain( std::string level );

private:
    void _debug( void );
    void _info( void );
    void _warning( void );
    void _error( void );

    void _dispatch( std::string level );
};

#endif
