#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("Robot");
	ClapTrap	ct("Rudeus");

	st.attack("Red Dragon");
	ct.attack("Red Dragon");

	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	return 0;
}
