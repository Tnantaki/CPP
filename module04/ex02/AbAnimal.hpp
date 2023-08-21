/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:24:45 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:24:45 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABANIMAL_HPP
# define ABANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AbAnimal
{
protected:
	std::string	_type;
public:
	AbAnimal();
	AbAnimal(std::string const& type);
	AbAnimal(AbAnimal const& other);
	AbAnimal&	operator=(AbAnimal const& rhs);
	virtual ~AbAnimal();

	std::string		getType() const;
	virtual void	makeSound() const = 0;
};

#endif