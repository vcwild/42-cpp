/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:03:00 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:03:02 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal( WrongAnimal const &instance );
    virtual ~WrongAnimal();

    std::string getType() const;
    void        setType( std::string type );
    void makeSound() const; /* if member function is not virtual, it will be
                               replicated in the inheritance */

    WrongAnimal &operator=( WrongAnimal const &rhs );

protected:
    std::string _type;
};

#endif
