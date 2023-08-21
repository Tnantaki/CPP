/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:22:21 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:22:21 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond("Rudues");

	diamond.attack("Red dragon");
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	return 0;
}
