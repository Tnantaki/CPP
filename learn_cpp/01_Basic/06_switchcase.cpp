#include <iostream>

int	main(void)
{
	int	month;
	std::cout << "Enter number of month (1-12) :";
	std::cin >> month;

	switch (month)
	{
	case 1:
		std::cout << "It's January";
		break;
	case 2:
		std::cout << "It's February";
		break;
	default:
		std::cout << "Please Enter number 1 - 12";
		break;
	}
	std::cout << std::endl;
	return (0);
}