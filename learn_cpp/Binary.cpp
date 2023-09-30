#include <iostream>

void	prtBinary(int num)
{
	for (int i = 0; i < 32; i++)
	{
		if (i % 8 == 0)
			std::cout << " ";
		if (((1 << (31 - i)) & num))
			std::cout << "1";
		else
			std::cout << "0";
	}
	std::cout << std::endl;
}

int	main(void)
{
	float	a = 5.123;
	int&	b = reinterpret_cast<int&>(a);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << ", binary: ";
	prtBinary(b);
	float	c = reinterpret_cast<float&>(b);
	std::cout << "c: " << c << std::endl;
}
