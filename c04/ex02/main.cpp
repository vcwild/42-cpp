/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:04:18 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/19 20:04:22 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define MAX_ANIMALS 4

void checkIdeas()
{
    const Animal *animals[MAX_ANIMALS];
    std::string   idea;
    Brain         brain;

    std::cout << "--------------- CHECKING IDEAS ---------------" << std::endl;

    for ( int i = 0; i < MAX_ANIMALS / 2; i++ ) {
        animals[i] = new Dog();
    }

    for ( int i = MAX_ANIMALS / 2; i < MAX_ANIMALS; i++ ) {
        animals[i] = new Cat();
    }

    for ( int i = 0; i < MAX_ANIMALS; i++ ) {
        animals[i]->makeSound();
        animals[i]->printIdea( i );
    }

    for ( int i = 0; i < MAX_ANIMALS; i++ )
        delete animals[i];
}

void checkCopies()
{
    Dog *dog1 = new Dog();
    Dog *dog2 = new Dog( *dog1 );
    Cat  cat1;
    Cat  cat2( cat1 );

    std::cout << "-------------- CHECKING COPIES ---------------" << std::endl;
    dog1->printBrainAddress();
    dog2->printBrainAddress();
    dog1->printIdea( 0 );
    dog2->printIdea( 0 );
    cat1.printBrainAddress();
    cat2.printBrainAddress();
    cat1.printIdea( 0 );
    cat2.printIdea( 0 );

    delete dog1;
    delete dog2;
}

int main( void )
{
    AbstractAnimal *animal; /* if you try to instantiate an abstract class, you
                       get an error */
    Cat c;

    animal = &c;
    animal->makeSound();

    return 0;
}
