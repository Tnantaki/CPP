/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:25:39 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:25:39 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& name) : _name(name)
{
	// std::cout << "[Character] Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

Character::Character(Character const& other) : _name(other._name)
{
	// std::cout << "[Character] Copy Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._mat[i])
			this->_mat[i] = other._mat[i]->clone();
	}
}

Character&	Character::operator=(Character const& rhs)
{
	// std::cout << "[Character] Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			delete this->_mat[i];
			this->_mat[i] = NULL;
			if (rhs._mat[i])
				this->_mat[i] = rhs._mat[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	// std::cout << "[Character] Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_mat[i];
		this->_mat[i] = NULL;
	}
}

std::string const&	Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!(this->_mat[i]))
		{
			this->_mat[i] = m;
			std::cout << this->_name << " has equiped " << m->getType();
			std::cout << " in slot [" << i << "]" << std::endl;
			return ;
		}
	}
	std::cout << "No empty slot." << std::endl;
}

void	Character::unequip(int slot)
{
	if (slot >= 0 && slot < 4)
	{
		if (this->_mat[slot])
		{
			std::cout << this->_name << " unequiped ";
			std::cout << this->_mat[slot]->getType() << std::endl;
			this->_mat[slot] = NULL;
			return ;
		}
		else
			std::cout << "Slot [" << slot << "] no material to unequip." << std::endl;
	}
	else
		std::cout << "There are only slot [0 - 3]." << std::endl;
}

void	Character::use(int slot, ICharacter& target)
{
	if (slot >= 0 && slot < 4)
	{
		if (this->_mat[slot])
			this->_mat[slot]->use(target);
		else
			std::cout << "Slot [" << slot << "] is empty." << std::endl;
	}
	else
		std::cout << "There are only slot [0 - 3]." << std::endl;
}

AMateria*	Character::leftMateria(int slot) const
{
	if (slot >= 0 && slot < 4)
		return (this->_mat[slot]);
	return NULL;
}
