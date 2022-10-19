/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:57:46 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:57:48 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:
    Zombie( std::string name );
    ~Zombie();

    void           announce( void );
    static Zombie *newZombie( std::string name );
    static void    randomChump( std::string name );

private:
    std::string        _name;
    static std::string _genZombieName( void );
};

#endif
