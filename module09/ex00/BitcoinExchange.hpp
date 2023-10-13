#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <stdlib.h> // for atof

#include <iomanip> // for setprecision

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

typedef	std::map<std::string, float>	data_base_t;

void	prtData(data_base_t data);
bool	getDataBase(data_base_t& dataBase);

#endif