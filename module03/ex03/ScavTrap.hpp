/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:22:29 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:22:29 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
{
public:
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const& other);
	ScavTrap&	operator=(ScavTrap const& rhs);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};

#endif