/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 17:22:54 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	testCanoForm()
{
	Span	sp1(5);

	sp1.addNumber(1);
	sp1.addNumber(3);
	sp1.addNumber(7);
	sp1.addNumber(9);
	std::cout << "sp1 : ";
	sp1.displayArr();

	Span	sp2 = sp1;
	sp2.addNumber(20);
	std::cout << "sp2 : ";
	sp2.displayArr();

	Span	sp3(2);
	sp3.addNumber(10);
	sp3.addNumber(20);
	std::cout << "sp3 : ";
	sp3.displayArr();
	sp3 = sp2;
	std::cout << "sp3 after assignment: ";
	sp3.displayArr();
}

void	testException()
{
	try {
		Span sp = Span(2);
		std::cout << "### Test add over storage ###" << std::endl;
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr<< RED << e.what() << RESET << std::endl;
	}
	try {
		Span sp = Span(2);
		sp.addNumber(14);
		std::cout << "### Test one number ###" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr<< RED << e.what() << RESET << std::endl;
	}
	try {
		Span sp = Span(3);
		sp.addNumber(14);
		sp.addNumber(14);
		sp.addNumber(14);
		std::cout << "### Test no span ###" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr<< RED << e.what() << RESET << std::endl;
	}
}

void	testSpan()
{
	{
		Span sp = Span(20);
		sp.addNumber(std::numeric_limits<int>::max());
		sp.addNumber(std::numeric_limits<int>::min() + 1);
		sp.addNumber(std::numeric_limits<int>::min());
		sp.addNumber(std::numeric_limits<int>::min());
		std::cout << "shortest span: "<< sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(100000);
		sp.randomAllNumbers();
		std::cout << "### Test 10000 numbers ###" << std::endl;
		std::cout << "size: " << sp.size() << std::endl;
		std::cout << "shortest span: "<< sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
}

int	main()
{
	// testCanoForm();
	// testException();
	// testSpan();
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}