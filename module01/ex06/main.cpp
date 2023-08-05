#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
	{
		std::cerr << "The program take one parameter" << std::endl;
		return (1);
	}
	harl.complainFilter(argv[1]);
	return (0);
}
