/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:34 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat; // Forward Declaration

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_signGrade;
	int const			_executeGrade;

	Form();
public:
	Form(std::string const name, int const signGrade, int const executeGrade);
	Form(Form const& other);
	Form&	operator=(Form const& rhs);
	~Form();

	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecuteGrade() const;

	void	beSigned(Bureaucrat const& bureaucrat);

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& OUT, Form const& obj);

#endif