#include <iostream>
#include <stack>
#include <list>

#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <typeinfo>

template<typename T>
void	disStack(std::stack<T> stack)
{
	while (!stack.empty())
	{
		std::cout << stack.top() << ", ";
		stack.pop();
	}
	std::cout << std::endl;
}

int main ()
{
	std::stack<int>	stack;
	for (int i = 0; i < 5; i++)
		stack.push((i + 1) * 10);
	std::stack<int>	stack2(stack);
	// for (auto i : list)
	// 	std::cout << i << std::endl;
	disStack(stack2);
	disStack(stack);
	disStack(stack);

	// std::cout << typeid(vec).name() << std::endl;

	// std::stack<int, std::deque<int> >::iterator it = stk
	// std::cout << *(std::begin(stk)) <<std::endl;
	// for (int i : stk)
	// 	std::cout << i << std::endl;
	return 0;
}