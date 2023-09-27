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

#include "Bureaucrat.hpp"

int	main(void)
{
	// Bureaucrat	test;
	// std::cout << test << std::endl;
	try
	{
		Bureaucrat	obj("Mos", 0);

		// Bureaucrat	obj("Mos", 151);

		// Bureaucrat	obj("Mos", 3);
		// std::cout << obj << std::endl;
		// obj.increaseGrade();
		// std::cout << "After increase Grade" << std::endl;
		// std::cout << obj << std::endl;

		// Bureaucrat	obj("Mos", 1);
		// std::cout << obj << std::endl;
		// obj.increaseGrade();

		// Bureaucrat	obj("Mos", 150);
		// std::cout << obj << std::endl;
		// obj.decreaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return (0);
}