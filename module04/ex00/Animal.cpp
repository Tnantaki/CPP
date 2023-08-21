/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:22:44 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:22:44 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Constructor Called" << std::endl;
}

Animal::Animal(std::string const& type) : _type(type)
{
	std::cout << "[Animal] Parametric Constructor Called" << std::endl;
}

Animal::Animal(Animal const& other) : _type(other._type)
{
	std::cout << "[Animal] Copy Constructor Called" << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs)
{
	std::cout << "[Animal] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor Called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Sound!" << std::endl;
}
