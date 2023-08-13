#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete	j;
	delete	i;

	std::cout << "---------------------------" << std::endl;
	Animal*	animals[] = {new Dog(), new Cat()};

	for (int i = 0; i < 2; i++)
		delete animals[i];

	std::cout << "---------------------------" << std::endl;
	Dog	dog1;
	Dog	dog2;

	dog1 = dog2;
	Dog	basic;
	{
		Dog	tmp = basic;
	}
	return 0;
}
