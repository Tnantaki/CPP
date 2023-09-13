/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:04:59 by marvin            #+#    #+#             */
/*   Updated: 2023/09/13 23:04:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Bureaucrat; // Forward Declaration

class Intern
{
private:
	std::string	_formName[3];
public:
	Intern();
	Intern(Intern const& other);
	Intern&	operator=(Intern const& rhs);
	~Intern();

	void	prtCheck();

	AForm*	makeForm(std::string const formName, std::string const targetName) const;
};

#endif