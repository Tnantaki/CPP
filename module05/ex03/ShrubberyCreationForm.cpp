/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:25:29 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:25:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	// std::cout << YELLOW << "[ShrubberyCreationForm] Parametric Constructor Called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other)
: AForm(other)
{
	// std::cout << YELLOW << "[ShrubberyCreationForm] Copy Constructor Called" << RESET << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
		// std::cout << YELLOW << "[ShrubberyCreationForm] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << YELLOW << "[ShrubberyCreationForm] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::ofstream	outFile;
	std::string		fileName;

	if (!this->getSigned())
		throw AForm::IsNotSignException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	fileName = this->_target + "_shrubbery";
	outFile.open(fileName.c_str());
	if (!outFile.is_open())
		throw ShrubberyCreationForm::CanNotOpenFileException();
	outFile << ASCII_TREES;
	outFile.close();
}

// ********************************************************** //
// ------------------- Exception Handling ------------------- //
// ********************************************************** //

const char*	ShrubberyCreationForm::CanNotOpenFileException::what() const throw()
{
	return ("Can not open output file");
}
