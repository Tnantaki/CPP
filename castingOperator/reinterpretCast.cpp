#include <iostream>

int	main(void)
{
	float	a = 420.042f;					// Reference Value

	void*	b = &a;							// Implicit promotion -> Ok
	int*	c = reinterpret_cast<int*>(b);	// Explicit demotion -> Ok
	int&	d = reinterpret_cast<int&>(a);	// Explicit demotion -> Ok

	std::cout << "Address of a: " << &a << std::endl;
	std::cout << "Address of b: " << b << std::endl;
	std::cout << "Address of c: " << c << std::endl;
	std::cout << "Address of d: " << &d << std::endl;
}