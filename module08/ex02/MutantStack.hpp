#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
// #include <algorithm> // for_each, generate
// #include <exception> // std::exception
// #include <cstdlib> // absolute function
// #include <limits> // numeric_limits
// #include <time.h> // time
// #include <new> // std::bad_aloc

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

template<typename T>
class MutantStack : public std::stack<T>
{
	private:
		// unsigned int		_maxSize; // capacity of this MutantStack
		// unsigned int		_index;
		MutantStack();
	public:
		MutantStack()
		// MutantStack(unsigned int const N);
		// MutantStack(MutantStack const& other);
		// MutantStack&	operator=(MutantStack const& rhs);
		// ~MutantStack();


};

#endif