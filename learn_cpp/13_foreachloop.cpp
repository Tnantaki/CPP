#include <iostream>
//Foreach loop

int	main(void)
{
	std::string	arr[] = {"Fish", "Cat", "Dog", "Mouse"};
	for (int i = 0; i < sizeof(arr)/sizeof(std::string); i++)
		std::cout << arr[i] << ", ";
	std::cout << std::endl << "*****************" << std::endl;
	//Foreach Loop syntax
	//for (datatype [element name] : dataset)
	for (std::string str : arr)
		std::cout << str <<", ";
	std::cout << std::endl;
	int	prices[] = {20, 25, 30, 35, 40, 45, 50};
	for (int price : prices)
		std::cout << price << ", ";
	std::cout << std::endl;
	return (0);
}