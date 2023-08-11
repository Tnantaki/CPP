#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:public ScavTrap,public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(std::string const& name);
	DiamondTrap(DiamondTrap const& other);
	DiamondTrap&	operator=(DiamondTrap const& rhs);
	~DiamondTrap();

	using	ScavTrap::attack;
	void	whoAmI();
};

#endif