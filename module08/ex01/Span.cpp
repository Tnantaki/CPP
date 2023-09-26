#include "Span.hpp"

Span::Span(unsigned int N) : _cpt(N), _index(0)
{
	// std::cout << YELLOW << "[Span] Parametric Constructor Called" << RESET << std::endl;
}

Span::Span(Span const& other) : _cpt(other._cpt), _index(other._index)
{
	_arr = other._arr;
	// std::cout << YELLOW << "[Span] Copy Constructor Called" << RESET << std::endl;
}

Span&	Span::operator=(Span const& rhs)
{
	if (this != &rhs)
	{
		_cpt = rhs._cpt;
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
	if (_index >= _cpt)
		throw SpanFull();
	_arr.push_back(num);
	_index++;
}

unsigned int	Span::shortestSpan()
{
	if (_arr.empty())
		throw NoNumber();
	if (_arr.size() == 1)
		throw OnlyOneNum();
	unsigned int	shortNum = MAX_UINT;
	unsigned int	num;
	for (unsigned int i = 0; i + 1 < _arr.size(); i++)
	{
		num = static_cast<unsigned int>(abs(static_cast<long>(_arr[i])
			- static_cast<long>(_arr[i + 1])));
		if (num > 0 && num < shortNum)
			shortNum = num;
	}
	if (shortNum == MAX_UINT && num != MAX_UINT)
		throw NoSpan();
	return (shortNum);
}

unsigned int	Span::longestSpan()
{
	if (_arr.empty())
		throw NoNumber();
	if (_arr.size() == 1)
		throw OnlyOneNum();
	unsigned int	longNum = 0;
	unsigned int	num;
	for (unsigned int i = 0; i + 1 < _arr.size(); i++)
	{
		num = static_cast<unsigned int>(abs(static_cast<long>(_arr[i])
			- static_cast<long>(_arr[i + 1])));
		if (num > 0 && num > longNum)
			longNum = num;
	}
	if (longNum == 0)
		throw NoSpan();
	return (longNum);
}

static int	randomNumber() {return static_cast<int>(std::rand() - (RAND_MAX / 2));}

void	Span::randomAllNumbers()
{
	try {
		_arr.resize(_cpt);
		std::cout << "generate random " << _arr.size() << " numbers." << std::endl;
		std::generate(_arr.begin(), _arr.end(), randomNumber);
	}
	catch (std::bad_alloc &e) {
		std::cerr << RED << "bad_alloc caught: " << e.what() << RESET << std::endl;
	}
}
