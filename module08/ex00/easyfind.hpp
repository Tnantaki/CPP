#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class NotFound : public std::exception {
	const char*	what() const throw() {return "No occurence is found";}
};

template<typename T>
int	easyfind(T& ctn, int value)
{
	typename T::iterator	it = std::find(ctn.begin(), ctn.end(), value);
	if (*it != value)
		throw NotFound();
	return *it;
}

#endif