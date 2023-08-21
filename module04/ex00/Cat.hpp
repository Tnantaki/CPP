/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:18 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:18 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat:public Animal
{
public:
	Cat();
	Cat(Cat const& other);
	Cat&	operator=(Cat const& rhs);
	~Cat();

	void	makeSound() const;
};

#endif