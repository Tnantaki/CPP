/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:27 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:27 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
public:
	Dog();
	Dog(Dog const& other);
	Dog&	operator=(Dog const& rhs);
	~Dog();

	void		makeSound() const;
};

#endif