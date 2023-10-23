/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/22 19:53:09 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <list>

void	arrCtn()
{
	std::cout << "### Array Container ###" << std::endl;
	std::array<int, 10>	arr = {99, 39, 10, 15, 25, 30, 49, 3, 77, 1};
	std::array<int, 10>::iterator	it;

	try {
		it = easyfind(arr, 77);
		std::cout << "Found "<< *it << " in container." << std::endl;

		it = easyfind(arr, 55);
		std::cout << "Found "<< *it << " in container." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << PURPLE << e.what() << RESET << std::endl;
	}
}

void	vecCtn()
{
	std::cout << "### Vector Container ###" << std::endl;
	int const	arr[] = {1, 2, 3, 4, 5, 6};
	size_t		vecSize = sizeof(arr) / sizeof(int);
	std::vector<int>	vec(arr, arr + vecSize);
	std::vector<int>::iterator	it;

	try {
		it = easyfind(vec, 5);
		std::cout << "Found "<< *it << " in container." << std::endl;

		it = easyfind(vec, 10);
		std::cout << "Found "<< *it << " in container." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << PURPLE << e.what() << RESET << std::endl;
	}
}

void	listCtn()
{
	std::cout << "### List Container ###" << std::endl;
	int const	arr[] = {3, 6, 9, 12, 15, 18, 21, 24};
	size_t		listSize = sizeof(arr) / sizeof(int);
	std::list<int>	list(arr, arr + listSize);
	std::list<int>::iterator	it;

	try {
		it = easyfind(list, 12);
		std::cout << "Found "<< *it << " in container." << std::endl;

		it = easyfind(list, 13);
		std::cout << "Found "<< *it << " in container." << std::endl;
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