/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:02 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:03 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
    FragTrap();
    FragTrap( std::string name );
    FragTrap( FragTrap const &instance );
    ~FragTrap();

    FragTrap &operator=( FragTrap const &right );

    void highFivesGuys( void );
};

#endif
