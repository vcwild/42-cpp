/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:02 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:04 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

public:
    Brain();
    Brain( const Brain &src );
    ~Brain();

    std::string getIdea( int index ) const;

    std::string ideas[100];

private:
};

#endif
