#include <iostream>
#include <deque>

// deque: Double-ended queue
// deque: is store in contiguous array

template <typename T>
void	print(T collection)
{
	std::cout << "Size: " << collection.size() << "| ";
	for (int i = 0; i < collection.size(); i++)
		std::cout << collection[i] << ", ";
	std::cout << std::endl;
}

template <typename T>
void	printAdd(T collection)
{
	for (int i = 0; i < collection.size(); i++)
		std::cout << &collection[i] << ", ";
	std::cout << std::endl;
}

int	main(void)
{
	std::deque<int>	numbers = {15, 20, 25, 30};
	print(numbers);
	printAdd(numbers);

	numbers.push_front(10);
	numbers.push_front(5);
	numbers.push_back(35);
	print(numbers);
	printAdd(numbers);

	numbers.pop_front();
	numbers.pop_back();
	numbers.pop_back();
	print(numbers);
	printAdd(numbers);
}