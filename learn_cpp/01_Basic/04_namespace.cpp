#include <iostream>

// 1. ### Declare the same name of variable in namespace
// int	x = 0; // Global variable

// namespace first {
// 	int		x = 1; // declare 'x' to be member of namespace 'first'
// 	void	func() {
// 		std::cout << "Inside first" << std::endl;
// 	} // declare 'func' to be member of namespace 'first'
// }

// namespace second {
// 	int		x = 2; // declare 'x' to be member of namespace 'second'
// 	void	func() {
// 		std::cout << "Inside second" << std::endl;
// 	} // declare 'func' to be member of namespace 'second'
// }

// int	main(void) {
// 	int	x = 3;

// 	std::cout << "first  x :" << first::x << std::endl;
// 	std::cout << "second x :" << second::x << std::endl;
// 	std::cout << "local  x :" << x << std::endl;
// 	std::cout << "global x :" << ::x << std::endl;

// 	first::func();
// 	second::func();
// 	return (0);
// }

// 2. ### using namespace
// namespace second{int x = 2;}

// using std::cout;
// using std::string;

// int	main(void)
// {
// 	// using namespace second;

// 	string	str = "Hello";
// 	cout << str << std::endl;
// 	cout << x << std::endl;
// 	return (0);
// }

// 3. ### Nested namespace

namespace first {
	int	x = 11;
	namespace second {
		int x = 20;
	}
}

int	main(void)
{
	std::cout << first::x << std::endl;
	std::cout << first::second::x << std::endl;
	return (0);
}
