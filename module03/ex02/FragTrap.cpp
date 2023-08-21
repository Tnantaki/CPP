/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:21:25 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:21:25 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_attdmg = 30;
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Give Me A High Five!" << std::endl;
}