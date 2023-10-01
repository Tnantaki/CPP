#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N), _index(0)
{
	// std::cout << YELLOW << "[Span] Parametric Constructor Called" << RESET << std::endl;
}

Span::Span(Span const& other) : _maxSize(other._maxSize), _index(other._index)
{
	_arr = other._arr;
	// std::cout << YELLOW << "[Span] Copy Constructor Called" << RESET << std::endl;
}

Span&	Span::operator=(Span const& rhs)
{
	if (this != &rhs)
	{
		_maxSize = rhs._maxSize;
		_index = rhs._index;
		_arr = rhs._arr;
		// std::cout << YELLOW << "[Span] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return *this;
}

Span::~Span()
{
	// std::cout << YELLOW << "[Span] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

unsigned int	Span::size() const {return _arr.size();}

static void	prtEle(int x) {std::cout << x << ", ";}

void	Span::displayArr() const
{
	for_each(_arr.begin(), _arr.end(), prtEle);
	std::cout << std::endl;
}

void	Span::addNumber(int num)
{
	if (_index >= _maxSize)
		throw SpanFull();
	_arr.push_back(num);
	_index++;
}

static bool	isEqualAll(std::vector<int>	arr)
{
	for (unsigned int i = 0; i + 1 < arr.size(); i++)
	{
		if (arr[i] != arr[i + 1])
			return false;
	}
	return true;
}

unsigned int	Span::shortestSpan()
{
	if (_arr.empty())
		throw NoNumber();
	if (_arr.size() == 1)
		throw OnlyOneNum();
	if (isEqualAll(_arr))
		throw NoSpan();
	unsigned int	shortNum = MAX_UINT;
	unsigned int	num;
	for (unsigned int j = 0; j + 1 < _arr.size(); j++)
	{
		for (unsigned int i = j + 1; i < _arr.size(); i++)
		{
			num = static_cast<unsigned int>(abs(static_cast<long>(_arr[j])
				- static_cast<long>(_arr[i])));
			if (num > 0 && num < shortNum)
				shortNum = num;
		}
	}
	return (shortNum);
}

unsigned int	Span::longestSpan()
{
	if (_arr.empty())
		throw NoNumber();
	if (_arr.size() == 1)
		throw OnlyOneNum();
	if (isEqualAll(_arr))
		throw NoSpan();
	unsigned int	longNum = 0;
	unsigned int	num;
	for (unsigned int j = 0; j + 1 < _arr.size(); j++)
	{
		for (unsigned int i = j + 1; i < _arr.size(); i++)
		{
			num = static_cast<unsigned int>(abs(static_cast<long>(_arr[j])
				- static_cast<long>(_arr[i])));
			if (num > 0 && num > longNum)
				longNum = num;
		}
	}
	return (longNum);
}

static int	randomNumber() {return static_cast<int>(std::rand() * 2);}

void	Span::randomAllNumbers()
{
	srand(time(NULL));
	try {
		_arr.resize(_maxSize);
		std::cout << "generate random " << _arr.size() << " numbers." << std::endl;
		std::generate(_arr.begin(), _arr.end(), randomNumber);
	}
	catch (std::bad_alloc &e) {
		std::cerr << RED << "bad_alloc caught: " << e.what() << RESET << std::endl;
	}
}
