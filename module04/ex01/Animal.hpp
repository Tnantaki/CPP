/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:24:01 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:24:01 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(std::string const& type);
	Animal(Animal const& other);
	Animal&	operator=(Animal const& rhs);
	virtual ~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif