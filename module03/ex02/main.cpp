/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:21:36 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:21:36 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	ft("SnoopDogg");	

	ft.highFivesGuys();
	ft.takeDamage(20);
	ft.beRepaired(10);
	ft.attack("Red Dragon");
	return 0;
}
