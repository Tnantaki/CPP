#include <iostream>

int	main(void)
{
	int		num = 20;
	int*	Ptrnum = &num;
	int&	Refnum = num;

	std::cout << "num: " << num << std::endl;
	std::cout << "ptr num: " << *Ptrnum << std::endl;
	std::cout << "ref num: " << Refnum << std::endl;
	*Ptrnum = 30;
	std::cout << "ptr num: " << *Ptrnum << std::endl;
	Refnum = 40;
	std::cout << "ref num: " << Refnum << std::endl;
}