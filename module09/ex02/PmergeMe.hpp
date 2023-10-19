#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>	// std::swap
#include <cstdlib>		// atol()
#include <ctime>		// time
#include <iomanip>		// std::setprecision
#include <limits>		// MAX_INT
#include <cstring>		// strlen()
#include <sys/time.h>	// gettimeofday()

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

struct pair_t
{
	unsigned int	first, second;
};

void	mergeInsertSort(std::vector<unsigned int> & nums);
void	prtErrMsg(const std::string msg);
void	prtArr(unsigned int* arr, size_t n);
bool	setInput(unsigned int* & arr, size_t size, char **av);
double	getExecTime(struct timeval & start);

template<typename T>
void	displayNum(T const & nums)
{
	for (typename T::const_iterator it = nums.begin(); it != nums.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<typename T>
void	checkAscending(T const & nums)
{
	for (typename T::const_iterator it = nums.begin(); it + 1 != nums.end(); it++)
	{
		if (*it > *(it + 1)) {
			return prtErrMsg("No, number is not asceding order !!!");
		}
	}
	std::cerr << GREEN << "OK,number is ascending Order." << RESET << std::endl;
}

#endif