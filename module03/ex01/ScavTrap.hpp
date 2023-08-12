#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
private:
public:
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const& other);
	ScavTrap&	operator=(ScavTrap const& rhs);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif