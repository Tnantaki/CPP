#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "[Ice] Constructor Called" << std::endl;
}

Ice::Ice(Ice const& other) : AMateria(other._type)
{
	// std::cout << "[Ice] Copy Constructor Called" << std::endl;
}

Ice&	Ice::operator=(Ice const& rhs)
{
	// std::cout << "[Ice] Assignment Constructor Called" << std::endl;
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice()
{
	// std::cout << "[Ice] Destructor Called" << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria	*var = new Ice(*this);
	return (var);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}