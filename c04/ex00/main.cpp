/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:51 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/21 23:12:18 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void testInstance()
{
    Animal      meta;
    Dog         dog;
    Cat         cat;
    WrongAnimal wrongMeta;
    WrongCat    wrongCat;

    std::cout << "Cat type is: " << cat.getType() << std::endl;
    std::cout << "Dog type is: " << dog.getType() << std::endl;
    std::cout << "WrongCat type is: " << wrongCat.getType() << std::endl;

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

    std::cout << "Cat type is: " << cat->getType() << std::endl;
    std::cout << "Dog type is: " << dog->getType() << std::endl;
    std::cout << "WrongCat type is: " << wrongCat->getType() << std::endl;

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

    std::cout << "Cat type is: " << catCopy.getType() << std::endl;
    std::cout << "Dog type is: " << dogCopy.getType() << std::endl;
    std::cout << "WrongCat type is: " << wrongCatCopy.getType() << std::endl;

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
