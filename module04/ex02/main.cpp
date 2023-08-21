/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:25:23 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:25:23 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	// AbAnimal	ani; // Can't instantiate Abstract class
	AbAnimal	*dog = new Dog;
	AbAnimal	*cat = new Cat;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
	return 0;
}
