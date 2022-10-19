/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:21 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:22 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
    ScavTrap();
    ScavTrap( std::string name );
    ScavTrap( ScavTrap const &instance );
    ~ScavTrap();

    ScavTrap &operator=( ScavTrap const &right );

    void guardGate();
};

#endif
