/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/09/30 10:40:42 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <list>

void	arrCtn()
{
	int		findNum;
	size_t	index;

	std::cout << "### Array Container ###" << std::endl;
	std::array<int, 10>	arr = {99, 39, 10, 15, 25, 30, 49, 3, 77, 1};
	try {
		findNum = 77;
		index = easyfind(arr, findNum);
		std::cout << "Found "<< findNum << " at index " << index << std::endl;

		findNum = 55;
		index = easyfind(arr, findNum);
		std::cout << "Found "<< findNum << " at index " << index << std::endl;
	}
	catch (std::exception &e) {
		std::cout << PURPLE << e.what() << RESET << std::endl;
	}
}

void	vecCtn()
{
	int		findNum;
	size_t	index;

	std::cout << "### Vector Container ###" << std::endl;
	int const	arr[] = {1, 2, 3, 4, 5, 6};
	size_t		vecSize = sizeof(arr) / sizeof(int);
	std::vector<int>	vec(arr, arr + vecSize);
	try {
		findNum = 5;
		index = easyfind(vec, findNum);
		std::cout << "Found "<< findNum << " at index " << index << std::endl;

		findNum = 10;
		index = easyfind(vec, findNum);
		std::cout << "Found "<< findNum << " at index " << index << std::endl;
	}
	catch (std::exception &e) {
		std::cout << PURPLE << e.what() << RESET << std::endl;
	}
}

void	listCtn()
{
	int		findNum;
	size_t	index;

	std::cout << "### List Container ###" << std::endl;
	int const	arr[] = {3, 6, 9, 12, 15, 18, 21, 24};
	size_t		listSize = sizeof(arr) / sizeof(int);
	std::list<int>	list(arr, arr + listSize);
	try {
		findNum = 12;
		index = easyfind(list, findNum);
		std::cout << "Found "<< findNum << " at index " << index << std::endl;

		findNum = 13;
		index = easyfind(list, findNum);
		std::cout << "Found "<< findNum << " at index " << index << std::endl;
	}
	catch (std::exception &e) {
		std::cout << PURPLE << e.what() << RESET << std::endl;
	}
}
int	main()
{
	arrCtn();
	vecCtn();
	listCtn();
	return 0;
}