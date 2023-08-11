#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_attdmg;
public:
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const& other);
	ClapTrap&	operator=(ClapTrap const& rhs);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amout);
	void	beRepaired(unsigned int amout);
};

#endif