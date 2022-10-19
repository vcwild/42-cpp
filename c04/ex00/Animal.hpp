/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:29 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:02:30 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

public:
    Animal();
    Animal( Animal const &instance );
    virtual ~Animal();

    std::string  getType() const;
    void         setType( std::string type );
    virtual void makeSound() const;

    Animal &operator=( Animal const &rhs );

protected:
    std::string _type;
};

#endif
