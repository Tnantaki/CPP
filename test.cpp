#include <iostream>
#include <map>
#include <ctime>
#include <string>
#include <algorithm>

typedef std::map<std::string, int>	data_t;

int main() {

	// std::map<std::string, int>	database;
	data_t	database;
	database.insert(std::pair<std::string, int>("20230619", 1));
	database.insert(std::pair<std::string, int>("20230625", 2));
	database.insert(std::pair<std::string, int>("20230630", 3));
	database.insert(std::pair<std::string, int>("20230703", 4));

	// int			*arr = new int [25];
	// std::string	*str = new std::string [25];

	// database["20230531"] = 5;
	// database["20230430"] = 9;

	for (data_t::iterator it = database.begin(); it != database.end(); it++)
		std::cout << it->first << " @: " << &it->first << " - " << it->second << " @: " << &it->second << std::endl;
	// auto	it = database.begin();
	// auto	it2 = database.end();
	// std::cout << *(&it->first) << std::endl;
	// std::cout << it2->first << std::endl;
	// if (it == it2)
	// 	std::cout << "true" << std::endl;
	// auto	it = database.find("20230631");
	// if (it == database.end())
	// 	std::cout << "Key not found." << std::endl;
	// auto it = database.lower_bound("20230629");
	// auto it2 = database.upper_bound(20.6f);
	// std::cout << "key  : " << it->first << std::endl;
	// std::cout << "value: " << it->second << std::endl;
	// std::cout << it2->second << std::endl;
	return 0;
}
