/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:12:17 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:12:19 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Alloated on the heap." << std::endl;
	Zombie	*zom1 = newZombie("Mos");
	(*zom1).announce();
	delete zom1;

	std::cout << "----------------------" << std::endl;
	std::cout << "Alloated on the stack." << std::endl;
	randomChump("Prach");
	return (0);
}
