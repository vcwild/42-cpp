/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:13 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:15 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
class ICharacter;
#include "AMateria.hpp"

class ICharacter {

public:
    virtual ~ICharacter() {};
    virtual std::string const &getName() const                    = 0;
    virtual void               equip( AMateria *m )               = 0;
    virtual void               unequip( int idx )                 = 0;
    virtual void               use( int idx, ICharacter &target ) = 0;
};

#endif
