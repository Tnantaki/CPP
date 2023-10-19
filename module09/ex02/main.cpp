/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/19 17:37:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
		return prtErrMsg("No argument!!!"), 1;

	struct timeval	start;
	std::size_t		size = ac - 1;
	unsigned int*	arr = new unsigned int [size];

	if (!setInput(arr, size, av))
		return 1;
	std::vector<unsigned int>	vecCon(arr, arr + size);
	std::deque<unsigned int>	dequeCon(arr, arr + size);
	double	vecTime;
	double	dequeTime;

	std::cout << "Before: ";
	displayNum(vecCon);

	gettimeofday(&start, NULL);
	mergeInsertSort(vecCon);
	vecTime = getExecTime(start);

	gettimeofday(&start, NULL);
	mergeInsertSort(dequeCon);
	dequeTime = getExecTime(start);

	std::cout << "After: ";
	displayNum(vecCon);
	// checkAscending(vecCon, "vector : ");
	// checkAscending(dequeCon, "deque : ");

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << size << " elements with std::vector : " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << dequeTime << " us" << std::endl;

	return 0;
}
