#include <iostream>
#include <vector>

void	prt_numbers(std::vector<int> numbers)
{
	for (int number : numbers)
		std::cout << number << ", ";
	std::cout << std::endl;
}

int	main(void)
{
	std::vector<int>	numbers;

	for (int i = 0; i <= 10; i++)
		numbers.push_back(i);
	prt_numbers(numbers);

	// insert(address of index, value)
	numbers.insert(numbers.begin() + 4, 20);
	std::cout << "After inserted" << std::endl;
	prt_numbers(numbers);

	// erase(address of index)
	numbers.erase(numbers.begin() + 5);
	std::cout << "After Erased" << std::endl;
	prt_numbers(numbers);

}