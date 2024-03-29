/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:25:35 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:25:35 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter; // Forward Declaration

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(std::string const& type);
	AMateria(AMateria const& other);
	AMateria&	operator=(AMateria const& rhs);
	virtual ~AMateria();

	std::string const&	getType() const; //Returns the materia type

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif