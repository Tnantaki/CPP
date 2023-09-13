/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:31 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const signGrade, int const executeGrade)
: _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << YELLOW << "[Form] Parametric Constructor Called" << RESET << std::endl;
}

Form::Form(Form const& other) : _name(other._name), _signed(other._signed),
_signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	std::cout << YELLOW << "[Form] Copy Constructor Called" << RESET << std::endl;
}


Form&	Form::operator=(Form const& rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		std::cout << YELLOW << "[Form] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << YELLOW << "[Form] Destructor Called" << RESET << std::endl;
}

std::ostream&	operator<<(std::ostream& OUT, Form const& obj)
{
	OUT << "Form's " << obj.getName();
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

std::string	Form::getName() const {return this->_name;}

bool	Form::getSigned() const {return this->_signed;}

int	Form::getSignGrade() const {return this->_signGrade;}

int	Form::getExecuteGrade() const {return this->_executeGrade;}

void	Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

// ********************************************************** //
// ------------------- Exception Handling ------------------- //
// ********************************************************** //

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
