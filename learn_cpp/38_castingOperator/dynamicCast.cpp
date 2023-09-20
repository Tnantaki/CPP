#include <iostream>
#include <exception>

class Parent				{ public: virtual void speak() const {}; };
class Child1: public Parent	{};
class Child2: public Parent	{};

// dynamic cast typically use for downcast.
// they perform in Runtime.
int	main()
{
	Child1	child;			// Reference Value
	Parent* pPtr = &child;	// Implicit upcast -> Ok.

	// Explicit downcast, return NULL if fail.
	Child1* c1Ptr = dynamic_cast<Child1*>(pPtr);
	if (c1Ptr)
		std::cout << "Success to cast to Child1." << std::endl;
	else
		std::cout << "Fail to cast to Child1." << std::endl;

	// Explicit downcast
	try
	{
		Child2& c2Ptr = dynamic_cast<Child2&>(*pPtr);
		std::cout << "Success to cast to Child2." << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "Fail to cast to Child2: " << e.what() << std::endl;
	}
}