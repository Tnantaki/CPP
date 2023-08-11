#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name) : _name(name)
, _hp(10), _energy(10), _attdmg(0)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& other) : _name(other._name)
,_hp(other._hp), _energy(other._energy), _attdmg(other._attdmg)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "ClapTrap Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_attdmg = rhs._attdmg;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " was death" <<std::endl;
	}
	else if (this->_energy > 0)
	{
		this->_energy -= 1;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_attdmg;
		std::cout << " points of damage!" <<std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " not enough energy point" <<std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amout)
{
	if (this->_hp > 0)
	{
		if (amout > this->_hp)
			this->_hp = 0;
		else
			this->_hp -= amout;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " take damage " << amout;
		std::cout << ", causing " << this->_hp;
		std::cout << " hit points left!" <<std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " was death" <<std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amout)
{
	if (this->_energy > 0)
	{
		this->_energy -= 1;
		this->_hp += amout;
		std::cout << "ClapTrap " << this->_name;
		std::cout << " be repaired  " << amout;
		std::cout << ", causing " << this->_hp;
		std::cout << " hit points left!" <<std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " not enough energy point" <<std::endl;
	}
}