#include <iostream>
#include <vector>

void	prt_numbers(std::vector<int> numbers)
{
	auto	it = numbers.begin();

	std::cout << &it << std::endl;
	for (it; it != numbers.end(); it++)
	{
		std::cout << *it << ", ";
		std::cout << &(*it) << std::endl;
	}
}

int	main(void)
{
	std::vector<int>	numbers;

	for (int i = 0; i <= 5; i++)
		numbers.push_back(i);
	prt_numbers(numbers);
	std::cout << "Capacity: " << numbers.capacity() << std::endl;
	numbers.push_back(20);
	prt_numbers(numbers);
	std::cout << "Capacity: " << numbers.capacity() << std::endl;
	numbers.push_back(30);
	numbers.push_back(40);
	prt_numbers(numbers);
	std::cout << "Capacity: " << numbers.capacity() << std::endl;
}