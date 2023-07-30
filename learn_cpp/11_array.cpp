#include <iostream>

int	main(void)
{
	double	prices[] = {5.50, 7.25, 8.44, 10.00};
	for (int i = 0; i < 4; i++)
		std::cout << prices[i] << ", ";
	std::cout << std::endl;
	std::string fruits[7] = {"Apple", "Durian", "Banana", "Rumbutan", "Lychee", "Roseapple", "Pieapple"};
	for (int i = 0; i < 7; i++)
		std::cout << fruits[i] << ", ";
	std::cout << std::endl;
	return (0);
}