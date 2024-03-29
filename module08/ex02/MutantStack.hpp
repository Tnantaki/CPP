#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

// if there aren't specify underlying container, `deque` is used.
// and member funtion type is `stack::container_type`
// 'c' is a member data of container.
template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const& other);
		MutantStack&	operator=(MutantStack const& rhs);
		~MutantStack();

		typedef	typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() {return this->c.begin();}
		iterator	end() {return this->c.end();}
};

#include "MutantStack.tpp"

#endif