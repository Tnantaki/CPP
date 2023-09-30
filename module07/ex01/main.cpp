/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <iostream>
#include "iter.hpp"

template<typename T>
void	print(T& value)
{
	std::cout << value << std::endl;
}

template<typename T>
void	increateNum(T& value)
{
	value += 1;
}

int	main()
{
	char	arrChar[] = {'a', 'b', 'c', 'd'};
	int		arrInt[] = {10, 20, 30, 40};
	float	arrFloat[] = {1.11f, 2.22f, 3.33f, 4.44f};

	size_t const	amountChar = (sizeof(arrChar) / sizeof(char));
	size_t const	amountInt = (sizeof(arrInt) / sizeof(int));
	size_t const	amountFloat = (sizeof(arrFloat) / sizeof(float));

	iter(arrChar, amountChar, increateNum<char>);
	iter(arrChar, amountChar, print<const char>);
	iter(arrInt, amountInt, increateNum<int>);
	iter(arrInt, amountInt, print<const int>);
	iter(arrFloat, amountFloat, increateNum<float>);
	iter(arrFloat, amountFloat, print<const float>);
	return 0;
}