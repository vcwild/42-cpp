/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:01:55 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:01:56 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:
    DiamondTrap();
    DiamondTrap( std::string name );
    DiamondTrap( DiamondTrap const &instance );
    ~DiamondTrap();

    void whoAmI( void );

private:
    std::string _name;
};

#endif
