/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:23 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:23 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] Constructor Called" << std::endl;
}

Dog::Dog(Dog const& other) : Animal(other)
{
	std::cout << "[Dog] Copy Constructor Called" << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	std::cout << "[Dog] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor Called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Hong Hong!" << std::endl;
}
