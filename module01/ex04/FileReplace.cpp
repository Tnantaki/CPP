/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:17:27 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:17:27 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

bool	readFile(std::string name, std::string &str)
{
	std::ifstream	inFile;
	char*			buffer;
	int				length;

	inFile.open(name.c_str());
	if (!inFile.is_open())
	{
		std::cerr << name << " :Can not open." << std::endl;
		return (false);
	}
	inFile.seekg(0, inFile.end);
	length = inFile.tellg();
	inFile.seekg(0, inFile.beg);
	buffer = new char [length];
	inFile.read(buffer, length);
	str = buffer;
	delete [] buffer;
	inFile.close();
	return (true);
}

bool	writeFile(std::string name, std::string str)
{
	std::ofstream	outFile;

	name += ".replace";
	outFile.open(name.c_str());
	if (!outFile.is_open())
	{
		std::cerr << name << " :Can not open." << std::endl;
		return (false);
	}
	outFile << str;
	return (true);
}

void	replace_str(std::string &str, std::string s1, std::string s2)
{
	size_t	found_pos = 0;
	int		index = 0;

	if (s1.empty() || s2.empty())
		return ;
	while (true)
	{
		found_pos = str.find(s1, index);
		if (found_pos > str.size())
			break ;
		str.erase(found_pos, s1.length());
		str.insert(found_pos, s2);
		index = found_pos + s2.length();
	}
}
