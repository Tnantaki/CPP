/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/17 16:23:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void	displayNum(T const & nums)
{
	for (typename T::const_iterator it = nums.begin(); it != nums.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	prtArr(unsigned int* arr, size_t n)
{
	for (size_t i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	unsigned int	arr[] = {9, 4, 7, 3, 1, 5, 2, 8, 6};
	std::size_t		arrSize = sizeof(arr) / sizeof(int);

	prtArr(arr, arrSize);

	std::vector<unsigned int>	vec(arr, arr + arrSize);
	displayNum(vec);
	// std::list<unsigned int>		list(arr, arr + arrSize);
	// displayNum(list);

	mergeInsertSort(vec);
	displayNum(vec);


	return 0;
}