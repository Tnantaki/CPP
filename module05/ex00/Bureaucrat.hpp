/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:00 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

	Bureaucrat();
public:
	Bureaucrat(std::string const name, int const grade);
	Bureaucrat(Bureaucrat const& other);
	Bureaucrat&	operator=(Bureaucrat const& rhs);
	~Bureaucrat();

	std::string	getName() const;
	int			getGrade() const;

	void	increaseGrade();
	void	decreaseGrade();

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& OUT, Bureaucrat const& obj);

#endif