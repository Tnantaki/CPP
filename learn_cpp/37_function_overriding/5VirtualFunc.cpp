#include <iostream>

using namespace std;

class Parent
{
public:
	virtual void	display() {
		cout << "Base Function" << endl;
	}
};

class Child:public Parent
{
public:
	virtual void	display() {
		cout << "Derived Function" << endl;
	}
};

int	main(void)
{
	Child	var;
	Parent* ptr = &var;

	ptr->display();
	ptr->Parent::display();
}
