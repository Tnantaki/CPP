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

