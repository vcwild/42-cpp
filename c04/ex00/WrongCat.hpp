/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:07 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:03:08 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCATCAT_HPP
#define WRONGCATCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat( WrongCat const &instance );
    virtual ~WrongCat();

    WrongCat &operator=( WrongCat const &rhs );

    void makeSound()
        const; /* this attribute is not overriding WrongAnimal makeSound,
                  because WrongAnimal::makeSound ins not virtual */
};

#endif
