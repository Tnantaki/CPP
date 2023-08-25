/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:21:42 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:21:42 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attdmg = 20;
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	std::cout << "ScavTrap Assignment Operator Called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " was Broken" <<std::endl;
	}
	else if (this->_energy > 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->_attdmg;
		std::cout << " points of damage!" <<std::endl;
		this->_energy -= 1;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " not enough energy point" <<std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap are in Gate keeper mode" << std::endl;
}
