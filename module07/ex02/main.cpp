#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}

// struct Employ
// {
// 	std::string	str;
// 	int		num;
// 	float	num2;
// };

// int	main(void)
// {
// 	// Array<float>		test1(5);
// 	// Array<std::string>	test2(5);
// 	// Array<double>		test3(5);
// 	// Array<Employ>		test4(5);

// 	Array<int>	var1;
// 	std::cout << "var1 size: " << var1.size() << std::endl;

// 	Array<int>	var2(20);
// 	std::cout << "var2 size: " << var2.size() << std::endl;
// 	for (unsigned int i = 0; i < 20; i++)
// 		var2[i] = (i + 1) * 10;

// 	Array<int> const	var3 = var2;
// 	std::cout << "var3 size: " << var3.size() << std::endl;
// 	print(var3);

// 	var1 = var2;
// 	for (unsigned int i = 0; i < 20; i++)
// 		var1[i] += 1;
// 	std::cout << "var1 size: " << var1.size() << std::endl;
// 	print(var1);
// }