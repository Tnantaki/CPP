/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:16:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (std::cerr << RED << "The program take 1 argument." << std::endl, 1);

	std::stack<int>		stk;
	std::istringstream	iss(av[1]);
	std::string			str;
	do {
		iss >> str;
		str.compare('+')
		if (isdigit(str))
	} while (!str.empty());
	std::cout << str << std::endl;
	return 0;
}