#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	ft("SnoopDogg");	

	ft.highFivesGuys();
	ft.takeDamage(20);
	ft.beRepaired(10);
	ft.attack("Red Dragon");
	return 0;
}
