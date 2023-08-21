/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:21:30 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:21:30 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
public:
	FragTrap(std::string const name);
	FragTrap(FragTrap const& other);
	FragTrap&	operator=(FragTrap const& rhs);
	~FragTrap();

	void	highFivesGuys(void);
};

#endif