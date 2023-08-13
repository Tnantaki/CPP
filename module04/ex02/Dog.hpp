#ifndef DOG_HPP
# define DOG_HPP

#include "AbAnimal.hpp"

class Dog:public AbAnimal
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