/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:10:41 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:10:44 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	cmd;
	PhoneBook	book;

	book.open_phonebook();
	while (1)
	{
		std::cout << "> ";
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			book.add_cont();
		else if (cmd.compare("SEARCH") == 0)
			book.search_cont();
		else if (cmd.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
