/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:20:44 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:20:44 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct1("Rudeus");

	ct1.attack("Red Dragon");
	ct1.attack("Green Dragon");
	ct1.attack("Black Dragon");
	ct1.attack("Blue Dragon");
	ct1.attack("White Dragon");
	ct1.takeDamage(8);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.beRepaired(1);
	ct1.takeDamage(10);
	ct1.attack("White Dragon");

	return 0;
}
