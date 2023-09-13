/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:17:47 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:17:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int const signGrade, int const executeGrade)
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw AForm::GradeTooLowException();
	// std::cout << YELLOW << "[AForm] Parametric Constructor Called" << RESET << std::endl;
}

AForm::AForm(AForm const& other) : _name(other._name), _signed(other._signed),
_signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	// std::cout << YELLOW << "[AForm] Copy Constructor Called" << RESET << std::endl;
}


AForm&	AForm::operator=(AForm const& rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		// std::cout << YELLOW << "[AForm] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

AForm::~AForm()
{
	// std::cout << YELLOW << "[AForm] Destructor Called" << RESET << std::endl;
}

std::ostream&	operator<<(std::ostream& OUT, AForm const& obj)
{
	OUT << "AForm's " << obj.getName();
	OUT << ", Signed grade required : " << obj.getSignGrade();
	OUT << ", Execute grade required : " << obj.getExecuteGrade() << std::endl;
	OUT << "Signed status : ";
	if (obj.getSigned())
		OUT << GREEN << "Signed" << RESET;
	else
		OUT << RED << "it's not signed" << RESET;
	return (OUT);
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

std::string	AForm::getName() const {return this->_name;}

bool	AForm::getSigned() const {return this->_signed;}

int	AForm::getSignGrade() const {return this->_signGrade;}

int	AForm::getExecuteGrade() const {return this->_executeGrade;}

void	AForm::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

// ********************************************************** //
// ------------------- Exception Handling ------------------- //
// ********************************************************** //

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	AForm::IsNotSignException::what() const throw()
{
	return ("Form is not sign");
}