#include <iostream>

int	num = 20;

int	main(void)
{
	int	num = 5;
	std::cout << num << std::endl;
	std::cout << ::num << std::endl;
	return (0);
}