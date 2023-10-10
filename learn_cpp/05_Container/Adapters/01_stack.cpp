#include <iostream>
#include <stack>
#include <deque>

void	prtStackElem(std::stack<int> stack)
{
	while (!stack.empty())
	{
		// std::cout << stack.top() << std::endl;
		std::cout << stack.top() << ", " << &stack.top() << std::endl;
		stack.pop();
	}
}

int	main(void)
{
	std::stack<int>	numbers;
	std::stack<int>	numbers2;

	numbers.push(20);
	numbers2.push(100);
	numbers.push(30);
	numbers2.push(200);
	numbers.push(40);

	// std::cout << numbers.top() << ", " << &numbers.top() << std::endl;
	std::cout << numbers.value_type << std::endl;
	// prtStackElem(numbers);
	// std::cout << "size: " << numbers.size() << std::endl;
	// numbers.pop();
	// std::cout << "size: " << numbers.size() << std::endl;

	// PrtStackElem(numbers);
	// if (numbers.empty())
	// 	std::cout << "Stack is empty" << std::endl;
	// else
	// 	std::cout << "Stack is not empty" << std::endl;
	// std::cout << "Stack size is: " << numbers.size() << std::endl;
}