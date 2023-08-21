/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:12 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:12 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] Constructor Called" << std::endl;
}

Cat::Cat(Cat const& other) : Animal(other)
{
	std::cout << "[Cat] Copy Constructor Called" << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << "[Cat] Assignment Operator Called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor Called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meaw Meaw!" << std::endl;
}
