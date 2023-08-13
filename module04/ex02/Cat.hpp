#ifndef CAT_HPP
# define CAT_HPP

#include "AbAnimal.hpp"

class Cat:public AbAnimal
{
private:
	Brain*	_brain;
public:
	Cat();
	Cat(Cat const& other);
	Cat&	operator=(Cat const& rhs);
	~Cat();

	void	makeSound() const;
};

#endif