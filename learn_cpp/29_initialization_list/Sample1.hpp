#ifndef SAMPLE1_HPP
# define SAMPLE1_HPP

#include <iostream>

class Sample1
{
public:
	char	a;
	int		b;
	float	c;

	Sample1(char p1, int p2, float p3);
	~Sample1(void);
};

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;
	this->a = p1;
	this->b = p2;
	this->c = p3;
	std::cout << "a :" << this->a << std::endl;
	std::cout << "b :" << this->b << std::endl;
	std::cout << "c :" << this->c << std::endl;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
}


#endif