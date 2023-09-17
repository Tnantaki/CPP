#include <iostream>
#include <stdint.h>
#include <limits>


int main()
{
	std::cout << std::numeric_limits<float>::max() << std::endl;
	std::cout << std::numeric_limits<float>::lowest() << std::endl;
	std::cout << -std::numeric_limits<float>::max() << std::endl;
	// std::string str = "1234.0f";
		// double b = ;
	// if ((float)(int)b == b)
	// 	std::cout << "equal" << std::endl;
	// else
	// 	std::cout << "Not equal" << std::endl;
	// std::cout << b << std::endl; 
	// long unsigned int a = 20;
	// uintptr_t	str = &a;


	// char* endptr;

	// std::cout << str.find_last_of(".", 6) << std::endl;
	// std::cout << std::string::npos << std::endl;
	// std::cout << &str.at(0) + 1 << std::endl;
	// std::cout << strtold(str, &endptr) << std::endl;
	// std::cout << "endptr: " << static_cast<int>(*endptr) << std::endl;
	// float	a = -100.12f;
	// float	b = 1.123456;
	// double	c = 1.123456;
	// double	d = 1.123456f;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << c << std::endl;
	// std::cout << d << std::endl;

	return 0;
}
