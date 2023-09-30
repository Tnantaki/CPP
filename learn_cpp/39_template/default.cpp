#include <iostream>
#include <iomanip>

template<typename T = float>
class Cor
{
private:
	T const _x;
	T const _y;
	T const _z;
	Cor();
public:
	Cor(T const  x, T const y, T const z) : _x(x), _y(y), _z(z) {}
	T	getX() const {return _x;}
	T	getY() const {return _y;}
	T	getZ() const {return _z;}
};

template<typename T>
std::ostream&	operator<<(std::ostream& OUT, Cor<T> const & obj)
{
	std::cout.precision(1);
	OUT << std::setiosflags(std::ios::fixed);
	OUT << "Cor: " << obj.getX() << ", " << obj.getY() << ", " << obj.getZ();
	return (OUT);
}

int	main(void)
{
	Cor<int>	var1(20, 30, 40);
	Cor<>		var2(20, 30, 40);

	std::cout << var1 << std::endl;
	std::cout << var2 << std::endl;
	return 0;
}