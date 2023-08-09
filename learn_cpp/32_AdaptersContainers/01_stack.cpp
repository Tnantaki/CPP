#include <iostream>
#include <stack>

void	PrtStackElem(std::stack<int> stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
}

int	main(void)
{
	std::stack<int>	numbers;

	numbers.push(20);
	numbers.push(30);
	numbers.push(40);
	numbers.pop();

	PrtStackElem(numbers);
	if (numbers.empty())
		std::cout << "Stack is empty" << std::endl;
	else
		std::cout << "Stack is not empty" << std::endl;
	std::cout << "Stack size is: " << numbers.size() << std::endl;
}