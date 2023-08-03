#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Alloated on the heap." << std::endl;
	Zombie	*zom1 = newZombie("Mos");
	(*zom1).announce();
	delete zom1;

	std::cout << "Alloated on the stack." << std::endl;
	randomChump("Prach");
}