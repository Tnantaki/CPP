#include "Zombie.hpp"

#define	N 5

int	main(void)
{
	Zombie	*zoms = zombieHorde(N, "Mos");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zom[" << i + 1 << "]: ";
		zoms[i].announce();
	}
	delete [] zoms;
	return (0);
}