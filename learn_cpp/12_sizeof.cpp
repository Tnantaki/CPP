#include <iostream>
//sizeof =	determine the byte in size of a:
//			varaible, datatype, class, objects, etc.

int	main(void)
{
	int			num;
	char		c;
	char		*str = "Hello, How are you?";
	char		arr[] = "Hello, How are you?";
	std::string	cstr = "Hello How are you I'm Mos, This is test for size of string that can contain more than 32 bytes";
	std::string	arrstr[] = {"Fish", "Cat", "Dog", "Mouse"};
	std::cout << "Sizeof (int)    :" << sizeof(num) << " byte" << std::endl;
	std::cout << "Sizeof (char)   :" << sizeof(c) << " byte" << std::endl;
	std::cout << "Sizeof (pointer):" << sizeof(str) << " byte" << std::endl;
	std::cout << "Sizeof (string) :" << sizeof(cstr) << " byte" << std::endl;
	std::cout << "Sizeof (Arrstr) :" << sizeof(arr) << " byte" << std::endl;
	std::cout << "Sizeof (Arrstr) :" << sizeof(arrstr)/sizeof(std::string) << " byte" << std::endl;
	return (0);
}