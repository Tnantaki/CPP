#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// AbAnimal	ani; // Can't instantiate Abstract class
	AbAnimal	*dog = new Dog;
	AbAnimal	*cat = new Cat;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
	return 0;
}
