#include <iostream>
#include <list>

// list: Doubly-linked list
// list are slow traversal, but fast to insert or deletion value

template <typename T>
void	printAdd(T collection)
{
	std::list<int>::iterator	it;

	for (it = collection.begin(); it != collection.end(); it++)
		std::cout << &(*it) << ": " << *it << std::endl;
}

template <typename T>
void	printStr(T collection)
{
	std::list<std::string>::iterator	it;

	for (it = collection.begin(); it != collection.end(); it++)
		std::cout << *it << std::endl;
}

void	listNum(void)
{
	std::list<int>	nums;

	nums.push_back(20);
	nums.push_back(25);
	nums.push_back(30);
	printAdd(nums);
	std::cout << "After add new list" << std::endl;
	nums.push_back(15);
	nums.push_front(35);
	printAdd(nums);
	std::cout << "After add sorting" << std::endl;
	nums.sort();
	printAdd(nums);
}

void	listString(void)
{
	std::list<std::string>	str;

	str.push_back("BlackPink");
	str.push_back("NewJean");
	str.push_front("2NE1");
	str.push_front("G-Idle");
	str.push_back("BabyMonster");
	printStr(str);
	str.pop_front();
	str.pop_back();
	std::cout << "-------After pop some node-------" << std::endl;
	printStr(str);
	std::list<std::string>::iterator	it = str.begin();
	it++;
	str.erase(it);
	std::cout << "-------After erase -------" << std::endl;
	printStr(str);
}

int	main(void)
{
	// listNum();
	listString();

}
