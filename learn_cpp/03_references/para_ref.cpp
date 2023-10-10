#include <iostream>

void	my_swap(int& a, int& b)
{
	int	tmp = a;
	a = b;
	b = tmp;
}

int	main(void)
{
	int	a = 20, b = 50;

	std::cout << "Before swap" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	my_swap(a, b);
	std::cout << "After swap" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}