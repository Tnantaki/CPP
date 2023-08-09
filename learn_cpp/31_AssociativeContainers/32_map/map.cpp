#include <iostream>
#include <map>
#include <string>
#include <utility>// for using std::pair

// The map data structure sorting alphapet automaticly

int	main(void)
{
	std::map<int, std::string>	dictionary;

	dictionary.insert(std::pair<int, std::string>(1, "One"));
	dictionary.insert(std::pair<int, std::string>(2, "Two"));
	dictionary.insert(std::pair<int, std::string>(5, "Five"));
	dictionary.insert(std::pair<int, std::string>(3, "Three"));
	dictionary.insert(std::pair<int, std::string>(4, "Four"));

	dictionary[1] = "Ichi";
	dictionary.erase(2);
	// dictionary.clear();
	std::cout << "Size is: " << dictionary.size() << std::endl;

	std::cout << "### Ordered_Dictionary ###" << std::endl;
	for (auto pair : dictionary)
		std::cout << pair.first << " - " << pair.second << std::endl;
}