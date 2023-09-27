/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:04:54 by marvin            #+#    #+#             */
/*   Updated: 2023/09/13 23:04:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->_formName[0] = "shrubbery creation";
	this->_formName[1] = "robotomy request";
	this->_formName[2] = "presidential pardon";
	// std::cout << YELLOW << "[Intern] Parametric Constructor Called" << RESET << std::endl;
}

Intern::Intern(Intern const& other)
{
	this->_formName[0] = other._formName[0];
	this->_formName[1] = other._formName[1];
	this->_formName[2] = other._formName[2];
	// std::cout << YELLOW << "[Intern] Copy Constructor Called" << RESET << std::endl;
}

Intern&	Intern::operator=(Intern const& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
			this->_formName[i] = rhs._formName[i];
		// std::cout << YELLOW << "[Intern] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

Intern::~Intern()
{
	// std::cout << YELLOW << "[Intern] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

AForm*	Intern::makeForm(std::string const formName, std::string const targetName) const
{
	for (int i = 0; i < 3; i++)
	{
		if (formName.compare(this->_formName[i]) == 0)
		{
			std::cout << GREEN << "Intern creates " << this->_formName[i] << RESET << std::endl;
			switch (i)
			{
				case 0:
					return new ShrubberyCreationForm(targetName);
				case 1:
					return new RobotomyRequestForm(targetName);
				case 2:
					return new PresidentialPardonForm(targetName);
			}
		}
	}
	std::cout << RED << formName << " form doesn’t exist." << RESET << std::endl;
	return (NULL);
}
