/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:16:36 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:16:36 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB(void);
	void	setWeapon(Weapon& weapon);
	void	attack(void);
};

#endif