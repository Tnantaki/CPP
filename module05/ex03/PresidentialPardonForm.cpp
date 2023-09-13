/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:25:40 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:25:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	// std::cout << YELLOW << "[PresidentialPardonForm] Parametric Constructor Called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other)
: AForm(other)
{
	// std::cout << YELLOW << "[PresidentialPardonForm] Copy Constructor Called" << RESET << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
		// std::cout << YELLOW << "[PresidentialPardonForm] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << YELLOW << "[PresidentialPardonForm] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSigned())
		throw AForm::IsNotSignException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	std::cout << GREEN << this->_target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
}
