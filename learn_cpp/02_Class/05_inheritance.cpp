#include <iostream>

// ### Inheritance ###
// A class can recieve attributes and methods from another class
// Children classes inherit from a Parent class
// Helps to reuse similar code found within multiple classes
class Animal
{
	public:
		std::string name;	
		bool alive = true;
	
	// void	eating() {std::cout << this->name << " is eating!" << std::endl;}
	void	eating() {std::cout << " is eating!" << std::endl;}
};

class Dog : public Animal
{
	public:
	void	bark() {std::cout << "Dog goes Wooffff!" << std::endl;}
};

class Cat : public Animal
{
	public:
	void	meow() {std::cout << "Cat goes Meowww!" << std::endl;}
};


int	main(void)
{
	Dog dog;
	Cat cat;
	std::cout << "Name of dog :" << dog.name << std::endl;
	dog.bark();
	std::cout << "Name of cat :" << cat.name << std::endl;
	cat.meow();
	return (0);
}

