/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:21 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	// std::cout << YELLOW << "[Bureaucrat] Parametric Constructor Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : _name(other._name), _grade(other._grade)
{
	// std::cout << YELLOW << "[Bureaucrat] Copy Constructor Called" << RESET << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
		// std::cout << YELLOW << "[Bureaucrat] Copy Assignment Operator Called" << RESET << std::endl;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << YELLOW << "[Bureaucrat] Destructor Called" << RESET << std::endl;
}

std::ostream&	operator<<(std::ostream& OUT, Bureaucrat const& obj)
{
	OUT << GREEN << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << RESET;
	return (OUT);
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

std::string	Bureaucrat::getName() const {return this->_name;}

int	Bureaucrat::getGrade() const {return this->_grade;}

void	Bureaucrat::increaseGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void	Bureaucrat::decreaseGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN << this->_name << " signed " << form.getName() << RESET << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << RED << this->_name << " couldn't sign " << form.getName();
		std::cerr << " because " << e.what() << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.execute(*this);
		std::cout << GREEN << this->_name << " executed " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->_name << " couldn't execute " << form.getName();
		std::cerr << " because " << e.what() << RESET << std::endl;
	}
	
}

// ********************************************************** //
// ------------------- Exception Handling ------------------- //
// ********************************************************** //

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
