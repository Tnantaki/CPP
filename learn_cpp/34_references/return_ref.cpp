#include <iostream>

int	arrs[] = {10, 20, 30, 40, 50, 60};

int&	init_num(int index)
{
	return (arrs[index]);
}

int	main(void)
{
	std::cout << "Before init" << std::endl;
	for (int arr : arrs)
		std::cout << arr << ", ";
	std::cout << std::endl;

	init_num(2) += 5;
	init_num(4) += 5;
	std::cout << "After init" << std::endl;
	for (int arr : arrs)
		std::cout << arr << ", ";
	std::cout << std::endl;

}