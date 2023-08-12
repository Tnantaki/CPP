#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
private:
	Brain*	_brain;
public:
	Dog();
	Dog(Dog const& other);
	Dog&	operator=(Dog const& rhs);
	~Dog();

	void	makeSound() const;
};

#endif