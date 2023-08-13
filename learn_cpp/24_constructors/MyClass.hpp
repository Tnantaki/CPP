#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	std::string	str[20];
	Brain() {};
	Brain(Brain const& other) {
		*this = other;
	}
	Brain& operator=(Brain const& rhs) {
		for (int i = 0; i < 20; i++)
			str[i] = rhs.str[i];
		return *this;
	}
};

class MyClass
{
	int		_num;
	Brain*	_brain;
public:
	MyClass();
	MyClass(MyClass const& other);
	~MyClass();

	void	prtSize(void) const;
	void	prtBrain(void) const;
	void	insertBrain(std::string const& str);
};

#endif