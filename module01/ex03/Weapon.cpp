/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:16:47 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:16:47 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {}

std::string	Weapon::getType(void) const {return (this->_type);}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
