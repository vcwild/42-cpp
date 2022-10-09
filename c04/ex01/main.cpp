#include "Cat.hpp"
#include "Dog.hpp"

#define MAX_ANIMALS 50

int main( void )
{
    const Animal *animals[MAX_ANIMALS];
    std::string   idea;

    for ( int i = 0; i < MAX_ANIMALS / 2; i++ ) {
        animals[i] = new Dog();
    }

    for ( int i = MAX_ANIMALS / 2; i < MAX_ANIMALS; i++ ) {
        animals[i] = new Cat();
    }

    for ( int i = 0; i < MAX_ANIMALS; i++ ) {
        animals[i]->makeSound();
        idea = animals[i]->getBrain().getIdea( i );
        std::cout << "Idea: " << idea << std::endl;
    }

    for ( int i = 0; i < MAX_ANIMALS; i++ )
        delete animals[i];

    return 0;
}
