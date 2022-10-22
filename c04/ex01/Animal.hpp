/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:15 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 23:24:08 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal {

public:
    Animal();
    Animal( Animal const &instance );
    virtual ~Animal();

    std::string getType() const;
    void        setType( std::string type );
    Brain      &getBrain() const;
    void        printBrainAddress() const;
    void        printIdea( int index ) const;

    virtual void makeSound() const;

    Animal &operator=( Animal const &rhs );

protected:
    std::string _type;
    Brain      *_brain;
};

#endif
