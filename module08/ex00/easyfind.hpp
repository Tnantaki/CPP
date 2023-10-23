#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

class NotFound : public std::exception {
	const char*	what() const throw() {return "Value is not found";}
};

template<typename T>
typename T::iterator	easyfind(T& ctn, int value)
{
	typename T::iterator	it = std::find(ctn.begin(), ctn.end(), value);
	if (it != ctn.end())
		return it;
	throw NotFound();
}

#endif