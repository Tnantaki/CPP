/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:18:19 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:18:19 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
	{
		std::cerr << "The program take one parameter" << std::endl;
		return (1);
	}
	harl.complainFilter(argv[1]);
	return (0);
}
