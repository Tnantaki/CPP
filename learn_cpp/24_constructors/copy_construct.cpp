#include <iostream>

class Myclass
{
	int	_a;
public:
	Myclass(int a);
	Myclass(const Myclass& me);
	int	getNum(void) const;
};

Myclass::Myclass(int a) : _a(a)
{
	std::cout << "My class has init" << std::endl;
}

Myclass::Myclass(const Myclass& me)
{
	std::cout << "Hello I'm a cloning of class" << std::endl;
}

int	Myclass::getNum(void) const {return (_a);}

void	ft_new(Myclass str)
{
	std::cout  << str.getNum() << std::endl;
}

int	main(void)
{
	Myclass	str1(20);
	ft_new(str1);
	ft_new(str1);
}