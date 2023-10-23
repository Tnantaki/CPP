#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <unistd.h>

// if there aren't specify underlying container, `deque` is used.
// and member funtion type is stack::container_type
template<typename T>
class Mustack : public std::stack<T>
{
	private:
		typedef typename std::stack<T>::container_type::iterator	iterator;
	public:
		// template<typename T>	Mustack() : std::stack<T>() {}
		int	a;
};

// std::ostream&	operator<<(std::ostream & o, std::vector<int>::iterator * it)
// {
// 	o << *it;
// 	return o;
// }

int	main(void)
{
	// std::string	str = "Hello How are you OK ";
	// std::istringstream	ss(str);
	// std::string	tmp;

	// std::noskipws(ss);
	// while(!ss.eof())
	// {
	// 	ss >> tmp;
	// 	std::cout << tmp << std::endl;
	// }
	// if (ss.eof())
	// 	std::cout << "reach end of file" << std::endl;
	std::cout << "Hello";
	std::cout << " How are you\n";
	// std::cout << std::flush;
	sleep(3);
	std::cout << "Bye bye!";
}
