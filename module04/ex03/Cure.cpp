#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "[Cure] Constructor Called" << std::endl;
}

Cure::Cure(Cure const& other) : AMateria(other._type)
{
	// std::cout << "[Cure] Copy Constructor Called" << std::endl;
}

Cure&	Cure::operator=(Cure const& rhs)
{
	// std::cout << "[Cure] Assignment Constructor Called" << std::endl;
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure()
{
	// std::cout << "[Cure] Destructor Called" << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria	*var = new Cure(*this);
	return (var);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}