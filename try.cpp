#include <iostream>
#include <stdint.h>
#include <limits>

// using namespace std;

template<typename Type>
void	swap(Type a, Type b)
{
	std::cout << "My swap" << std::endl;
	Type tmp = a;
	a = b;
	b = tmp;
}


int main()
{
	int a = 5; int b = 10;
	swap(a, b);
	// ::swap(a, b);


	return 0;
}
