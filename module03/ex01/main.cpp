/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:20:58 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:20:58 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("Robot");
	ClapTrap	ct("Rudeus");

	st.attack("Red Dragon");
	ct.attack("Red Dragon");

	st.takeDamage(20);
	st.beRepaired(10);
	st.guardGate();
	return 0;
}
