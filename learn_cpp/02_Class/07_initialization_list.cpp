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

Sample1::~Sample1(void) { std::cout << "Destructor called" << std::endl; }

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

Sample2::~Sample2(void) { std::cout << "Destructor called" << std::endl; }

int	main(void)
{
	Sample1	instance1('A', 20, 25.55f);
	Sample2	instance2('B', 40, 30.32f);

	return (0);
}
