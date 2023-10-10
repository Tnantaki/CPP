#include <iostream>

int	main(void)
{
	double pi = 3.14;
	std::string	name = "Mosssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss";
	std::string	food = "Apple";
	int	number = 26;
	bool	have = true;

	std::cout << "Address of double :" << &pi << std::endl;
	std::cout << "Address of str name:" << &name << std::endl;
	std::cout << "Address of str food:" << &food << std::endl;
	std::cout << "Address of int :" << &number << std::endl;
	std::cout << "Address of bool :" << &have << std::endl;
	return (0);
}
