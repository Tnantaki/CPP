/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:34 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:34 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const& type) : _type(type)
{
	std::cout << "[WrongAnimal] Parametric Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other) : _type(other._type)
{
	std::cout << "[WrongAnimal] Copy Constructor Called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	std::cout << "[WrongAnimal] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor Called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound!" << std::endl;
}
