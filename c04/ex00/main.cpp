/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:51 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 12:22:52 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <cassert>

void testInstance()
{
    Animal      meta;
    Dog         dog;
    Cat         cat;
    WrongAnimal wrongMeta;
    WrongCat    wrongCat;

    assert( cat.getType() == "Cat" );
    assert( dog.getType() == "Dog" );
    assert( wrongCat.getType() == "WrongCat" );

    meta.makeSound();
    cat.makeSound();
    dog.makeSound();

    wrongMeta.makeSound();
    wrongCat.makeSound();
}

void testPointers()
{
    const Animal      *meta      = new Animal();
    const Animal      *dog       = new Dog();
    const Animal      *cat       = new Cat();
    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat  = new WrongCat();

    assert( cat->getType() == "Cat" );
    assert( dog->getType() == "Dog" );
    assert( wrongCat->getType() == "WrongCat" );

    meta->makeSound();
    cat->makeSound();
    dog->makeSound();

    wrongMeta->makeSound();
    wrongCat->makeSound();

    delete meta;
    delete dog;
    delete cat;
    delete wrongMeta;
    delete wrongCat;
}

void testCopies()
{
    Animal      meta;
    Dog         dog;
    Cat         cat;
    WrongAnimal wrongMeta;
    WrongCat    wrongCat;

    Animal      metaCopy( meta );
    Dog         dogCopy( dog );
    Cat         catCopy( cat );
    WrongAnimal wrongMetaCopy( wrongMeta );
    WrongCat    wrongCatCopy( wrongCat );

    assert( catCopy.getType() == "Cat" );
    assert( dogCopy.getType() == "Dog" );
    assert( wrongCatCopy.getType() == "WrongCat" );

    metaCopy.makeSound();
    catCopy.makeSound();
    dogCopy.makeSound();

    wrongMetaCopy.makeSound();
    wrongCatCopy.makeSound();
}

int main( void )
{
    testInstance();
    testPointers();
    testCopies();

    return 0;
}
