#include "Fixed.hpp"

void	comparision_Test(void)
{
	Fixed const	num1(10);
	Fixed const	num2(20);

	if (num2 > num1)
		std::cout << num2 << " greater than " << num1 << std::endl;
	if (num1 < num2)
		std::cout << num1 << " less than " << num2 << std::endl;
	if (num2 >= num1 && num2 >= num2)
	{
		std::cout << num2 << " greater than or equal " << num1;
		std::cout << " | "<< num2 << " equal " << num2 << std::endl;
	}
	if (num1 <= num2 && num1 <= num1)
	{
		std::cout << num1 << " less than or equal " << num2;
		std::cout << " | "<< num1 << " equal " << num1 << std::endl;
	}
	if (num1 == num1)
		std::cout << num1 << " equal " << num1 << std::endl;
	if (num1 != num2)
		std::cout << num1 << " not equal " << num2 << std::endl;
}

void	arithmetic_Test(void)
{
	Fixed const	a(2);
	Fixed const	b(5);
	Fixed const	c(10);
	Fixed const	d(15);

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << c << " * " << d << " = " << c * d << std::endl;
	std::cout << d << " / " << a << " = " << d / a << std::endl;
}

void	increte_decrete_Test(void)
{
	Fixed	a;

	std::cout << "a  : " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a  : " << a << std::endl;

}

void	min_max_Test(void)
{
	Fixed	a(3.25f);
	Fixed	b(3.26f);

	std::cout << "min: " << Fixed::min(a, b) << std::endl;
	std::cout << "min: " << Fixed::min(b, a) << std::endl;
	std::cout << "max: " << Fixed::max(a, b) << std::endl;
	std::cout << "max: " << Fixed::max(b, a) << std::endl;
}

void	subject_Test(void)
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

int	main(void)
{
	// comparision_Test();
	// arithmetic_Test();
	// increte_decrete_Test();
	// min_max_Test();

	subject_Test();
	return 0;
}
