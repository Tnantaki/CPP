/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:25:35 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:25:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	// std::cout << YELLOW << "[RobotomyRequestForm] Parametric Constructor Called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other)
: AForm(other)
{
	// std::cout << YELLOW << "[RobotomyRequestForm] Copy Constructor Called" << RESET << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
		// std::cout << YELLOW << "[RobotomyRequestForm] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << YELLOW << "[RobotomyRequestForm] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSigned())
		throw AForm::IsNotSignException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << GREEN << "Bzzzz, " << this->_target << " has been robotomized" << RESET << std::endl;
	else
		std::cout << RED << "!!!, failed to robotomy to "<< this->_target << RESET << std::endl;
}
