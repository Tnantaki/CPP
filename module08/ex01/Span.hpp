#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm> // for_each, generate
#include <exception> // std::exception
#include <cstdlib> // absolute function
#include <limits> // numeric_limits
#include <time.h> // time
#include <new> // std::bad_aloc

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

# define MAX_UINT std::numeric_limits<unsigned int>::max()

class Span
{
	private:
		unsigned int		_maxSize; // capacity of this Span
		unsigned int		_index;
		std::vector<int>	_arr;

		Span();
		void	checkError() const;
	public:
		Span(unsigned int const N);
		Span(Span const& other);
		Span&	operator=(Span const& rhs);
		~Span();

		void			displayArr() const;
		void			addNumber(int num);
		void			randomAllNumbers();
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	size() const;

		class SpanFull : public std::exception {
			const char*	what() const throw() {return "Span was full";}
		};
		class NoNumber : public std::exception {
			const char*	what() const throw() {return "There are no numbers stored";}
		};
		class OnlyOneNum : public std::exception {
			const char*	what() const throw() {return "There are only one number";}
		};
		class NoSpan : public std::exception {
			const char*	what() const throw() {return "No span can be found";}
		};
};

#endif