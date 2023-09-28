#include <iostream>
#include <limits>
#include <float.h>

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

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};

int	main(void)
{
	// Base *base = new A;

	// A*	prtA = dynamic_cast<A*>(base);
	// A*	prtA = (A*)base;
	// float a = 3.40282e-38;
	// std::cout << a << std::endl;
	// std::cout << std::numeric_limits<float>::min() << std::endl;
	// std::cout << std::numeric_limits<float>::max() << std::endl;
	// if ( < std::numeric_limits<float>::min())
	// 	std::cout << "I'm right" << std::endl;
	float a = -3.40283e+38;
	std::cout << a << std::endl;

	// float b = FLT_MAX;
	// std::cout << std::numeric_limits<float>::lowest() << std::endl;

	// float a = 3.40283e+38;
	// std::cout
	// std::cout << a << ", " << a - 0.00005 <<  std::endl;
	// std::cout << b << ", " << b + 5 << std::endl;
	// if (a < a - 0.00005)
	// 	std::cout << "you are correct " << std::endl;
	// if (b > (b + 0.00005))
	// 	std::cout << "you are correct " << std::endl;



}