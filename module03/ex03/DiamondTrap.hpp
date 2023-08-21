/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:22:07 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:22:07 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:public ScavTrap,public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(std::string const& name);
	DiamondTrap(DiamondTrap const& other);
	DiamondTrap&	operator=(DiamondTrap const& rhs);
	~DiamondTrap();

	using	ScavTrap::attack;
	void	whoAmI();
};

#endif