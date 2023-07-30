#ifndef SAMPLE2_HPP
# define SAMPLE2_HPP

#include <iostream>

class Sample2
{
public:
	char	a;
	int		b;
	float	c;

	Sample2(char p1, int p2, float p3);
	~Sample2(void);
};

Sample2::Sample2(char p1, int p2, float p3) : a(p1), b(p2), c(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "a :" << this->a << std::endl;
	std::cout << "b :" << this->b << std::endl;
	std::cout << "c :" << this->c << std::endl;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
}


#endif