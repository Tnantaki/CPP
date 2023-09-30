#include <iostream>

template<typename T, typename U>
class Pair
{
public:
	Pair<T,U>(T const& lhs, U const& rhs) : _first(lhs), _second(rhs) {
		std::cout << "Generic Template" << std::endl;
	}
	T	first() const {return _first;}
	U	second() const {return _second;}
private:
	// Pair<T, U>();
	T	_first;
	U	_second;
};

template<typename U>
class Pair<int, U>
{
public:
	Pair<int,U>(int const& lhs, U const& rhs) : _first(lhs), _second(rhs) {
		std::cout << "Int Template" << std::endl;
	}
	int	first() const {return _first;}
	U	second() const {return _second;}
private:
	Pair<int, U>();
	int	_first;
	U	_second;
};

template<>
class Pair<bool, bool>
{
public:
	Pair<bool, bool>(bool const& lhs, bool const& rhs) : _first(lhs), _second(rhs) {
		std::cout << "Bool Template" << std::endl;
	}
	bool	first() const {return _first;}
	bool	second() const {return _second;}
private:
	bool	_first;
	bool	_second;
};

template<typename T, typename U>
std::ostream&	operator<<(std::ostream& o, Pair<T, U> const& obj)
{
	o << obj.first() << ", " << obj.second();
	return o;
}

int	main(void)
{
	Pair<float, float>	var1(20, 20.10f);
	Pair<int, int>		var2(20, 30);
	Pair<bool, bool>	var3(true, false);

	std::cout << var1 << std::endl;
	std::cout << var2 << std::endl;
	std::cout << var3 << std::endl;
}