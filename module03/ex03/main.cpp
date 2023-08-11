#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond("Rudues");

	diamond.attack("Red dragon");
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	return 0;
}
