#include <iostream>
// nullptr = keyword to represents a null pointer literal

int	main(void)
{
	int	age = 18;
	std::string name = "Mos";
	std::string fruit[5] = {"Apple", "Banana", "Coconut", "Durian", "Grape"};

	int	*pAge = &age;
	std::string *pName = &name;
	std::string *pFruit = fruit;

	std::cout << "pAge :" << *pAge << std::endl;
	std::cout << "pName :" << *pName << std::endl;
	std::cout << "pFruit :" << *pFruit << std::endl;

	int	*pAge2 = nullptr;
	std::cout << "pAge2 :" << pAge2 << std::endl;
	pAge2 = &age;
	std::cout << "pAge2 :" << *pAge2 << std::endl;

	return (0);
}
