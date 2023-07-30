#include <iostream>

// typedef std::string text_t;
// typedef int num_t;
// typedef and using, they are equivalent.
using text_t = std::string;
using num_t = int;

int	main(void)
{
	num_t x = 20;
	text_t name = "Mos";

	std::cout << "x :" << x << std::endl;
	std::cout << "name :" << name << std::endl;
	
	return (0);
}