#include <iostream>
#include <queue>

void	PrtQueElem(std::queue<int> queue)
{
	while (!queue.empty())
	{
		std::cout << queue.front() << " ";
		queue.pop();
	}
	std::cout << std::endl;
}

int	main(void)
{
	std::queue<int>	numbers;

	for (int i = 1; i <=5; i++)
		numbers.push(i);
	std::cout << "Size is: " << numbers.size() << std::endl;
	std::cout << "First element is: " << numbers.front() << std::endl;
	std::cout << "Last element is: " << numbers.back() << std::endl;
	PrtQueElem(numbers);
}