#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
#include <stack>

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
	std::stack<int, std::vector<int> >	stack;

	std::vector<int>	vec;
	for (int i = 1; i < 10; i++)
		vec.push_back(i * 10);
	int	a =  *std::min_element(vec.begin(), vec.end());
	std::cout << *std::max_element(vec.begin(), vec.end()) << std::endl;
	// std::deque<int>	deque;
	// std::vector<int>	vec;

	// vec.reserve(20);
	// std::cout << "capacity : " << vec.capacity() << std::endl;
	// std::vector<int>::iterator	it = vec.begin();
	// std::cout << *it << " : " << &*it << std::endl;
	// vec.insert(it, 30);
	// std::cout << *it << " : " << &*it << std::endl;
	// vec.insert(it, 40);
	// vec.insert(it + 1, 50);
	// vec.insert(it, 60);
	// for (int i = 0; it != vec.end(); it++)
	// 	std::cout << i++ << " " << *it << " : " << &*it << std::endl;
	// std::cout << "capacity : " << vec.capacity() << std::endl;
	// std::cout << "size of : " << sizeof(std::deque<int>) << std::endl;
	// std::cout << "size max : " << deque.max_size() << std::endl;



	// stack.push(20);
	// std::cout << stack.size() << std::endl;
	// std::cout << sizeof(std::deque<std::string>) << std::endl;


}
