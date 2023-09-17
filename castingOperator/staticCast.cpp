#include <iostream>

void	case1()
{
	float	f = 20.35;

	int a = f; // implicit type cast
	int b = static_cast<int>(f);
	std::cout << "Value a: " << a << std::endl;
	std::cout << "Value b: " << b << std::endl;
}

void	case2()
{
	float	f = 20.35;

	float*	fPtr = &f;
	int*	iPtr = (int*)&f;

	std::cout << "Value fPtr: " << *fPtr << std::endl;
	std::cout << "Value iPtr: " << *iPtr << std::endl; // Give you a wrong value.

	// int*	diPtr = static_cast<int*>(&f); // Give an error on Complie-time.
	// std::cout << "Value diPtr: " << *diPtr << std::endl;
}

int	main()
{
	// case1();
	case2();
}