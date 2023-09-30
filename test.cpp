#include <iostream>

template<typename T>
void	prt(T& val) {std::cout << val << std::endl;}

template<typename T>
void	doit(T& val, void (*f)(T&))
{
	f(val);
}

// int	main(void)
// {
// 	int	a = 20;
// 	doit(a , prt<const int>);
// }

int	main(vo)

