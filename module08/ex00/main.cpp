/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/09/26 22:27:48 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>

int	main()
{
	std::cout << "### Array Container ###" << std::endl;
	std::array<int, 10>	arr = {99, 39, 10, 15, 25, 30, 49, 3, 77, 1};
	try {
		int	num = easyfind(arr, 77);
		std::cout << num << std::endl;
		num = easyfind(arr, 55);
		std::cout << num << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "### Vector Container ###" << std::endl;
	int const	vec[] = {1, 2, 3, 4, 5, 6};
	size_t		vecSize = sizeof(vec) / sizeof(int);
	std::vector<int>	var(vec, vec + vecSize);
	try {
		int	num = easyfind(var, 5);
		std::cout << num << std::endl;
		num = easyfind(var, 10);
		std::cout << num << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}