#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template<typename T>
MutantStack::MutantStack(unsigned int N) : _maxSize(N), _index(0)
{
	std::cout << YELLOW << "[MutantStack] Parametric Constructor Called" << RESET << std::endl;
}

// MutantStack::MutantStack(MutantStack const& other) : _maxSize(other._maxSize), _index(other._index)
// {
// 	_arr = other._arr;
// 	// std::cout << YELLOW << "[MutantStack] Copy Constructor Called" << RESET << std::endl;
// }

// MutantStack&	MutantStack::operator=(MutantStack const& rhs)
// {
// 	if (this != &rhs)
// 	{
// 		_maxSize = rhs._maxSize;
// 		_index = rhs._index;
// 		_arr = rhs._arr;
// 		// std::cout << YELLOW << "[MutantStack] Copy Assignment Operator Called" << RESET << std::endl;
// 	}
// 	return *this;
// }

// MutantStack::~MutantStack()
// {
// 	// std::cout << YELLOW << "[MutantStack] Destructor Called" << RESET << std::endl;
// }

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

#endif