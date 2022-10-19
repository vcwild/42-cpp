/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:04 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:06 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:
    Zombie **box;
    int      zombiesCount;

    Zombie( std::string name );
    ~Zombie();

    void announce( void );
    void announceParty( void );

    static Zombie *newZombie( std::string name );
    static void    randomChump( std::string name );

private:
    std::string        _name;
    static std::string _genZombieName( void );
};

#endif
