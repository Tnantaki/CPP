// #include "Base.hpp"
#include <stack>
#include <vector>
#include "Derive.hpp"

// template <typename T, typename U = T>
// void	prt(T value)
// {
// 	// U a = value;
// 	(void)U;
// 	std::cout << value << std::endl;
// }

int	main(void)
{
	std::vector<int>	vec;
	std::stack<int, std::vector<int> >	stack;

	stack.push(30);
	stack.push_back(40);
	// Base	d1;
	// Base	d2(d1);
	// d1 = d2;

	// std::cout << d1.getName() << std::endl;
	// Derived	d1;
	// Base*	d2 = new Derived();
	// delete d2;
	// std::string a = "Hikikomori";
	// prt(a);
}