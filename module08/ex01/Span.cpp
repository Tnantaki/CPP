#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N), _index(0)
{
	// std::cout << YELLOW << "[Span] Parametric Constructor Called" << RESET << std::endl;
}

Span::Span(Span const& other) : _maxSize(other._maxSize), _index(other._index), _arr(other._arr)
{
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
// ----------- Functor & Private Member Functions ----------- //
// ********************************************************** //

static void	prtEle(int x) {std::cout << x << ", ";}

static int	randomNumber() {return static_cast<int>(std::rand() * 2);}

static bool	isEqualAll(std::vector<int>	arr)
{
	for (unsigned int i = 0; i + 1 < arr.size(); i++)
	{
		if (arr[i] != arr[i + 1])
			return false;
	}
	return true;
}

void	Span::checkError() const
{
	if (_arr.empty())
		throw NoNumber();
	if (_arr.size() == 1)
		throw OnlyOneNum();
	if (isEqualAll(_arr))
		throw NoSpan();
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

unsigned int	Span::size() const {return _arr.size();}

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

unsigned int	Span::shortestSpan()
{
	checkError();
	std::vector<int>	tmp(_arr);
	std::sort(tmp.begin(), tmp.end());
	unsigned int	shortNum = MAX_UINT;
	unsigned int	num;
	for (unsigned int i = 0; i + 1 < tmp.size(); i++)
	{
		num = static_cast<unsigned int>(abs(static_cast<long>(tmp[i + 1])
			- static_cast<long>(tmp[i])));
		if (num > 0 && num < shortNum)
			shortNum = num;
	}
	return (shortNum);
}

unsigned int	Span::longestSpan()
{
	checkError();
	long	min_num = static_cast<long>(*std::min_element(_arr.begin(), _arr.end()));
	long	max_num = static_cast<long>(*std::max_element(_arr.begin(), _arr.end()));
	return (static_cast<unsigned int>(abs(max_num - min_num)));
}

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
