#include <iostream>

void	hello(std::string name)
{
	std::cout << "Helle! " << name << std::endl;
}

std::string joinword(std::string str1, std::string str2)
{
	return (str1 + " " + str2);
}

int	main(void)
{
	std::string	name;
	std::string title;
	std::string fullname;
	name = "Mos";
	title = "On_site";

	hello(name);
	fullname = joinword(name, title);
	std::cout << fullname << std::endl;
	int	len = sizeof(name);
	std::cout << len << std::endl;
	return (0);
}