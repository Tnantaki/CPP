#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int>	numbers;

	numbers.push_back(0);
	for (int i = 1; i <= 5; i++)
		numbers.push_back(i);

	// For loop to display element
	for (int i = 0; i <= 5; i++)
		std::cout << numbers[i] << std::endl;

	// Foreach loop
	for (int number : numbers)
		std::cout << number << std::endl;

	// Iterator
	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it;
		std::cout << ", " << &it;
		std::cout << ", " << &(*it) << std::endl;
	}

	std::cout << "Size: " << numbers.size() << std::endl;
	std::cout << "Max size: " << numbers.max_size() << std::endl;
	// Capacity is the Max size you can re before they allocate a new vector.
	std::cout << "Capacity: " << numbers.capacity() << std::endl;
	numbers.resize(3);
	std::cout << "Size: " << numbers.size() << std::endl;
	if (numbers.empty())
		std::cout << "Vector is emptry\n";
	else
		std::cout << "Vector is not emptry\n";
	std::cout << "Element [0] is: " << numbers[0] << std::endl;
	std::cout << "Element at(0) is: " << numbers.at(0) << std::endl;
	std::cout << "Front : " << numbers.front() << std::endl;
	std::cout << "Back : " << numbers.back() << std::endl;
	numbers.clear();
	std::cout << "Size: " << numbers.size() << std::endl;



}