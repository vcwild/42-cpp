/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:05 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:11 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
    Ice();
    Ice( Ice const &type );
    virtual ~Ice();

    Ice &operator=( Ice const &rhs );

    Ice *clone() const;
    void use( ICharacter &target );

private:
};

#endif
