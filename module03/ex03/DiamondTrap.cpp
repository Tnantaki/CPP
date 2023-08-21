/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:22:02 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:22:02 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const& name)
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_attdmg = 30;
	std::cout << "DiamondTrap Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other)
: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs)
{
	std::cout << "DiamondTrap Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
		ScavTrap::operator=(rhs);
		FragTrap::operator=(rhs);
		this->_name = rhs._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << " derived from " << ClapTrap::_name << std::endl;
}