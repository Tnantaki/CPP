#include <iostream>

int	main(void)
{
	std::string	foods[][3] = {{"Noodle", "Omlet", "Sushi"},
							 {"Banana", "Papaya", "Coconut"},
							 {"Soymilk", "Almonmilk", "Dairy"}};

	std::cout << "sizeof(foods) :" << sizeof(foods) << std::endl;
	std::cout << "sizeof(foods[0]) :" << sizeof(foods[0]) << std::endl;
	int	row = sizeof(foods) / sizeof(foods[0]);
	int	collumn = sizeof (foods[0]) / sizeof (foods[0][0]);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < collumn; j++)
			std::cout << foods[i][j] << " ";
		std::cout << std::endl;
	}
	return (0);
}
