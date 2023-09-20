#include <iostream>

class A {};
class B {};

class C
{
public:
				C(A const& _) {return;}
	explicit	C(B const& _) {return;}
};

void	f(C const& _) {return;}

int	main()
{
	f(A()); // Implicit conversion -> Ok
	// f(B()); // Implicit conversion -> Not Ok, constructor is explicit

	f(C(B())); // Explicit conversion -> Ok
	return 0;
}
