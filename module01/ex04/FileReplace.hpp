#ifndef FILEREPALCE_HPP
# define FILEREPALCE_HPP

#include <iostream>
#include <string>
#include <fstream>

bool	readFile(std::string name, std::string &str);
bool	writeFile(std::string name, std::string str);
void	replace_str(std::string &str, std::string s1, std::string s2);

#endif