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

#endif