/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:26:19 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:26:19 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	matTest()
{
	MateriaSource src1;
	MateriaSource src2;

	src1.learnMateria(new Ice());
	src1.learnMateria(new Ice());
	src2.learnMateria(new Cure());
	src2.learnMateria(new Cure());

	MateriaSource src3 = src1;
	Character	mos("Mos");
	mos.equip(src3.createMateria("ice"));
	mos.equip(src3.createMateria("cure"));

	src1 = src2;
	mos.equip(src3.createMateria("cure"));
	mos.equip(src3.createMateria("ice"));
}

void	charTest()
{
	MateriaSource src;
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	Character	mos("Mos");
	Character	prach("Prach");
	AMateria	*tmp = src.createMateria("Bombbaga");
	std::cout << "tmp :" << tmp << std::endl;

	tmp = src.createMateria("ice");
	mos.equip(tmp);
	tmp = src.createMateria("cure");
	prach.equip(tmp);
	prach.use(0, mos);

	prach = mos;
	prach.use(0, mos);

	prach.unequip(1);
	tmp = prach.leftMateria(0);
	prach.unequip(0);

	mos.use(0, prach);
	delete tmp;
	tmp = NULL;
}

int	main(void)
{
	// matTest();
	// charTest();
	IMateriaSource*	src = new MateriaSource;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");

	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
