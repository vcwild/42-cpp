/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:30 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:03:32 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat();
    Cat( Cat const &instance );
    virtual ~Cat();

    Cat &operator=( Cat const &rhs );

    void makeSound() const;

private:
    Brain *_brain;
};

#endif
