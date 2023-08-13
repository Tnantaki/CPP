#include "MyClass.hpp"

MyClass::MyClass() : _num(0)
{
	_brain = new Brain();
	std::cout << "Constructor Called" << std::endl;
}

MyClass::~MyClass()
{
	delete _brain;
	std::cout << "Destructor Called" << std::endl;
}

MyClass::MyClass(MyClass const& other) : _num(other._num)
{
	_brain = new Brain();

	_brain = other._brain;
	std::cout << "Copy Constructor" << std::endl;
}

void	MyClass::prtSize(void) const
{
	std::cout << "Brain Size: " << _num << std::endl;
}

void	MyClass::prtBrain(void) const
{
	for (int i = 0; i < _num; i++)
		std::cout << &(_brain->str[i]) << " : " << _brain->str[i] << std::endl;
}

void	MyClass::insertBrain(std::string const& str)
{
	_brain->str[_num] = str;
	_num++;
}
