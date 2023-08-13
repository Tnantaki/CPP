#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{
	// std::cout << "[AMateria] Constructor Called" << std::endl;
}

AMateria::AMateria(AMateria const& other) : _type(other._type)
{
	// std::cout << "[AMateria] Copy Constructor Called" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const& rhs)
{
	// std::cout << "[AMateria] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

AMateria::~AMateria()
{
	// std::cout << "[AMateria] Destructor Called" << std::endl;
}

std::string const&	AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "There aren't material to use with" << target.getName() << std::endl;
}