/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:15 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:16 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    Dog( Dog const &instance );
    virtual ~Dog();

    Dog &operator=( Dog const &rhs );

    void makeSound() const;

private:
    Brain *_brain;
};

#endif
