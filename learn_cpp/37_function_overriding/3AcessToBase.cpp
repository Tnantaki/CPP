#include <iostream>

using namespace std;

class Parent
{
public:
	void	display() {
		cout << "Base Function" << endl;
	}
};

class Child:public Parent
{
public:
	void	display() {
		cout << "Derived Function" << endl;
	}
};

int	main(void)
{
	Child	var;

	var.display();
	var.Parent::display();
}
