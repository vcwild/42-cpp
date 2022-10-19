/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:56 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:57 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <string>

class Cure : public AMateria {

public:
    Cure();
    Cure( Cure const &type );
    virtual ~Cure();

    Cure &operator=( Cure const &rhs );

    Cure *clone() const;
    void  use( ICharacter &target );

private:
};

#endif
