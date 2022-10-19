/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:58:14 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 19:58:17 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIEHORDE_HPP__
#define __ZOMBIEHORDE_HPP__

#include <string>

Zombie *zombieHorde( int N, std::string name );

void disperseHorde( Zombie **box, int N );

#endif
