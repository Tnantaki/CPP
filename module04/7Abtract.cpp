#include <iostream>
#include <string>
using namespace std;

class AbtractChar
{
protected:
	string	_name;
public:
	virtual void	attack() = 0;
	void	sayHello() {cout << "Hello Everyone!" << endl;}
	void	setName(std::string const& name) {_name = name;}
};

class Warrior:public AbtractChar
{
public:
	void	attack() {cout << _name << " swing sword !!!" << endl;}
};

int	main(void)
{
	Warrior	war;

	war.setName("Titan");
	war.sayHello();
	war.attack();
}

