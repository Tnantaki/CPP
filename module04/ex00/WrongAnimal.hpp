#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(std::string const& type);
	WrongAnimal(WrongAnimal const& other);
	WrongAnimal&	operator=(WrongAnimal const& rhs);
	~WrongAnimal();

	std::string	getType() const;
	void		makeSound() const;
};

#endif