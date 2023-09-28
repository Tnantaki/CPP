/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include <exception>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "p point to type: " << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "p point to type: " << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "p point to type: " << "C" << std::endl;
}

void	identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "p point to type: " << "A" << std::endl;
		return ;
	} catch (std::exception & e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "p point to type: " << "B" << std::endl;
		return ;
	} catch (std::exception & e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "p point to type: " << "C" << std::endl;
		return ;
	} catch (std::exception & e) {}
}

int	main()
{
	Base*	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}