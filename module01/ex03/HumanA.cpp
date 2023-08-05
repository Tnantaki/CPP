#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	if (this->_weapon == NULL)	
		std::cout << this->_name << " don't have weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
}