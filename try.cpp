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

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};

int	main(void)
{
	Base *base = new A;

	// A*	prtA = dynamic_cast<A*>(base);
	A*	prtA = (A*)base;


}