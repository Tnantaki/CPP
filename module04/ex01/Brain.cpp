/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:24:05 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:24:05 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Created" << std::endl;
}

Brain::Brain(Brain const& other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
}

Brain&	Brain::operator=(Brain const& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destroyed" << std::endl;
}
