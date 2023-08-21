/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:24:43 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:24:43 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AbAnimal.hpp"

AbAnimal::AbAnimal()
{
	std::cout << "[AbAnimal] Constructor Called" << std::endl;
}

AbAnimal::AbAnimal(std::string const& type) : _type(type)
{
	std::cout << "[AbAnimal] Parametric Constructor Called" << std::endl;
}

AbAnimal::AbAnimal(AbAnimal const& other) : _type(other._type)
{
	std::cout << "[AbAnimal] Copy Constructor Called" << std::endl;
}

AbAnimal&	AbAnimal::operator=(AbAnimal const& rhs)
{
	std::cout << "[AbAnimal] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

AbAnimal::~AbAnimal()
{
	std::cout << "[AbAnimal] Destructor Called" << std::endl;
}

std::string	AbAnimal::getType() const
{
	return this->_type;
}
