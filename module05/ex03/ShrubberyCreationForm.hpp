/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:25:25 by marvin            #+#    #+#             */
/*   Updated: 2023/09/12 18:25:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;

	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& other);
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& rhs);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const& executor) const;
	class CanNotOpenFileException : public std::exception {
	public:
		const char* what() const throw();
	};
};

#define ASCII_TREES "\
       ....                             \n\
    .=**+===:.                          \n\
   :***=======.                         \n\
   +**+=======-          ...            \n\
   -**+=======:    :::-+*++==-====:.    \n\
  :***+=======-  :*****+=============-. \n\
  ***==========- +***+=================.\n\
 .**+==========- :***==================.\n\
 .+*+==========-  ***==================:\n\
 +**+===*=======: ***+=======*=========-\n\
.***====#*+=====- :***+======#++======-.\n\
 +**====##======:  .-+***++++#*====-:.  \n\
 :**+==*#*=====-        ..::+#+:::.     \n\
  .=*+=+##===-.             =#*         \n\
     .-*##-..               +##.        \n\
       +**:                 ***:        "

#endif