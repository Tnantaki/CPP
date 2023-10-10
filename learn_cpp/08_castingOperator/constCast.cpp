#include <iostream>

int	main(void)
{
	int			a = 42;						// Reference Value

	// int const*	b = &a;						// Implicit promotion -> Ok
	// // int*		c = b;						// Implicit demotion -> Error
	// int*		d = const_cast<int*>(b);	// Explicit demotion -> Ok
	int	d = const_cast<int>(a);

	d += 3;

	std::cout << "Address of a: " << a << std::endl;
	// std::cout << "Address of b: " << *b << std::endl;
	// std::cout << "Address of c: " << *d << std::endl;
}