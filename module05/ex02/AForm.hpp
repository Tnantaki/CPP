/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:17:39 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:17:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat; // Forward Declaration

class AForm
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_signGrade;
	int const			_executeGrade;

	AForm();
public:
	AForm(std::string const name, int const signGrade, int const executeGrade);
	AForm(AForm const& other);
	AForm&	operator=(AForm const& rhs);
	virtual ~AForm();

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
	class IsNotSignException : public std::exception {
	public:
		const char* what() const throw();
	};

	virtual void	execute(Bureaucrat const& executor) const = 0;
};

std::ostream&	operator<<(std::ostream& OUT, AForm const& obj);

#endif