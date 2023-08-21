/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:47 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:47 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const& other);
	WrongCat&	operator=(WrongCat const& rhs);
	~WrongCat();

	void	makeSound() const;
};

#endif