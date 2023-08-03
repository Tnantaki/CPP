#include <iostream>

void	PtrJoinStr(std::string* str)
{
	*str += " and cat";
}

void	RefJoinStr(std::string& str)
{
	str += " and Dog";
}

int	main(void)
{
	std::string	str = "I like butterflies";
	char*	ptr = &(str.at(0));

	std::cout << "str Address: " << &str << " ," << "First: " << static_cast<void *>(&(str.at(0))) << " ," << str << std::endl;
	std::cout << "ptr Address: " << &ptr << " ," << "First: " << (void *)ptr << " ," << ptr << std::endl;
	PtrJoinStr(&str);
	std::cout << "str Address: " << &str << " ," << "First: " << static_cast<void *>(&(str.at(0))) << " ," << str << std::endl;
	std::cout << "ptr Address: " << &ptr << " ," << "First: " << (void *)ptr << " ," << ptr << std::endl;

	std::string	str2 = "I like otters";
	ptr = &(str2.at(0));

	std::cout << "str2 Address: " << &str2 << " ," << "First: " << static_cast<void *>(&(str2.at(0))) << " ," << str2 << std::endl;
	std::cout << "ptr Address: " << &ptr << " ," << "First: " << (void *)ptr << " ," << ptr << std::endl;
	RefJoinStr(str2);
	std::cout << "str2 Address: " << &str2 << " ," << "First: " << static_cast<void *>(&(str2.at(0))) << " ," << str2 << std::endl;
	std::cout << "ptr Address: " << &ptr << " ," << "First: " << (void *)ptr << " ," << ptr << std::endl;
}