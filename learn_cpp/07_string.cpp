#include <iostream>

int	main(void)
{
	std::string str;

	std::cout << "Enter your name :";
	std::getline(std::cin, str);
	if (str.empty())// it's boolean. 1 == true : 0 == false
	{
		std::cout << "You didn't enter your name" << std::endl;
	}
	else
	{
		std::cout << "Hello " << str << std::endl;
		// Count length
		std::cout << "lengh :" << str.length() << std::endl;
		// str.clear(); //It will clear value in str;
		//join the string
		str.append(" of The Prachuap");
		std::cout << "Hi :" << str << std::endl;
		//display char in index
		char c = str.at(2);
		std::cout << "char in index[2]:" << c << std::endl;
		//join by choosing Index
		str.insert(0, "Mr.");
		std::cout << "after at insert :" << str << std::endl;
		//trim string
		str.erase(0, 3);// 1st par : first index , 2nd par : last index that not included
		std::cout << "after at erase :" << str << std::endl;
		//find index character
		int	index = str.find('o');
		std::cout << "fine index char 'o':" << index << std::endl;
		
	}
	return (0);
}