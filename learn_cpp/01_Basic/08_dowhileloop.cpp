#include <iostream>

int	main(void)
{
	int	numb;
	do
	{
		std::cout << "Enter number :";
		std::cin >> numb;
	} while (numb < 0);
	std::cout << "The number is :" << numb << std::endl;
	return (0);
}