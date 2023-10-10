#include <iostream>

int		max(int a, int b) {return ((a > b) ? a : b);}
double	max(double a, double b) {return ((a > b) ? a : b);}
char	max(char a, char b) {return ((a > b) ? a : b);}

// T is any datatype , and U also is any datatype
// auto is compiler will know what datatype should return
template <typename T, typename U>
auto	Max(T a, U b) {return ((a > b) ? a : b);}

template <typename T>
void	print(T a) {std::cout << a << std::endl;}

int	main(void)
{
	// std::cout << Max(20.5, 20) << std::endl;
	print("Hello");
	return (0);
}

