#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attdmg = 30;
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	std::cout << "FragTrap Assignment Operator Called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Give Me A High Five!" << std::endl;
}