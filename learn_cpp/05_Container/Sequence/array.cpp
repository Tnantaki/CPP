#include <iostream>
#include <array>

//array: Static contiguous array
int	main(void)
{
	//<data type, size>
	std::array<int,4>	numbers = {1, 2, 3, 4};
	// access by itorator
	for (auto it = numbers.begin(); it != numbers.end(); it++)
		std::cout << *it << ", ";
	std::cout << std::endl;
	// access by index
	for (int i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;

	// modifies value
	for (int i = 0; i < numbers.size(); i++)
		numbers[i] *= 2;
	std::cout << "Array after modifies" << std::endl;

	// use at member function
	for (int i = 0; i < numbers.size(); i++)
		std::cout << numbers.at(i) << ", ";
	std::cout << std::endl;

	numbers.fill(0)	;
	std::cout << "After fill(0)" << std::endl;
	// access by for each
	for (auto number : numbers)
		std::cout << number << ", ";
	std::cout << std::endl;

}