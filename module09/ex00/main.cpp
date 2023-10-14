/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 09:02:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac > 2) {
		std::cerr << RED << "Error: program take 1 parameter." << RESET << std::endl;
		return 1;
	}
	try {
		BTC	bitCoin;

		std::cout << std::setprecision(2) << std::fixed;
		bitCoin.evaluate(av[1]);
	}
	catch (std::exception & e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}