/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:23 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:05:26 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );

    ICharacter *me = new Character( "me" );

    std::cout << "Let's create more Materia than what the inventory can hold:"
              << std::endl;
    AMateria *tmp;
    tmp = src->createMateria( "ice" );
    me->equip( tmp );
    tmp = src->createMateria( "cure" );
    me->equip( tmp );
    tmp = src->createMateria( "cure" );
    me->equip( tmp );
    tmp = src->createMateria( "cure" );
    me->equip( tmp );
    tmp = src->createMateria( "cure" );
    me->equip( tmp );

    // Unequip materia from the second slot
    me->unequip( 1 );
    // Now try to equip anything. Should be added to the next available slot
    me->equip( tmp );

    ICharacter *bob = new Character( "bob" );

    me->use( 0, *bob );
    me->use( 1, *bob );
    me->unequip( 0 );
    me->use( 0, *bob );

    delete bob;
    delete me;
    delete src;

    return 0;
}
