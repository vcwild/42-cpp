/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:17 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:18 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <string>

class IMateriaSource {

public:
    virtual ~IMateriaSource() {};
    virtual void      learnMateria( AMateria *m )              = 0;
    virtual AMateria *createMateria( std::string const &type ) = 0;
};

#endif
