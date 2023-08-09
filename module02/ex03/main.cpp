#include "Point.hpp"

void	prtTest(bool var)
{
	if (var)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point isn't inside the triangle" << std::endl;
}

void	checkCanoForm(void)
{
	// Point	a;
	// Point	a(1, 1);
	Point	a = Point(1, 1);
	Point	b = a;
	a = a;
	a = b;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}

int	main(void)
{
	// checkCanoForm();
	Point	a(1, 1);
	Point	b(3, 5);
	Point	c(5, 1);

	std::cout << "Inside Triangle : ";
	prtTest(bsp(a, b, c, Point(2, 2)));

	std::cout << "Outside Triangle: ";
	prtTest(bsp(a, b, c, Point(5, 5)));

	std::cout << "Lie on ac linear: ";
	prtTest(bsp(a, b, c, Point(3, 1)));
	return 0;
}
