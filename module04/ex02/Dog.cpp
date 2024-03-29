/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:25:17 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:25:17 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AbAnimal("Dog")
{
	std::cout << "[Dog] Constructor Called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const& other) : AbAnimal(other)
{
	std::cout << "[Dog] Copy Constructor Called" << std::endl;
	this->_brain = new Brain();

	*this->_brain = *other._brain;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	std::cout << "[Dog] Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		delete this->_brain;
		AbAnimal::operator=(rhs);
		this->_brain = new Brain();
		*this->_brain = *rhs._brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "[Dog] Destructor Called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Hong Hong!" << std::endl;
}
