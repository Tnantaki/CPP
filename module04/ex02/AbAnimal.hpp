#ifndef ABANIMAL_HPP
# define ABANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AbAnimal
{
protected:
	std::string	_type;
public:
	AbAnimal();
	AbAnimal(std::string const& type);
	AbAnimal(AbAnimal const& other);
	AbAnimal&	operator=(AbAnimal const& rhs);
	virtual ~AbAnimal();

	std::string		getType() const;
	virtual void	makeSound() const = 0;
};

#endif