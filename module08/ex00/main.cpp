/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 16:27:41 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

void	arrCtn()
{
	std::cout << "### Array Container ###" << std::endl;
	int	const	arr[] = {99, 39, 10, 15, 25, 30, 49, 3, 77, 1};
	size_t		arrSize = sizeof(arr) / sizeof(int);
	std::deque<int>	deque(arr, arr + arrSize);
	std::deque<int>::iterator	it;

	try {
		it = easyfind(deque, 77);
		std::cout << "Found "<< *it << " in container." << std::endl;

		it = easyfind(deque, 55);
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