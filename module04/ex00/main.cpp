/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:23:30 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:23:30 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << "Dog type: " << j->getType() << " " << std::endl;
	std::cout << "Cat type: " << i->getType() << " " << std::endl;
	std::cout << "[Dog]: ";
	j->makeSound();
	std::cout << "[Cat]: ";
	i->makeSound();
	std::cout << "[Ani]: ";
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "----------------------------------------" << std::endl;
	const WrongAnimal* ptrAni = new WrongAnimal();
	const WrongAnimal* ptrCat = new WrongCat();

	std::cout << "[WrongAni]: ";
	ptrAni->makeSound();
	std::cout << "[WrongCat]: ";
	ptrCat->makeSound();
	delete ptrAni;
	delete ptrCat;
	return 0;
}
