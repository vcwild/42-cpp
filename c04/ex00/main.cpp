#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void )
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

    return 0;
}
