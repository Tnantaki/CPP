#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Constructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy Constructor Called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	std::cout << "[WrongCat] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor Called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meaw Meaw!" << std::endl;
}
