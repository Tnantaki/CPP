/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:40 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

struct Param
{
	std::string	a;
	int			b;
	int			c;
};

void	testForm()
{
	Param	param[] = {
		{"Warrior", 0, 20},
		{"Archer", 20, 0},
		{"Mage", 151, 20},
		{"Acolyte", 20, 151},
		{"Merchant", 0, 0},
		{"Thief", 151, 151}};
	for (int i = 0; i < 6; i++)
	{
		try
		{
			Form	form(param[i].a, param[i].b, param[i].c);
		}
		catch (std::exception & e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
}

int	main(void)
{
	// testForm();
	try
	{
		Form		form("Warrior", 30, 20);
		Bureaucrat	obj1("Mark", 30);
		Bureaucrat	obj2("Mos", 31);

		std::cout << form << std::endl;
		std::cout << obj1 << std::endl;
		std::cout << obj2 << std::endl;

		obj1.signForm(form);
		std::cout << form << std::endl;
		obj2.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (0);
}