#include <iostream>
#include <unordered_map>
#include <string>// for using std::string
#include <utility>// for using std::pair

int	main(void)
{
	std::unordered_map<int, std::string>	unordered_dic;

	unordered_dic.insert(std::pair<int, std::string>(1, "One"));
	unordered_dic.insert(std::pair<int, std::string>(2, "Two"));
	unordered_dic.insert(std::pair<int, std::string>(5, "Five"));
	unordered_dic.insert(std::pair<int, std::string>(3, "Three"));
	unordered_dic.insert(std::pair<int, std::string>(4, "Four"));

	std::cout << "### Unordered_Dictionary ###" << std::endl;
	for (auto newpair : unordered_dic)
		std::cout << newpair.first << " - " << newpair.second << std::endl;
}
