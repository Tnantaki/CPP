/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:25:02 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:25:02 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AbAnimal.hpp"

class Cat:public AbAnimal
{
private:
	Brain*	_brain;
public:
	Cat();
	Cat(Cat const& other);
	Cat&	operator=(Cat const& rhs);
	~Cat();

	void	makeSound() const;
};

#endif