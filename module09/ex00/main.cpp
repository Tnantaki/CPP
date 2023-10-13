/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/13 07:57:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bitcoinExchange.hpp"

bool	getInput(data_base_t& input, char* fileName)
{
	std::ifstream	inputFile;
	std::string		line;

	inputFile.open(fileName);
	if (!inputFile.is_open()) {
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return false;
	}

	getline(inputFile, line);
	// std::cout << line << std::endl;
	// while (!inputFile.eof()) {
	// 	inputFile.getline(tmpDate, 256, '|');
	// 	if (!tmpDate || *tmpDate == '\n')
	// 		continue ;
	// 	csv.getline(tmpPrice, 256);
	// 	dataBase.insert(std::pair<std::string, float>(tmpDate, atof(tmpPrice)));
	// }
	inputFile.close();
	return true;
}

int	main(int ac, char **av)
{
	data_base_t	csv;
	data_base_t	input;

	if (ac > 2) {
		std::cerr << RED << "Error: program take 1 parameter." << RESET << std::endl;
		return 1;
	}
	if (!getDataBase(csv))
		return 1;
	if (!getInput(input, av[1]))
		return 1;
	return 0;
}