#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] Constructor Called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const& other) : Animal(other)
{
	std::cout << "[Cat] Copy Constructor Called" << std::endl;
	this->_brain = new Brain();

	*this->_brain = *other._brain;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << "[Cat] Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		delete this->_brain;
		Animal::operator=(rhs);
		this->_brain = new Brain();
		*this->_brain = *rhs._brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "[Cat] Destructor Called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meaw Meaw!" << std::endl;
}
