/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:26:23 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:26:23 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _size(0)
{
	// std::cout << "[MateriaSource] Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_mat[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other) : _size(other._size)
{
	// std::cout << "[MateriaSource] Copy Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._mat[i])
			this->_mat[i] = other._mat[i]->clone();
		else
			this->_mat[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& rhs)
{
	// std::cout << "[MateriaSource] Assignment Operator Called" << std::endl;
	if (this != &rhs)
	{
		this->_size = rhs._size;
		for (int i = 0; i < 4; i++)
		{
			if (this->_mat[i])
				delete this->_mat[i];
			if (rhs._mat[i])
				this->_mat[i] = rhs._mat[i]->clone();
			else
				this->_mat[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "[MateriaSource] Destructor Called" << std::endl;
	for (int i = 0; i < this->_size; i++)
	{
		delete this->_mat[i];
		this->_mat[i] = NULL;
	}
}

void	MateriaSource::learnMateria(AMateria* mat)
{
	if (this->_size < 4)
	{
		this->_mat[this->_size] = mat;
		this->_size++;
	}
	else
		std::cout << "!No empty slot to learn new Materia." << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < this->_size; i++)
	{
		if (this->_mat[i]->getType() == type)
			return this->_mat[i]->clone();
	}
	std::cout << "!There aren't " << type << " in MateriaSource." << std::endl;
	return NULL;
}
